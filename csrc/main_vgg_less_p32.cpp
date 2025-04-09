#include"../config.h"
#ifdef CONFIG_VGG_LESS_P32

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
#define OP   9   // op9对应posit32的小于比较操作
const char* ACT_FILE    = "./test_src/VGG16/posit_activations.bin";
const char* WEIGHT_FILE = "./test_src/VGG16/posit_weights.bin";
const char* GOLDEN_FILE = "./test_src/VGG16/less_results.bin";
const int SAMPLE_NUM    = 1000;                           // 与生成数据一致
const int TOTAL_ELEMENTS = 4000;                          // 总元素数量，用于标量模式测试
const char* WAVEFORM_FILE = "waveform.vcd";                // 波形输出文件
const int MAX_VECTOR_SIZE = 4;                             // 最大向量大小
//--------------------------------------------

struct TestData {
    // 使用动态数组来适应不同大小的向量测试
    std::vector<uint32_t> activations;
    std::vector<uint32_t> weights;
    std::vector<uint32_t> golden;
    
    // 构造函数，初始化数据结构
    TestData(int sample_num) {
        activations.resize(sample_num);
        weights.resize(sample_num);
        golden.resize(sample_num);
    }
};

TestData load_testdata(int sample_count) {
    TestData td(sample_count);

    // 读取Posit32激活数据
    std::ifstream act_file(ACT_FILE, std::ios::binary);
    if (!act_file.is_open()) {
        std::cerr << "无法打开激活数据文件: " << ACT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    act_file.read(reinterpret_cast<char*>(td.activations.data()), sizeof(uint32_t) * sample_count);
    act_file.close();

    // 读取Posit32权重数据
    std::ifstream weight_file(WEIGHT_FILE, std::ios::binary);
    if (!weight_file.is_open()) {
        std::cerr << "无法打开权重数据文件: " << WEIGHT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    weight_file.read(reinterpret_cast<char*>(td.weights.data()), sizeof(uint32_t) * sample_count);
    weight_file.close();

    // 读取预期的小于比较结果
    std::ifstream golden_file(GOLDEN_FILE, std::ios::binary);
    if (!golden_file.is_open()) {
        std::cerr << "无法打开预期结果文件: " << GOLDEN_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    golden_file.read(reinterpret_cast<char*>(td.golden.data()), sizeof(uint32_t) * sample_count);
    golden_file.close();

    return td;
}

// 比较两个Posit32值是否相等（考虑ULP误差）
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
    TestData td = load_testdata(sample_count);
    
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
    
    // 向量模式下，我们需要处理的样本数量是sample_count/vector_size（向上取整）
    const size_t vector_iterations = (sample_count + vector_size - 1) / vector_size;
    
    // 测试主循环
    for (size_t i = 0; i < vector_iterations; ++i) {
        // 获取输入数据
        std::vector<uint32_t> acts(vector_size, 0);
        std::vector<uint32_t> weights(vector_size, 0);
        std::vector<uint32_t> expected(vector_size, 0);
        
        // 准备当前向量的输入数据和预期输出
        for (int j = 0; j < vector_size; ++j) {
            size_t idx = i * vector_size + j;
            if (idx < sample_count) {
                acts[j] = td.activations[idx];
                weights[j] = td.weights[idx];
                expected[j] = td.golden[idx];
            }
        }
        
        // 设置Posit32输入数据
        if (vector_size >= 1) top->io_posit_i1_0 = acts[0];
        if (vector_size >= 2) top->io_posit_i1_1 = acts[1];
        if (vector_size >= 3) top->io_posit_i1_2 = acts[2];
        if (vector_size >= 4) top->io_posit_i1_3 = acts[3];
        
        if (vector_size >= 1) top->io_posit_i2_0 = weights[0];
        if (vector_size >= 2) top->io_posit_i2_1 = weights[1];
        if (vector_size >= 3) top->io_posit_i2_2 = weights[2];
        if (vector_size >= 4) top->io_posit_i2_3 = weights[3];

        // 设置为0，因为此处不需要
        if (vector_size >= 1) top->io_float_i_0 = 0;
        if (vector_size >= 2) top->io_float_i_1 = 0;
        if (vector_size >= 3) top->io_float_i_2 = 0;
        if (vector_size >= 4) top->io_float_i_3 = 0;
        
        if (vector_size >= 1) top->io_float_i2_0 = 0;
        if (vector_size >= 2) top->io_float_i2_1 = 0;
        if (vector_size >= 3) top->io_float_i2_2 = 0;
        if (vector_size >= 4) top->io_float_i2_3 = 0;

        // 设置op代码和配置参数
        top->io_op          = OP;
        top->io_Isposit     = true;   // 输入是Posit
        top->io_Outposit    = true;   // 输出是Posit
        top->io_float_mode  = 3;      // IEEE-754模式
        top->io_float_posit = false;  // 不需要转换

        // 设置数据位宽
        top->io_src_posit_width = 32;          // 32位Posit
        top->io_dst_posit_width = 32;          // 32位Posit
        top->io_vector_size     = vector_size; // 使用动态向量大小
        
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

        // 获取硬件计算的小于比较结果
        std::vector<uint32_t> hw_result(vector_size, 0);
        if (vector_size >= 1) hw_result[0] = top->io_posit_o_0;
        if (vector_size >= 2) hw_result[1] = top->io_posit_o_1;
        if (vector_size >= 3) hw_result[2] = top->io_posit_o_2;
        if (vector_size >= 4) hw_result[3] = top->io_posit_o_3;

        // 比较每个向量元素的结果
        for (int j = 0; j < vector_size; ++j) {
            size_t idx = i * vector_size + j;
            if (idx >= sample_count) continue;  // 超出范围的样本不进行比较
            
            if (!posit_equal(hw_result[j], expected[j])) {
                errors++;
            }
        }

        // 进度显示
        if ((i+1) % 25 == 0) {  // 每25个向量显示一次（对应约100个样本）
            std::cout << "已测试 " << std::min((i+1)*vector_size, (size_t)sample_count) << "/" << sample_count 
                      << " (" << (std::min((i+1)*vector_size, (size_t)sample_count)*100/sample_count) << "%)" 
                      << std::endl;
        }
    }
    
    // 计算总运行时间和平均时间
    auto total_end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(total_end_time - total_start_time).count();
    avg_hw_compute_time = total_hw_compute_time / vector_iterations;
    
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
              << "\n错误数量: " << errors
              << "\n错误率:   " << std::fixed << std::setprecision(2)
              << (errors*100.0/sample_count) << "%\n"
              << "\n性能统计\n========="
              << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
              << "\n硬件计算时间: " << std::fixed << std::setprecision(2) << total_hw_compute_time << " ms"
              << "\n平均硬件计算时间: " << std::fixed << std::setprecision(4) << avg_hw_compute_time << " ms"
              << "\n最大硬件计算时间: " << std::fixed << std::setprecision(4) << max_hw_compute_time << " ms"
              << "\n最小硬件计算时间: " << std::fixed << std::setprecision(4) << min_hw_compute_time << " ms"
              << "\n硬件计算吞吐量: " << std::fixed << std::setprecision(2) << (sample_count / (total_hw_compute_time / 1000.0)) << " 样本/秒\n";
              
    // 返回性能指标，用于比较
    std::vector<double> results = {
        total_hw_compute_time,
        avg_hw_compute_time,
        max_hw_compute_time,
        min_hw_compute_time,
        sample_count / (total_hw_compute_time / 1000.0)  // 吞吐量
    };
    
    return results;
}

// 使用SoftPosit库进行软件验证
void validate_with_softposit(int sample_count) {
    // 加载测试数据
    TestData td = load_testdata(sample_count);
    
    size_t errors = 0;
    
    std::cout << "使用SoftPosit验证小于比较操作...\n";
    
    // 计时
    auto start_time = std::chrono::high_resolution_clock::now();
    
    // 对每个样本进行验证
    for (int i = 0; i < sample_count; ++i) {
        // 转换为SoftPosit类型
        posit32_t p1, p2;
        p1.v = td.activations[i];
        p2.v = td.weights[i];
        
        // 使用SoftPosit进行小于比较
        bool soft_result = p32_lt(p1, p2);
        
        // 从golden数据获取预期结果
        bool expected_result = (td.golden[i] != 0);
        
        // 验证结果
        if (soft_result != expected_result) {
            errors++;
        }
        
        // 每100个样本显示一次进度
        if ((i+1) % 100 == 0) {
            std::cout << "已验证 " << (i+1) << "/" << sample_count 
                      << " (" << ((i+1)*100/sample_count) << "%)" << std::endl;
        }
    }
    
    // 计算总运行时间
    auto end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(end_time - start_time).count();
    
    // 显示结果
    std::cout << "\nSoftPosit验证结果\n========="
              << "\n总样本数: " << sample_count
              << "\n错误数量: " << errors
              << "\n错误率:   " << std::fixed << std::setprecision(2)
              << (errors*100.0/sample_count) << "%"
              << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
              << "\n每样本平均时间: " << std::fixed << std::setprecision(4) << (total_time / sample_count) << " ms"
              << "\n处理吞吐量: " << std::fixed << std::setprecision(2) << (sample_count / (total_time / 1000.0)) << " 样本/秒\n";
}

int main(int argc, char** argv) {
    // 初始化Verilator
    Verilated::commandArgs(argc, argv);
    
    // 设置测试样本数量
    const int sample_count = SAMPLE_NUM;
    
    // 打印测试配置
    std::cout << "VGG16 Posit32小于比较操作测试\n"
              << "========================\n"
              << "样本数量: " << sample_count << "\n"
              << "激活数据: " << ACT_FILE << "\n"
              << "权重数据: " << WEIGHT_FILE << "\n"
              << "预期结果: " << GOLDEN_FILE << "\n"
              << "========================\n";
    
    // 运行不同向量大小的性能测试
    std::vector<std::vector<double>> performance_results;
    
    std::cout << "\n运行向量大小=1的性能测试...\n";
    performance_results.push_back(run_performance_test(1, sample_count, true));  // 标量模式，开启波形
    
    for (int vector_size = 2; vector_size <= MAX_VECTOR_SIZE; ++vector_size) {
        std::cout << "\n运行向量大小=" << vector_size << "的性能测试...\n";
        performance_results.push_back(run_performance_test(vector_size, sample_count));
    }
    
    // 运行SoftPosit软件验证
    validate_with_softposit(sample_count);
    
    // 性能对比分析
    std::cout << "\n\n性能对比分析\n===========\n";
    std::cout << "向量大小\t计算时间(ms)\t平均时间(ms)\t最大时间(ms)\t最小时间(ms)\t吞吐量(样本/秒)\n";
    std::cout << "---------------------------------------------------------------------\n";
    
    for (int i = 0; i < performance_results.size(); ++i) {
        std::cout << (i+1) << "\t\t"
                  << std::fixed << std::setprecision(2) << performance_results[i][0] << "\t\t"
                  << std::fixed << std::setprecision(4) << performance_results[i][1] << "\t\t"
                  << std::fixed << std::setprecision(4) << performance_results[i][2] << "\t\t"
                  << std::fixed << std::setprecision(4) << performance_results[i][3] << "\t\t"
                  << std::fixed << std::setprecision(0) << performance_results[i][4] << "\n";
    }
    
    std::cout << "\nVGG16 Posit32小于比较测试完成!\n";
    return 0;
}

#endif // CONFIG_VGG_LESS_P32 