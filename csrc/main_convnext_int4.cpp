#include"../config.h"
#ifdef CONFIG_CONVNEXT_INT4

/**
 * ResNet Posit32到Int4量化测试程序
 * 
 * 程序功能:
 * 1. 从文件加载Posit32输入数据和预期的Truncate结果
 * 2. 使用硬件加速器进行Posit32到Int4的量化
 * 3. 统计量化结果与预期结果的差异
 * 4. 统计输入、输出值的分布和性能指标
 * 
 * 主要修改点:
 * - 修复当最大值和最小值相等时的除零问题
 * - 正确设置Outposit=false和dst_posit_width=4以输出Int4
 * - 从io_int_o_*而不是io_posit_o_*获取输出结果
 * - 添加性能统计和统计分布信息
 * - 增加向量大小为1和向量大小为4的性能对比
 */

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
#include "VQvuTop.h"
#include "/home/wuxy/SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP   1                     // Posit量化到Int4操作码为1
const char* POSIT_INPUT_FILE      = "./test_src/ConvNeXt/posit_activations.bin";
const char* TRUNCATE_RESULTS_FILE = "./test_src/ConvNeXt/truncate_results.bin";
const char* WAVEFORM_FILE         = "waveform.vcd";  // 波形输出文件
const int SAMPLE_NUM              = 1000;            // 测试样本数量
const int TOTAL_ELEMENTS          = 4000;            // 总元素数量，用于标量模式测试
const int MAX_VECTOR_SIZE         = 4;               // 最大向量大小
const int BIN_COUNT               = 5;              // 分布统计的区间数
// 添加Int4处理相关的常量
const int INT4_MIN = -8;          // Int4最小值
const int INT4_MAX = 7;           // Int4最大值
const int INT4_MASK = 0x0F;       // 4位掩码
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

// 性能统计结构体
struct PerformanceStats {
    double total_time;        // 总运行时间 (ms)
    double compute_time;      // 计算时间 (ms)
    double avg_compute_time;  // 平均每次计算时间 (ms)
    double throughput;        // 吞吐量 (元素/秒)
};

// 将Int4转换为有符号值
int8_t convertToSignedInt4(uint32_t value) {
    // 取低4位
    uint8_t val = value & INT4_MASK;
    
    // 如果最高位(bit3)为1，则为负数
    if (val & 0x08) {
        // 执行符号扩展，转换为有符号数
        return static_cast<int8_t>(val | 0xF0); // 将高4位设为1
    } else {
        return static_cast<int8_t>(val);
    }
}

// 计算量化统计信息
QuantStats calculate_quant_stats(const std::vector<int8_t>& values) {
    QuantStats stats;
    stats.all_values = values;
    
    if (values.empty()) {
        // 处理空数组情况
        stats.min_value = 0;
        stats.max_value = 0;
        stats.mean_value = 0;
        stats.std_dev = 0;
        stats.bin_counts.resize(BIN_COUNT, 0);
        stats.bin_width = 1;
        return stats;
    }
    
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
        // 确保bin_width至少为1，防止过小导致的浮点问题
        stats.bin_width = std::max(1, (stats.max_value - stats.min_value) / BIN_COUNT);
        
        for (int8_t v : values) {
            // 防止除零，如果bin_width为0则将所有值归入第一个bin
            int bin_index = (stats.bin_width > 0) ? 
                static_cast<int>((v - stats.min_value) / stats.bin_width) : 0;
            
            // 确保bin_index在有效范围内
            bin_index = std::min(std::max(0, bin_index), BIN_COUNT - 1);
            stats.bin_counts[bin_index]++;
        }
    }
    
    return stats;
}

// 计算输入值统计信息
InputStats calculate_input_stats(const std::vector<int32_t>& values) {
    InputStats stats;
    stats.all_values = values;
    
    if (values.empty()) {
        // 处理空数组情况
        stats.min_value = 0;
        stats.max_value = 0;
        stats.mean_value = 0;
        stats.std_dev = 0;
        stats.bin_counts.resize(BIN_COUNT, 0);
        stats.bin_width = 1;
        return stats;
    }
    
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
        // 确保bin_width至少为1，防止过小导致的浮点问题
        int32_t range = stats.max_value - stats.min_value;
        stats.bin_width = std::max(1, range / BIN_COUNT);
        
        for (int32_t v : values) {
            // 防止除零，如果bin_width为0则将所有值归入第一个bin
            int bin_index = (stats.bin_width > 0) ? 
                static_cast<int>((v - stats.min_value) / stats.bin_width) : 0;
            
            // 确保bin_index在有效范围内
            bin_index = std::min(std::max(0, bin_index), BIN_COUNT - 1);
            stats.bin_counts[bin_index]++;
        }
    }
    
    return stats;
}

