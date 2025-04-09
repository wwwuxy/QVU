#include"../config.h"
#ifdef CONFIG_VGG_TRUNCATE_P32

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
const char* POSIT_INPUT_FILE      = "./test_src/VGG16/posit_truncate_input.bin";
const char* TRUNCATE_RESULTS_FILE = "./test_src/VGG16/truncate_results.bin";
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
                if (j == 1) top->io_posit_i1_1 = td.posit_input[idx][0];
                if (j == 2) top->io_posit_i1_2 = td.posit_input[idx][0];
                if (j == 3) top->io_posit_i1_3 = td.posit_input[idx][0];
            } else {
                // 如果超出范围，使用零填充
                if (j == 0) top->io_posit_i1_0 = 0;
                if (j == 1) top->io_posit_i1_1 = 0;
                if (j == 2) top->io_posit_i1_2 = 0;
                if (j == 3) top->io_posit_i1_3 = 0;
            }
        }
        
        // 清零不需要的输入数据
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
        
        // 设置操作码和配置参数
        top->io_op = OP;
        top->io_Isposit = true;      // 输入是Posit
        top->io_Outposit = false;    // 输出是整数
        top->io_float_mode = 3;      // IEEE-754模式（此操作不相关）
        top->io_float_posit = false; // 不是浮点到posit的转换
        top->io_src_posit_width = 32; // 源posit位宽
        top->io_dst_posit_width = 8;  // 目标位宽
        top->io_vector_size = vector_size; // 设置向量大小
        
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
        
        // 获取硬件输出结果，并与预期结果比较
        std::vector<int8_t> hw_result(vector_size);
        if (vector_size >= 1) hw_result[0] = static_cast<int8_t>(top->io_int8_o_0);
        if (vector_size >= 2) hw_result[1] = static_cast<int8_t>(top->io_int8_o_1);
        if (vector_size >= 3) hw_result[2] = static_cast<int8_t>(top->io_int8_o_2);
        if (vector_size >= 4) hw_result[3] = static_cast<int8_t>(top->io_int8_o_3);
        
        // 验证每个元素的输出结果
        for (int j = 0; j < vector_size; ++j) {
            size_t idx = i * vector_size + j;
            if (idx < sample_count) {
                int8_t expected = static_cast<int8_t>(td.truncate_results[idx][0]);
                
                if (hw_result[j] != expected) {
                    errors++;
                    
                    if (errors < 10) {  // 只打印前10个错误，防止输出过多
                        std::cerr << "样本 " << idx << " 不匹配："
                                  << " 硬件: " << static_cast<int>(hw_result[j])
                                  << " 预期: " << static_cast<int>(expected)
                                  << std::endl;
                    }
                }
                
                // 收集统计信息
                quant_values.push_back(hw_result[j]);
                input_values.push_back(td.truncate_results[idx][0]);
            }
        }
        
        // 进度显示
        if ((i+1) % 10 == 0) {
            size_t total_processed = std::min((i+1)*vector_size, (size_t)sample_count);
            std::cout << "已处理 " << total_processed << "/" << sample_count 
                      << " (" << (total_processed*100/sample_count) << "%)" 
                      << std::endl;
        }
    }
    
    // 计算总运行时间和平均时间
    auto total_end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(total_end_time - total_start_time).count();
    avg_hw_compute_time = total_hw_compute_time / vector_iterations;
    
    // 计算统计信息
    QuantStats quant_stats = calculate_quant_stats(quant_values);
    InputStats input_stats = calculate_input_stats(input_values);
    
    // 资源清理
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    top->final();
    delete top;
    
    // 打印错误率和统计信息
    std::cout << "\n向量大小 " << vector_size << " 的性能测试结果\n========="
              << "\n总样本数: " << sample_count
              << "\n错误数量: " << errors
              << "\n错误率:   " << std::fixed << std::setprecision(2)
              << (errors*100.0/sample_count) << "%\n"
              << "\n量化值统计信息:\n"
              << "最小值: " << static_cast<int>(quant_stats.min_value)
              << " 最大值: " << static_cast<int>(quant_stats.max_value)
              << " 平均值: " << std::fixed << std::setprecision(2) << quant_stats.mean_value
              << " 标准差: " << std::fixed << std::setprecision(2) << quant_stats.std_dev << "\n"
              << "\n量化值分布:\n";
              
    // 打印分布直方图
    for (int i = 0; i < BIN_COUNT; ++i) {
        int bin_start = quant_stats.min_value + i * quant_stats.bin_width;
        int bin_end = bin_start + quant_stats.bin_width;
        double percentage = static_cast<double>(quant_stats.bin_counts[i]) / quant_values.size() * 100.0;
        
        std::cout << "[" << bin_start << "," << bin_end << "): "
                  << std::string(percentage / 2, '#') << " "
                  << std::fixed << std::setprecision(1) << percentage << "%\n";
    }
    
    // 打印性能信息
    std::cout << "\n性能统计\n========="
              << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
              << "\n硬件计算时间: " << std::fixed << std::setprecision(2) << total_hw_compute_time << " ms"
              << "\n平均硬件计算时间: " << std::fixed << std::setprecision(4) << avg_hw_compute_time << " ms"
              << "\n最大硬件计算时间: " << std::fixed << std::setprecision(4) << max_hw_compute_time << " ms"
              << "\n最小硬件计算时间: " << std::fixed << std::setprecision(4) << min_hw_compute_time << " ms"
              << "\n硬件计算吞吐量: " << std::fixed << std::setprecision(2) << (sample_count / (total_hw_compute_time / 1000.0)) << " 样本/秒\n";
              
    // 返回性能数据
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
    Verilated::commandArgs(argc, argv);
    
    // 打印测试配置
    std::cout << "VGG16 Posit32截断操作测试\n"
              << "========================\n"
              << "样本数量: " << SAMPLE_NUM << "\n"
              << "Posit输入数据: " << POSIT_INPUT_FILE << "\n"
              << "预期结果: " << TRUNCATE_RESULTS_FILE << "\n"
              << "========================\n";
    
    // 运行不同向量大小的性能测试
    std::vector<std::vector<double>> performance_results;
    
    // 测试标量模式
    std::cout << "\n运行标量模式 (向量大小=1) 的性能测试...\n";
    performance_results.push_back(run_performance_test(1, SAMPLE_NUM, true));  // 输出波形
    
    // 测试向量模式
    for (int vector_size = 2; vector_size <= MAX_VECTOR_SIZE; ++vector_size) {
        std::cout << "\n运行向量模式 (向量大小=" << vector_size << ") 的性能测试...\n";
        performance_results.push_back(run_performance_test(vector_size, SAMPLE_NUM));
    }
    
    // 性能比较分析
    std::cout << "\n\n性能比较分析\n============\n";
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
    
    // 计算加速比
    if (performance_results.size() > 1) {
        double scalar_time = performance_results[0][0];
        std::cout << "\n向量加速比分析\n============\n";
        
        for (int i = 1; i < performance_results.size(); ++i) {
            int vector_size = i + 1;
            double vector_time = performance_results[i][0];
            double speedup = scalar_time / vector_time;
            double efficiency = (speedup / vector_size) * 100.0;
            
            std::cout << "向量大小 " << vector_size << ": "
                      << "加速比 " << std::fixed << std::setprecision(2) << speedup << "x, "
                      << "效率 " << std::fixed << std::setprecision(1) << efficiency << "%\n";
        }
    }
    
    std::cout << "\nVGG16 Posit32截断测试完成!\n";
    return 0;
}

#endif 