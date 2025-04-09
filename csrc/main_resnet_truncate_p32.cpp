#include"../config.h"
#ifdef CONFIG_RESNET_TRUNCATE_P32

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <chrono>  // 添加计时库
#include "VPvuTop.h"
#include "/home/wuxy/SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP   10                     // Posit量化到Int8操作码为10
const char* POSIT_INPUT_FILE      = "./test_src/ResNet50/posit_truncate_input.bin";
const char* TRUNCATE_RESULTS_FILE = "./test_src/ResNet50/truncate_results.bin";
const char* WAVEFORM_FILE         = "waveform.vcd";  // 波形输出文件
const int SAMPLE_NUM              = 1000;            // 测试样本数量
const int TOTAL_ELEMENTS          = 4000;            // 总元素数量，用于标量模式测试
const int MAX_VECTOR_SIZE         = 4;               // 最大向量大小
const int BIN_COUNT               = 5;               // 分布统计的区间数
//--------------------------------------------

struct TestData {
    std::vector<std::vector<uint32_t>> posit_input;  // Posit输入数据
    std::vector<std::vector<int32_t>> truncate_results;  // 转换后的数据
    
    // 构造函数，初始化数据结构
    TestData(int sample_num, int vector_size) {
        posit_input.resize(sample_num, std::vector<uint32_t>(vector_size));
        truncate_results.resize(sample_num, std::vector<int32_t>(vector_size));
    }
};

// 跳过 fa0 并读取有效数据
uint32_t read_valid_posit_data(std::ifstream& file) {
    uint32_t data;
    while (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        if (data != 0xfa0) {  // 忽略头部信息 fa0
            return data;
        }
    }
    return 0;  // 如果读取失败，返回 0
}

TestData load_testdata(int sample_count, int vector_size) {
    TestData td(sample_count, vector_size);

    // 读取Posit输入数据
    std::ifstream posit_in(POSIT_INPUT_FILE, std::ios::binary);
    if (!posit_in.is_open()) {
        std::cerr << "无法打开Posit输入数据文件: " << POSIT_INPUT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            td.posit_input[i][j] = read_valid_posit_data(posit_in);
        }
    }

    // 读取truncate_results数据
    std::ifstream truncate_in(TRUNCATE_RESULTS_FILE, std::ios::binary);
    if (!truncate_in.is_open()) {
        std::cerr << "无法打开truncate_results文件: " << TRUNCATE_RESULTS_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    
    // 跳过第一个数字（样本总数）
    int32_t total_samples;
    truncate_in.read(reinterpret_cast<char*>(&total_samples), sizeof(int32_t));
    
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            truncate_in.read(reinterpret_cast<char*>(&td.truncate_results[i][j]), sizeof(int32_t));
        }
    }

    return td;
}

// 统计信息结构体
struct QuantStats {
    std::vector<int8_t> all_values;  // 所有量化值
    int8_t min_value;                // 最小值
    int8_t max_value;                // 最大值
    double mean_value;               // 平均值
    double std_dev;                  // 标准差
    std::vector<int> bin_counts;     // 区间分布统计
    int8_t bin_width;                // 区间宽度
};

// 输入值统计结构体
struct InputStats {
    std::vector<int32_t> all_values;  // 所有输入值
    int32_t min_value;                // 最小值
    int32_t max_value;                // 最大值
    double mean_value;                // 平均值
    double std_dev;                   // 标准差
    std::vector<int> bin_counts;      // 区间分布统计
    int32_t bin_width;                // 区间宽度
};

