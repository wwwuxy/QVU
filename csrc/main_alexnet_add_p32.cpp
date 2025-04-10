#include"../config.h"
#ifdef CONFIG_ALEXNET_ADD_P32

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
#define OP   1
const char* ACT_FILE    = "./test_src/AlexNet/posit_activations.bin";
const char* WEIGHT_FILE = "./test_src/AlexNet/posit_weights.bin";
const char* GOLDEN_FILE = "./test_src/AlexNet/add_results.bin";
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
    
    size_t errors = 0;
    
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
        top->io_float_posit = false; // 我们不做转换，执行加法运算
        
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
        
        for(int j = 0; j < vector_size; j++){
            if (!posit_equal(hw_result[j], golden[j])) {
                std::cerr << "样本 " << i << " 不匹配\n"
                          << "  硬件: 0x" << std::hex;
                for(int k = 0; k < vector_size; k++) {
                    std::cerr << hw_result[k] << (k < vector_size-1 ? ", " : "");
                }
                std::cerr << "\n  预期: 0x" << std::hex;
                for(int k = 0; k < vector_size; k++) {
                    std::cerr << golden[k] << (k < vector_size-1 ? ", " : "");
                }
                std::cerr << "\n  激活数据: 0x" << std::hex;
                for(int k = 0; k < vector_size; k++) {
                    std::cerr << act_bits[k] << (k < vector_size-1 ? ", " : "");
                }
                std::cerr << "\n  权重数据: 0x" << std::hex;
                for(int k = 0; k < vector_size; k++) {
                    std::cerr << weight_bits[k] << (k < vector_size-1 ? ", " : "");
                }
                std::cerr << std::dec << std::endl;
                errors++;
                break;  // 一旦发现错误就跳出循环
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
    
    // 资源清理
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    top->final();
    delete top;
    
    // 计算元素级吞吐量（考虑向量大小）
    double elements_throughput = (sample_count * vector_size) / (total_hw_compute_time / 1000.0);
    
    // 返回性能结果
    std::cout << "\n向量大小 " << vector_size << " 的性能测试结果\n========="
              << "\n总样本数: " << sample_count
              << "\n总元素数: " << (sample_count * vector_size)
              << "\n错误数量: " << errors
              << "\n错误率:   " << std::fixed << std::setprecision(2)
              << (errors*100.0/sample_count) << "%\n"
              << "\n性能统计\n========="
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
        elements_throughput  // 元素吞吐量
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
    
    return 0;
}

#endif 