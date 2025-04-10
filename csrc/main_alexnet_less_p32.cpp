#include"../config.h"
#ifdef CONFIG_ALEXNET_LESS_P32

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
const char* ACT_FILE    = "./test_src/AlexNet/posit_activations.bin";
const char* WEIGHT_FILE = "./test_src/AlexNet/posit_weights.bin";
const char* GOLDEN_FILE = "./test_src/AlexNet/less_results.bin";
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

int main(int argc, char** argv) {
    // 初始化Verilator
    Verilated::commandArgs(argc, argv);
    
    // 测试参数
    bool enable_waveform = false;  // 默认不生成波形文件
    
    // 解析命令行参数
    if (argc > 1) {
        enable_waveform = (std::atoi(argv[1]) != 0);
    }
    
    std::cout << "开始性能测试，VGG16 Posit32小于比较运算..." << std::endl;
    
    // 运行向量大小为1的测试（标量模式）
    std::cout << "\n\n===== 标量模式测试 (向量大小=1) =====" << std::endl;
    std::vector<double> scalar_results = run_performance_test(1, TOTAL_ELEMENTS, enable_waveform);
    
    // 运行向量大小为4的测试（向量模式）
    std::cout << "\n\n===== 向量模式测试 (向量大小=4) =====" << std::endl;
    std::vector<double> vector_results = run_performance_test(4, SAMPLE_NUM, enable_waveform);
    
    // 计算加速比
    double speedup_throughput = vector_results[4] / scalar_results[4];
    double speedup_time = (scalar_results[0] / vector_results[0]) / MAX_VECTOR_SIZE;
    
    // 输出加速比结果
    std::cout << "\n\n===== 矢量加速比分析 =====" << std::endl;
    std::cout << "吞吐量加速比: " << std::fixed << std::setprecision(2) << speedup_throughput << "x" << std::endl;
    std::cout << "计算时间加速比: " << std::fixed << std::setprecision(2) << speedup_time << "x" << std::endl;
    std::cout << "理论加速比: 4.00x (理想情况)" << std::endl;
    std::cout << "加速效率: " << std::fixed << std::setprecision(2) << (speedup_throughput / 4.0 * 100) << "%" << std::endl;
    
    return 0;
}

#endif // CONFIG_VGG_LESS_P32 