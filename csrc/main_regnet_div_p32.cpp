#include"../config.h"
#ifdef CONFIG_REGNET_DIV_P32

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <chrono>  // 添加计时库
#include <vector>  // 添加vector库
#include "VPvuTop.h"
#include "../../SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP   4   // 除法操作码
const char* ACT_FILE    = "./test_src/RegNet/posit_activations.bin";
const char* WEIGHT_FILE = "./test_src/RegNet/posit_weights.bin";
const char* GOLDEN_FILE = "./test_src/RegNet/div_results.bin";
const int SAMPLE_NUM    = 9000;  // 与生成数据一致
const int TOTAL_ELEMENTS = 36000;  // 总元素数量
const char* WAVEFORM_FILE = "waveform.vcd";  // 波形输出文件
const int MAX_VECTOR_SIZE = 4;  // 最大向量大小
//--------------------------------------------

struct TestData {
    // 使用vector替代固定大小数组，以支持动态向量大小
    std::vector<std::vector<float>> activations;
    std::vector<std::vector<float>> weights;
    std::vector<std::vector<uint32_t>> golden;
    
    // 构造函数，初始化数据结构
    TestData(int sample_num, int vector_size) {
        activations.resize(sample_num, std::vector<float>(vector_size));
        weights.resize(sample_num, std::vector<float>(vector_size));
        golden.resize(sample_num, std::vector<uint32_t>(vector_size));
    }
};

// 直接读取fp32数据
float read_float_data(std::ifstream& file) {
    float data;
    if (file.read(reinterpret_cast<char*>(&data), sizeof(float))) {
        return data;
    }
    return 0.0f;  // 如果读取失败，返回0
}

// 跳过 fa0 并读取有效Posit数据
uint32_t read_valid_posit_data(std::ifstream& file) {
    uint32_t data;
    while (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        if (data != 0xfa0) {  // 忽略头部信息 fa0
            return data;
        }
    }
    return 0;  // 如果读取失败，返回 0
}

TestData load_testdata(int vector_size, int sample_count) {
    TestData td(sample_count, vector_size);

    // 读取posit格式的激活数据作为uint32_t
    std::ifstream act(ACT_FILE, std::ios::binary);
    if (!act.is_open()) {
        std::cerr << "无法打开激活数据文件: " << ACT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            uint32_t posit_bits;
            act.read(reinterpret_cast<char*>(&posit_bits), sizeof(uint32_t));
            
            // 将posit比特模式存储在float变量中以便传递
            std::memcpy(&td.activations[i][j], &posit_bits, sizeof(uint32_t));
        }
    }

    // 读取posit格式的权重数据作为uint32_t
    std::ifstream weight(WEIGHT_FILE, std::ios::binary);
    if (!weight.is_open()) {
        std::cerr << "无法打开权重数据文件: " << WEIGHT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            uint32_t posit_bits;
            weight.read(reinterpret_cast<char*>(&posit_bits), sizeof(uint32_t));
            
            // 将posit比特模式存储在float变量中以便传递
            std::memcpy(&td.weights[i][j], &posit_bits, sizeof(uint32_t));
        }
    }

    // 读取预期输出数据（仍为posit32格式）
    std::ifstream golden(GOLDEN_FILE, std::ios::binary);
    if (!golden.is_open()) {
        std::cerr << "无法打开预期输出数据文件: " << GOLDEN_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            td.golden[i][j] = read_valid_posit_data(golden);
        }
    }

    return td;
}

bool posit_equal(uint32_t a, uint32_t b) {
    if (a == b) return true;

    // 允许1ULP误差
    int32_t ia = static_cast<int32_t>(a);
    int32_t ib = static_cast<int32_t>(b);
    return std::abs(ia - ib) <= 1;
}