// 计算量化统计信息
QuantStats calculate_quant_stats(const std::vector<int8_t>& values) {
    QuantStats stats;
    stats.all_values = values;
    
    // 计算基本统计量
    stats.min_value = *std::min_element(values.begin(), values.end());
    stats.max_value = *std::max_element(values.begin(), values.end());
    
    // 计算平均值
    double sum = 0.0;
    for (int8_t v : values) {
        sum += v;
    }
    stats.mean_value = sum / values.size();
    
    // 计算标准差
    double sum_sq_diff = 0.0;
    for (int8_t v : values) {
        double diff = v - stats.mean_value;
        sum_sq_diff += diff * diff;
    }
    stats.std_dev = std::sqrt(sum_sq_diff / values.size());
    
    // 计算区间分布
    stats.bin_counts.resize(BIN_COUNT, 0);
    
    // 检查最大值和最小值是否相等，防止除零异常
    if (stats.max_value == stats.min_value) {
        stats.bin_width = 1;  // 如果所有值相同，设置bin_width为1以避免除零
        
        // 所有值都会落在第一个bin
        stats.bin_counts[0] = values.size();
    } else {
        stats.bin_width = (stats.max_value - stats.min_value) / BIN_COUNT;
        
        for (int8_t v : values) {
            int bin_index = static_cast<int>((v - stats.min_value) / stats.bin_width);
            if (bin_index >= 0 && bin_index < BIN_COUNT) {
                stats.bin_counts[bin_index]++;
            }
        }
    }
    
    return stats;
}