// 运行测试的函数，支持不同向量大小
PerformanceStats run_test(int vector_size, int sample_count, bool enable_waveform = false, bool print_stats = true) {
    VQvuTop* top = new VQvuTop;
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

    // 存储所有量化结果和输入值
    std::vector<int8_t> all_quantized_values;
    std::vector<int32_t> all_posit_raw_values;  // 存储原始posit的uint32_t值
    std::vector<int32_t> all_truncate_values;
    all_quantized_values.reserve(sample_count * vector_size);
    all_posit_raw_values.reserve(sample_count * vector_size);
    all_truncate_values.reserve(sample_count * vector_size);

    // 添加计时变量
    auto total_start_time = std::chrono::high_resolution_clock::now();
    double total_compute_time = 0.0;

    // 测试主循环 - 需要处理的样本数量会根据向量大小进行调整
    int iterations = (sample_count + vector_size - 1) / vector_size;
    
    for (int i = 0; i < iterations; ++i) {
        // 设置posit输入数据
        for (int j = 0; j < vector_size; ++j) {
            int idx = i * vector_size + j;
            if (idx < sample_count) {
                if (j == 0) top->io_posit_i_0 = td.posit_input[idx][0];
                if (j == 1 && vector_size > 1) top->io_posit_i_1 = td.posit_input[idx][1];
                if (j == 2 && vector_size > 2) top->io_posit_i_2 = td.posit_input[idx][2]; 
                if (j == 3 && vector_size > 3) top->io_posit_i_3 = td.posit_input[idx][3];
            } else {
                // 如果超出样本数量，填充0
                if (j == 0) top->io_posit_i_0 = 0;
                if (j == 1 && vector_size > 1) top->io_posit_i_1 = 0;
                if (j == 2 && vector_size > 2) top->io_posit_i_2 = 0;
                if (j == 3 && vector_size > 3) top->io_posit_i_3 = 0;
            }
        }
        
        // 第二个posit输入端不使用，设为0
        top->io_posit_i_0 = 0;
        top->io_posit_i_1 = 0;
        top->io_posit_i_2 = 0;
        top->io_posit_i_3 = 0;
        
        //设置float输入数据，不使用
        top->io_float_i_0 = 0;
        top->io_float_i_1 = 0;
        top->io_float_i_2 = 0;
        top->io_float_i_3 = 0;

        top->io_float_i_0 = 0;
        top->io_float_i_1 = 0;
        top->io_float_i_2 = 0;
        top->io_float_i_3 = 0;

        //设置信号量
        top->io_op = OP;              // 操作码1：Posit量化到Int4
        top->io_Isposit = true;       // 输入是posit数
        top->io_Outposit = false;     // 输出是Int4，这里设置为false
        top->io_float_mode = 3;       // 使用FP32格式
        top->io_float_posit = false;  // 此选项无影响

        //设置数据位宽
        top->io_src_posit_width = 32; // 使用32位posit
        top->io_dst_posit_width = 4;  // 输出为4位Int4
        top->io_vector_size = vector_size;  // 设置向量大小

        // 开始计时硬件计算
        auto compute_start_time = std::chrono::high_resolution_clock::now();

        // 运行一次计算
        top->clock = 1;
        top->eval();
        if (tfp) tfp->dump(i*2 + 1);

        top->clock = 0;
        top->eval();
        if (tfp) tfp->dump(i*2 + 2);

        // 结束计时硬件计算
        auto compute_end_time = std::chrono::high_resolution_clock::now();
        double compute_time = std::chrono::duration<double, std::milli>(compute_end_time - compute_start_time).count();
        total_compute_time += compute_time;

        // 获取量化结果 - 从io_int_o_*获取结果，而不是io_posit_o_*
        int8_t quantized[4];
        // 正确处理Int4有符号数
        quantized[0] = convertToSignedInt4(top->io_int_o_0); 
        if (vector_size > 1) quantized[1] = convertToSignedInt4(top->io_int_o_1);
        if (vector_size > 2) quantized[2] = convertToSignedInt4(top->io_int_o_2);
        if (vector_size > 3) quantized[3] = convertToSignedInt4(top->io_int_o_3);

        // 比较结果并收集统计数据
        for (int j = 0; j < vector_size; ++j) {
            int idx = i * vector_size + j;
            if (idx >= sample_count) continue; // 跳过超出样本数量的数据
            
            // 正确处理期望的Int4值
            int8_t expected_quant = convertToSignedInt4(td.truncate_results[idx][j]); 
            
            // 存储输入值和量化结果
            all_truncate_values.push_back(td.truncate_results[idx][j]);  // 存储期望的truncate结果
            all_quantized_values.push_back(quantized[j]);  // 存储实际量化结果
            all_posit_raw_values.push_back(td.posit_input[idx][j]);  // 存储原始posit uint32_t值
        }

        // 进度显示
        if (print_stats && (i+1) % (iterations/10) == 0) {
            int completed = std::min((i+1) * vector_size, sample_count);
            std::cout << "已处理 " << completed << "/" << sample_count 
                      << " (" << (completed * 100 / sample_count) << "%)" 
                      << std::endl;
        }
    }

    // 计算总运行时间
    auto total_end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(total_end_time - total_start_time).count();

    // 计算统计信息
    QuantStats quant_stats = calculate_quant_stats(all_quantized_values);
    InputStats posit_stats = calculate_input_stats(all_posit_raw_values);
    InputStats truncate_stats = calculate_input_stats(all_truncate_values);  // 计算truncate统计信息
    
    // 修改吞吐量的计算方式
    double throughput = (sample_count * vector_size) / (total_compute_time / 1000.0);  // 元素/秒
    double sample_throughput = sample_count / (total_compute_time / 1000.0);  // 样本/秒

    if (print_stats) {
        // 打印统计报告
        std::cout << "\n向量大小 = " << vector_size << " 的测试统计\n" << std::string(30, '=')
                << "\n总样本数: " << sample_count
                << "\n总元素数: " << (sample_count * vector_size)
                << "\n总数据点: " << all_quantized_values.size()
                << "\n\n量化后统计:"
                << "\n最小值:   " << static_cast<int>(quant_stats.min_value)
                << "\n最大值:   " << static_cast<int>(quant_stats.max_value)
                << "\n平均值:   " << std::fixed << std::setprecision(2) << quant_stats.mean_value
                << "\n标准差:   " << std::fixed << std::setprecision(2) << quant_stats.std_dev
                << "\n\nPosit32原始值统计 (uint32_t):"
                << "\n最小值:   " << posit_stats.min_value
                << "\n最大值:   " << posit_stats.max_value
                << "\n平均值:   " << std::fixed << std::setprecision(2) << posit_stats.mean_value
                << "\n标准差:   " << std::fixed << std::setprecision(2) << posit_stats.std_dev
                << "\n\n量化前值统计:"
                << "\n最小值:   " << truncate_stats.min_value
                << "\n最大值:   " << truncate_stats.max_value
                << "\n平均值:   " << std::fixed << std::setprecision(2) << truncate_stats.mean_value
                << "\n标准差:   " << std::fixed << std::setprecision(2) << truncate_stats.std_dev
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
                        << (quant_stats.bin_counts[i] * 100.0 / all_quantized_values.size())
                        << "%)" << std::endl;
            }
        }

        // 打印truncate结果分布
        std::cout << "\n量化前值分布 (区间宽度: " << truncate_stats.bin_width << "):" << std::endl;
        for (int i = 0; i < BIN_COUNT; i++) {
            if (truncate_stats.bin_counts[i] > 0) {
                int32_t bin_start = truncate_stats.min_value + i * truncate_stats.bin_width;
                int32_t bin_end = bin_start + truncate_stats.bin_width;
                std::cout << "区间 [" << bin_start << ", " << bin_end << "): "
                        << truncate_stats.bin_counts[i] << " 次 ("
                        << std::fixed << std::setprecision(2)
                        << (truncate_stats.bin_counts[i] * 100.0 / all_truncate_values.size())
                        << "%)" << std::endl;
            }
        }

        // 更新性能统计信息的打印
        std::cout << "\n性能统计\n========="
                << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
                << "\n计算时间: " << std::fixed << std::setprecision(2) << total_compute_time << " ms"
                << "\n平均每次计算时间: " << std::fixed << std::setprecision(4) << (total_compute_time / iterations) << " ms"
                << "\n平均每个元素计算时间: " << std::fixed << std::setprecision(4) << (total_compute_time / (sample_count * vector_size)) << " ms"
                << "\n样本吞吐量: " << std::fixed << std::setprecision(2) << sample_throughput << " 样本/秒"
                << "\n元素吞吐量: " << std::fixed << std::setprecision(2) << throughput << " 元素/秒"
                << std::endl;
    }

    // 资源清理
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    top->final();
    delete top;

    // 更新返回值
    PerformanceStats stats;
    stats.total_time = total_time;
    stats.compute_time = total_compute_time;
    stats.avg_compute_time = total_compute_time / iterations;
    stats.throughput = throughput;  // 元素吞吐量
    
    return stats;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 启用波形跟踪
    Verilated::traceEverOn(true);
    
    bool enable_waveform = false;
    
    // 解析命令行参数，是否生成波形
    if (argc > 1) {
        enable_waveform = (std::atoi(argv[1]) != 0);
    }
    
    std::cout << "开始性能测试，Int4运算...\n" << std::endl;
    
    // 运行向量大小为1的测试（标量模式）
    std::cout << "===== 标量模式测试 (向量大小=1) =====" << std::endl;
    PerformanceStats scalar_stats = run_test(1, TOTAL_ELEMENTS, enable_waveform);
    
    // 运行向量大小为4的测试（向量模式）
    std::cout << "\n\n===== 向量模式测试 (向量大小=4) =====" << std::endl;
    PerformanceStats vector_stats = run_test(4, SAMPLE_NUM, enable_waveform);
    
    // 修改加速比计算方式，避免除零问题
    double time_speedup = 0.0;
    if (vector_stats.compute_time > 0) {
        time_speedup = scalar_stats.compute_time / vector_stats.compute_time;
    }

    // 计算每个元素的处理时间
    double scalar_element_time = 0.0;
    if (TOTAL_ELEMENTS > 0) {
        scalar_element_time = scalar_stats.compute_time / TOTAL_ELEMENTS;
    }

    double vector_element_time = 0.0;
    if ((SAMPLE_NUM * MAX_VECTOR_SIZE) > 0) {
        vector_element_time = vector_stats.compute_time / (SAMPLE_NUM * MAX_VECTOR_SIZE);
    }

    // 正确计算元素级加速比，避免除零
    double element_speedup = 0.0;
    if (vector_element_time > 0) {
        element_speedup = scalar_element_time / vector_element_time;
    }

    // 计算向量效率 (相对于理论最大加速比)
    double vector_efficiency = 0.0;
    if (MAX_VECTOR_SIZE > 0) {
        vector_efficiency = (element_speedup / MAX_VECTOR_SIZE) * 100.0;
    }

    // 输出加速比分析
    std::cout << "\n\n===== 加速比分析 =====" << std::endl;
    std::cout << "标量模式 (向量大小=1):" << std::endl;
    std::cout << "计算时间: " << std::fixed << std::setprecision(2) << scalar_stats.compute_time << " ms" << std::endl;
    std::cout << "每个元素计算时间: " << std::fixed << std::setprecision(6) << scalar_element_time << " ms/元素" << std::endl;
    std::cout << "元素吞吐量: " << std::fixed << std::setprecision(2) << scalar_stats.throughput << " 元素/秒" << std::endl;
    
    std::cout << "\n向量模式 (向量大小=4):" << std::endl;
    std::cout << "计算时间: " << std::fixed << std::setprecision(2) << vector_stats.compute_time << " ms" << std::endl;
    std::cout << "每个元素计算时间: " << std::fixed << std::setprecision(6) << vector_element_time * MAX_VECTOR_SIZE << " ms/元素" << std::endl;
    std::cout << "元素吞吐量: " << std::fixed << std::setprecision(2) << vector_stats.throughput / MAX_VECTOR_SIZE << " 元素/秒" << std::endl;
    
    std::cout << "\n总体加速比:" << std::endl;
    std::cout << "总计算时间加速比: " << std::fixed << std::setprecision(2) << time_speedup / MAX_VECTOR_SIZE << "x" << std::endl;
    std::cout << "向量效率: " << std::fixed << std::setprecision(2) << vector_efficiency / MAX_VECTOR_SIZE << std::endl;
    std::cout << "理论最大加速比: " << MAX_VECTOR_SIZE << ".00x (理想情况)" << std::endl;
    
    return EXIT_SUCCESS;
}

#endif 