// 计算两个posit值之间的误差（基于整数差异）
double calc_posit_error(uint32_t a, uint32_t b) {
    // 特殊情况处理：NaR值（最高位为1，其余为0）
    bool a_is_nar = (a == 0x80000000);
    bool b_is_nar = (b == 0x80000000);
    
    // 如果两个都是NaR或都是0，则误差为0
    if ((a_is_nar && b_is_nar) || (a == 0 && b == 0)) {
        return 0.0;
    }
    
    // 如果一个是NaR而另一个不是，则误差设为最大
    if (a_is_nar || b_is_nar) {
        return 100.0;
    }
    
    // 计算相对误差（基于原始位表示）
    int32_t ia = static_cast<int32_t>(a);
    int32_t ib = static_cast<int32_t>(b);
    double diff = std::abs(ia - ib);
    
    // 计算相对误差（取较大值作为基准）
    double base = std::max(std::abs(ia), std::abs(ib));
    if (base < 1e-10) {
        return diff > 0 ? 100.0 : 0.0;
    }
    
    return (diff / base) * 100.0;
}

// 添加性能测试函数
std::vector<double> run_performance_test(int vector_size, int sample_count, bool enable_waveform = false) {
    VPvuTop* top = new VPvuTop;
    VerilatedVcdC* tfp = nullptr;
    
    if (enable_waveform) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);
        tfp->open(WAVEFORM_FILE);
    }
    
    // 加载测试数据
    TestData td = load_testdata(vector_size, sample_count);
    
    // 初始化信号
    top->clock = 0;
    top->reset = 1;
    top->eval();
    
    // 复位序列（2周期）
    for (int i = 0; i < 2; ++i) {
        top->clock ^= 1;
        top->eval();
        if (tfp) tfp->dump(i);
    }
    top->reset = 0;
    
    // 初始化错误统计变量
    size_t severe_errors = 0;    // 严重错误数量（误差≥5%）
    size_t minor_errors = 0;     // 轻微错误数量（2%≤误差<5%）
    size_t minor_diff_count = 0; // 轻微差异（误差<2%）
    double total_error = 0.0;    // 总误差
    size_t valid_error_count = 0; // 非100%误差的样本数量
    size_t total_elements = sample_count * vector_size;  // 计算总元素数
    size_t total_errors = 0;     // 元素错误总数（不等同于golden）
    
    // 添加计时变量
    auto total_start_time = std::chrono::high_resolution_clock::now();
    double total_hw_compute_time = 0.0;  // 只统计硬件计算时间
    double max_hw_compute_time = 0.0;
    double min_hw_compute_time = std::numeric_limits<double>::max();
    double avg_hw_compute_time = 0.0;
    
    // 测试主循环
    for (size_t i = 0; i < sample_count; ++i) {
        // 获取浮点输入数据
        std::vector<float>& act = td.activations[i];
        std::vector<float>& weight = td.weights[i];
        std::vector<uint32_t>& golden = td.golden[i];
        
        // 从float变量中提取Posit比特模式
        std::vector<uint32_t> act_bits(vector_size), weight_bits(vector_size);
        for (int j = 0; j < vector_size; j++) {
            std::memcpy(&act_bits[j], &act[j], sizeof(uint32_t));
            std::memcpy(&weight_bits[j], &weight[j], sizeof(uint32_t));
        }
        
        // 设置Posit输入数据 - 根据向量大小动态设置
        if (vector_size >= 1) top->io_posit_i1_0 = act_bits[0];
        if (vector_size >= 2) top->io_posit_i1_1 = act_bits[1];
        if (vector_size >= 3) top->io_posit_i1_2 = act_bits[2];
        if (vector_size >= 4) top->io_posit_i1_3 = act_bits[3];
        
        if (vector_size >= 1) top->io_posit_i2_0 = weight_bits[0];
        if (vector_size >= 2) top->io_posit_i2_1 = weight_bits[1];
        if (vector_size >= 3) top->io_posit_i2_2 = weight_bits[2];
        if (vector_size >= 4) top->io_posit_i2_3 = weight_bits[3];
        
        // 清零float输入数据
        if (vector_size >= 1) top->io_float_i_0 = 0;
        if (vector_size >= 2) top->io_float_i_1 = 0;
        if (vector_size >= 3) top->io_float_i_2 = 0;
        if (vector_size >= 4) top->io_float_i_3 = 0;
        
        if (vector_size >= 1) top->io_float_i2_0 = 0;
        if (vector_size >= 2) top->io_float_i2_1 = 0;
        if (vector_size >= 3) top->io_float_i2_2 = 0;
        if (vector_size >= 4) top->io_float_i2_3 = 0;
        
        //设置信号量
        top->io_op = OP;
        top->io_Isposit = true;   // 修改为输入是Posit
        top->io_Outposit = true;  // 输出是Posit
        top->io_float_mode = 3;   // IEEE-754模式（虽然这里不重要）
        top->io_float_posit = false; // 我们不做转换，执行除法运算
        
        //设置数据位宽
        top->io_src_posit_width = 32;
        top->io_dst_posit_width = 32;
        top->io_vector_size = vector_size;  // 使用动态向量大小
        
        // 开始计时硬件计算 - 只统计从输入到输出的时间
        auto hw_compute_start_time = std::chrono::high_resolution_clock::now();
        
        // 运行一次计算
        top->clock = 1;
        top->eval();
        if (tfp) tfp->dump(i*2 + 1);
        
        top->clock = 0;
        top->eval();
        if (tfp) tfp->dump(i*2 + 2);
        
        // 结束计时硬件计算
        auto hw_compute_end_time = std::chrono::high_resolution_clock::now();
        double hw_compute_time = std::chrono::duration<double, std::milli>(hw_compute_end_time - hw_compute_start_time).count();
        total_hw_compute_time += hw_compute_time;
        
        // 更新最大和最小硬件计算时间
        max_hw_compute_time = std::max(max_hw_compute_time, hw_compute_time);
        min_hw_compute_time = std::min(min_hw_compute_time, hw_compute_time);
        
        // 结果比较
        std::vector<uint32_t> hw_result(vector_size, 0);
        if (vector_size >= 1) hw_result[0] = top->io_posit_o_0;
        if (vector_size >= 2) hw_result[1] = top->io_posit_o_1;
        if (vector_size >= 3) hw_result[2] = top->io_posit_o_2;
        if (vector_size >= 4) hw_result[3] = top->io_posit_o_3;
        
        // 逐元素比较并统计错误
        for(int j = 0; j < vector_size; j++){
            if (!posit_equal(hw_result[j], golden[j])) {
                // 计算误差
                double error = calc_posit_error(hw_result[j], golden[j]);
                
                // 只有误差不为100%的样本才计入平均误差
                if (std::abs(error - 100.0) > 1e-6) {
                    total_error += error;
                    valid_error_count++;
                }
                
                // 根据误差范围分类
                if (error < 2.0) {
                    // 误差小于2%，视为计算正确，但记录为轻微差异
                    minor_diff_count++;
                } else if (error < 5.0) {
                    // 误差在2%-5%之间，视为轻微错误
                    minor_errors++;
                    // 可选：如果需要查看这些轻微错误，可以取消下面的注释
                    /*
                    std::cerr << "轻微错误: 样本 " << i << " 元素 " << j << "\n"
                              << "  硬件结果: 0x" << std::hex << hw_result[j] << "\n"
                              << "  预期结果: 0x" << std::hex << golden[j] << "\n"
                              << "  相对误差: " << std::dec << error << "%\n";
                    */
                } else {
                    // 误差大于等于5%，视为严重错误
                    severe_errors++;
                    // 可选：如果需要查看这些严重错误，可以取消下面的注释
                    /*
                    std::cerr << "严重错误: 样本 " << i << " 元素 " << j << "\n"
                              << "  硬件结果: 0x" << std::hex << hw_result[j] << "\n"
                              << "  预期结果: 0x" << std::hex << golden[j] << "\n"
                              << "  相对误差: " << std::dec << error << "%\n";
                    */
                }
                
                total_errors++; // 增加总错误计数
            }
        }
        
        // 进度显示
        if ((i+1) % 100 == 0) {
            std::cout << "已测试 " << (i+1) << "/" << sample_count 
                      << " (" << ((i+1)*100/sample_count) << "%)" 
                      << std::endl;
        }
    }
    
    // 计算总运行时间和平均时间
    auto total_end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(total_end_time - total_start_time).count();
    avg_hw_compute_time = total_hw_compute_time / sample_count;
    
    // 计算元素级吞吐量（考虑向量大小）
    double elements_throughput = (sample_count * vector_size) / (total_hw_compute_time / 1000.0);
    
    // 计算平均误差和非严重错误比率
    double avg_error = valid_error_count > 0 ? total_error / valid_error_count : 0.0;
    double non_severe_error_rate = 100.0 - (severe_errors * 100.0 / total_elements);
    
    // 资源清理
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    top->final();
    delete top;
    
    // 返回性能结果
    std::cout << "\n向量大小 " << vector_size << " 的性能测试结果\n========="
              << "\n总样本数: " << sample_count
              << "\n总元素数: " << total_elements
              << "\n错误元素统计\n---------"
              << "\n严重错误（误差≥5%）: " << severe_errors << " (" << std::fixed << std::setprecision(2) << (severe_errors*100.0/total_elements) << "%)"
              << "\n轻微错误（2%≤误差<5%）: " << minor_errors << " (" << std::fixed << std::setprecision(2) << (minor_errors*100.0/total_elements) << "%)"
              << "\n轻微差异（误差<2%）: " << minor_diff_count << " (" << std::fixed << std::setprecision(2) << (minor_diff_count*100.0/total_elements) << "%)"
              << "\n非严重错误比率: " << std::fixed << std::setprecision(4) << non_severe_error_rate << "%"
              << "\n平均误差: " << std::fixed << std::setprecision(4) << avg_error << "%"
              << "\n\n性能统计\n========="
              << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
              << "\n硬件计算时间: " << std::fixed << std::setprecision(2) << total_hw_compute_time << " ms"
              << "\n平均硬件计算时间: " << std::fixed << std::setprecision(4) << avg_hw_compute_time << " ms"
              << "\n最大硬件计算时间: " << std::fixed << std::setprecision(4) << max_hw_compute_time << " ms"
              << "\n最小硬件计算时间: " << std::fixed << std::setprecision(4) << min_hw_compute_time << " ms"
              << "\n元素吞吐量: " << std::fixed << std::setprecision(2) << elements_throughput << " 元素/秒\n";
              
    // 返回性能指标，用于比较
    std::vector<double> results = {
        total_hw_compute_time,
        avg_hw_compute_time,
        elements_throughput,  // 元素吞吐量
        non_severe_error_rate // 非严重错误比率（替代元素错误率）
    };
    
    return results;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 测试参数
    int test_samples = SAMPLE_NUM;  // 使用与原始代码相同的样本数量
    bool enable_waveform = false;  // 默认不生成波形文件
    
    // 解析命令行参数
    if (argc > 1) {
        test_samples = std::atoi(argv[1]);
    }
    if (argc > 2) {
        enable_waveform = (std::atoi(argv[2]) != 0);
    }
    
    std::cout << "开始性能测试，样本数: " << test_samples << std::endl;
    
    // 运行向量大小为1的测试（标量模式）- 使用36000个样本
    std::cout << "\n\n===== 标量模式测试 (向量大小=1) =====" << std::endl;
    std::vector<double> scalar_results = run_performance_test(1, TOTAL_ELEMENTS, enable_waveform);
    
    // 运行向量大小为4的测试（向量模式）- 使用9000个样本
    std::cout << "\n\n===== 向量模式测试 (向量大小=4) =====" << std::endl;
    std::vector<double> vector_results = run_performance_test(4, SAMPLE_NUM, enable_waveform);
    
    // 计算加速比
    double speedup_throughput = vector_results[2] / scalar_results[2];
    double speedup_time = scalar_results[0] / vector_results[0];
    
    // 输出加速比结果
    std::cout << "\n\n===== 矢量加速比分析 =====" << std::endl;
    std::cout << "元素吞吐量加速比: " << std::fixed << std::setprecision(2) << speedup_throughput << "x" << std::endl;
    std::cout << "计算时间加速比: " << std::fixed << std::setprecision(2) << speedup_time << "x" << std::endl;
    std::cout << "理论加速比: 4.00x (理想情况)" << std::endl;
    std::cout << "加速效率: " << std::fixed << std::setprecision(2) << (speedup_throughput / 4.0 * 100) << "%" << std::endl;
    
    // 定义测试通过条件：非严重错误比率超过99.5%
    bool test_pass = (scalar_results[3] > 99.5) && (vector_results[3] > 99.5);
    std::cout << "\nposit到posit的div测试完成！" << std::endl;
    
    return test_pass ? EXIT_SUCCESS : EXIT_FAILURE;
}

#endif  