// 计算输入值统计信息
InputStats calculate_input_stats(const std::vector<int32_t>& values) {
    InputStats stats;
    stats.all_values = values;
    
    // 计算基本统计量
    stats.min_value = *std::min_element(values.begin(), values.end());
    stats.max_value = *std::max_element(values.begin(), values.end());
    
    // 计算平均值
    double sum = 0.0;
    for (int32_t v : values) {
        sum += v;
    }
    stats.mean_value = sum / values.size();
    
    // 计算标准差
    double sum_sq_diff = 0.0;
    for (int32_t v : values) {
        double diff = v - stats.mean_value;
        sum_sq_diff += diff * diff;
    }
    stats.std_dev = std::sqrt(sum_sq_diff / values.size());
    
    // 计算区间分布
    stats.bin_counts.resize(BIN_COUNT, 0);
    
    // 检查最大值和最小值是否相等，防止除零异常
    if (stats.max_value == stats.min_value) {
        stats.bin_width = 1;  // 如果所有值相同，设置bin_width为1以避免除零
        
        // 所有值都会落在第一个bin
        stats.bin_counts[0] = values.size();
    } else {
        stats.bin_width = (stats.max_value - stats.min_value) / BIN_COUNT;
        
        for (int32_t v : values) {
            int bin_index = static_cast<int>((v - stats.min_value) / stats.bin_width);
            if (bin_index >= 0 && bin_index < BIN_COUNT) {
                stats.bin_counts[bin_index]++;
            }
        }
    }
    
    return stats;
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
    TestData td = load_testdata(sample_count, vector_size);
    
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
    
    // 收集量化值和输入值
    std::vector<int8_t> quant_values;
    std::vector<int32_t> input_values;
    
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
        // 设置Posit输入数据
        for (int j = 0; j < vector_size; ++j) {
            size_t idx = i * vector_size + j;
            if (idx < sample_count) {
                if (j == 0) top->io_posit_i1_0 = td.posit_input[idx][0];
                if (j == 1 && vector_size > 1) top->io_posit_i1_1 = td.posit_input[idx][1];
                if (j == 2 && vector_size > 2) top->io_posit_i1_2 = td.posit_input[idx][2];
                if (j == 3 && vector_size > 3) top->io_posit_i1_3 = td.posit_input[idx][3];
            }
        }

        // 设置为0，因为此处不需要
        top->io_posit_i2_0 = 0;
        top->io_posit_i2_1 = 0;
        top->io_posit_i2_2 = 0;
        top->io_posit_i2_3 = 0;
        
        top->io_float_i_0 = 0;
        top->io_float_i_1 = 0;
        top->io_float_i_2 = 0;
        top->io_float_i_3 = 0;
        
        top->io_float_i2_0 = 0;
        top->io_float_i2_1 = 0;
        top->io_float_i2_2 = 0;
        top->io_float_i2_3 = 0;

        // 设置op代码和配置参数
        top->io_op          = OP;
        top->io_Isposit     = true;   // 输入是Posit
        top->io_Outposit    = true;   // 输出是Posit
        top->io_float_mode  = 3;      // IEEE-754模式
        top->io_float_posit = false;  // 不需要转换

        // 设置数据位宽
        top->io_src_posit_width = 32;           // 32位Posit
        top->io_dst_posit_width = 32;           // 量化输出为Int8
        top->io_vector_size     = vector_size;  // 向量大小
        
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

        // 获取量化结果
        int8_t hw_quant[MAX_VECTOR_SIZE];
        
        // 将32位输出截断为8位整数
        hw_quant[0] = static_cast<int8_t>(top->io_posit_o_0);
        if (vector_size > 1) hw_quant[1] = static_cast<int8_t>(top->io_posit_o_1);
        if (vector_size > 2) hw_quant[2] = static_cast<int8_t>(top->io_posit_o_2);
        if (vector_size > 3) hw_quant[3] = static_cast<int8_t>(top->io_posit_o_3);

        // 比较结果并收集统计数据
        for (int j = 0; j < vector_size; ++j) {
            size_t idx = i * vector_size + j;
            if (idx >= sample_count) continue;
            
            int8_t expected_quant = static_cast<int8_t>(td.truncate_results[idx][j]);
            
            if (hw_quant[j] != expected_quant) {
                errors++;
            }
            
            // 收集量化值和输入值
            quant_values.push_back(hw_quant[j]);
            input_values.push_back(td.truncate_results[idx][j]);
        }
        
        // 进度显示
        if ((i+1) % 10 == 0) {
            size_t completed = std::min((i+1) * vector_size, static_cast<size_t>(sample_count));
            std::cout << "已测试 " << completed << "/" << sample_count 
                      << " (" << (completed * 100 / sample_count) << "%)" 
                      << std::endl;
        }
    }
    
    // 计算总运行时间和平均时间
    auto total_end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(total_end_time - total_start_time).count();
    avg_hw_compute_time = total_hw_compute_time / vector_iterations;
    
    // 计算统计数据
    QuantStats quant_stats = calculate_quant_stats(quant_values);
    InputStats input_stats = calculate_input_stats(input_values);
    
    // 资源清理
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    top->final();
    delete top;
    
    // 计算元素级吞吐量（考虑向量大小）
    double elements_throughput = (sample_count * vector_size) / (total_hw_compute_time / 1000.0);
    
    // 输出统计信息
    
    std::cout << "\n量化统计报告\n============="
              << "\n总样本数: " << sample_count
              << "\n总元素数: " << (sample_count * vector_size)
              << "\n总数据点: " << quant_values.size()
              << "\n错误数量: " << errors
              << "\n错误率: " << std::fixed << std::setprecision(2) << (errors * 100.0 / (sample_count * vector_size)) << "%"
              << "\n\n量化后统计:"
              << "\n最小值:   " << static_cast<int>(quant_stats.min_value)
              << "\n最大值:   " << static_cast<int>(quant_stats.max_value)
              << "\n平均值:   " << std::fixed << std::setprecision(2) << quant_stats.mean_value
              << "\n标准差:   " << std::fixed << std::setprecision(2) << quant_stats.std_dev
              << "\n\n输入值统计:"
              << "\n最小值:   " << input_stats.min_value
              << "\n最大值:   " << input_stats.max_value
              << "\n平均值:   " << std::fixed << std::setprecision(2) << input_stats.mean_value
              << "\n标准差:   " << std::fixed << std::setprecision(2) << input_stats.std_dev
              << std::endl;
    
    // 打印量化后值分布
    std::cout << "\n量化后值分布 (区间宽度: " << static_cast<int>(quant_stats.bin_width) << "):" << std::endl;
    for (int i = 0; i < BIN_COUNT; i++) {
        if (quant_stats.bin_counts[i] > 0) {
            int8_t bin_start = quant_stats.min_value + i * quant_stats.bin_width;
            int8_t bin_end = bin_start + quant_stats.bin_width;
            std::cout << "区间 [" << static_cast<int>(bin_start) << ", " << static_cast<int>(bin_end) << "): "
                    << quant_stats.bin_counts[i] << " 次 ("
                    << std::fixed << std::setprecision(2)
                    << (quant_stats.bin_counts[i] * 100.0 / quant_values.size())
                    << "%)" << std::endl;
        }
    }
    
    // 打印输入值分布
    std::cout << "\n输入值分布 (区间宽度: " << input_stats.bin_width << "):" << std::endl;
    for (int i = 0; i < BIN_COUNT; i++) {
        if (input_stats.bin_counts[i] > 0) {
            int32_t bin_start = input_stats.min_value + i * input_stats.bin_width;
            int32_t bin_end = bin_start + input_stats.bin_width;
            std::cout << "区间 [" << bin_start << ", " << bin_end << "): "
                    << input_stats.bin_counts[i] << " 次 ("
                    << std::fixed << std::setprecision(2)
                    << (input_stats.bin_counts[i] * 100.0 / input_values.size())
                    << "%)" << std::endl;
        }
    }
    
    std::cout << "\n性能统计\n========="
              << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
              << "\n硬件计算时间: " << std::fixed << std::setprecision(2) << total_hw_compute_time << " ms"
              << "\n平均硬件计算时间: " << std::fixed << std::setprecision(4) << avg_hw_compute_time << " ms"
              << "\n最大硬件计算时间: " << std::fixed << std::setprecision(4) << max_hw_compute_time << " ms"
              << "\n最小硬件计算时间: " << std::fixed << std::setprecision(4) << min_hw_compute_time << " ms"
              << "\n样本吞吐量: " << std::fixed << std::setprecision(2) << (sample_count / (total_hw_compute_time / 1000.0)) << " 样本/秒"
              << "\n元素吞吐量: " << std::fixed << std::setprecision(2) << elements_throughput << " 元素/秒\n";
    
    // 返回性能指标，用于比较
    std::vector<double> results = {
        total_hw_compute_time,
        avg_hw_compute_time,
        sample_count / (total_hw_compute_time / 1000.0),  // 样本吞吐量
        elements_throughput  // 元素吞吐量
    };
    
    return results;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 测试参数
    bool enable_waveform = false;  // 默认不生成波形文件
    
    // 解析命令行参数
    if (argc > 1) {
        enable_waveform = (std::atoi(argv[1]) != 0);
    }
    
    std::cout << "开始性能测试，Posit32 Truncate运算..." << std::endl;
    
    // 运行向量大小为1的测试（标量模式）
    std::cout << "\n\n===== 标量模式测试 (向量大小=1) =====" << std::endl;
    std::vector<double> scalar_results = run_performance_test(1, TOTAL_ELEMENTS, enable_waveform);
    
    // 运行向量大小为4的测试（向量模式）
    std::cout << "\n\n===== 向量模式测试 (向量大小=4) =====" << std::endl;
    std::vector<double> vector_results = run_performance_test(4, SAMPLE_NUM, enable_waveform);
    
    // 计算加速比
    double speedup_throughput_samples = vector_results[2] / scalar_results[2];
    double speedup_throughput_elements = (vector_results[3] / scalar_results[3]) / MAX_VECTOR_SIZE;
    double speedup_time = (scalar_results[0] / vector_results[0]) / MAX_VECTOR_SIZE;
    
    // 输出加速比结果
    std::cout << "\n\n===== 矢量加速比分析 =====" << std::endl;
    std::cout << "样本吞吐量加速比: " << std::fixed << std::setprecision(2) << speedup_throughput_samples << "x" << std::endl;
    std::cout << "元素吞吐量加速比: " << std::fixed << std::setprecision(2) << speedup_throughput_elements << "x" << std::endl;
    std::cout << "计算时间加速比: " << std::fixed << std::setprecision(2) << speedup_time << "x" << std::endl;
    std::cout << "理论加速比: 4.00x (理想情况)" << std::endl;
    std::cout << "加速效率: " << std::fixed << std::setprecision(2) << (speedup_throughput_elements / 4.0 * 100) << "%" << std::endl;
    
    return 0;
}

#endif 