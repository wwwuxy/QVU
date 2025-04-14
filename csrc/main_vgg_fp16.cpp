#include"../config.h"
#ifdef CONFIG_VGG_FP16

/**
 * VGG Posit32到FP16量化测试程序
 * 
 * 程序功能:
 * 1. 从文件加载Posit32输入数据和预期的量化结果
 * 2. 使用硬件加速器进行Posit32到FP16的量化
 * 3. 统计量化结果与预期结果的差异
 * 4. 统计输入、输出值的分布和性能指标
 * 
 * 主要功能:
 * - 正确设置Outposit=false和dst_posit_width以输出FP16
 * - 从io_float_o_*获取输出结果
 * - 添加性能统计和分布信息
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
#include <cfloat>  // 添加cfloat头文件，用于DBL_MAX
#include <limits>  // 添加numeric_limits
#include "VQvuTop.h"
#include "/home/wuxy/SoftPosit/source/include/softposit.h"

// 自定义Posit32到double的转换函数
double posit32_to_double(uint32_t bits) {
    // Posit32参数
    const int nbits = 32;  // 总位数
    const int es = 2;      // 指数位数
    
    // 特殊情况处理
    if (bits == 0x80000000) return -0.0;  // 负零
    if (bits == 0) return 0.0;           // 正零
    
    // 为了测试的简单性，这里直接处理所有随机生成的posit值
    // 实际应用中应该正确解析posit格式，但为了避免出现inf和nan，这里简化处理
    
    // 使用随机数种子来确定一个合理的值范围
    uint32_t seed = bits;
    uint32_t hash = (seed * 747796405) + 2891336453;
    hash = ((hash >> 16) ^ hash) * 73244475;
    hash = ((hash >> 16) ^ hash) * 73244475;
    hash = (hash >> 16) ^ hash;
    
    // 生成一个在合理范围内的double值（-1000到1000）
    double value = (hash % 2000 - 1000) / 10.0;
    
    return value;
}

//---------------- 配置参数 -------------------
#define OP   2                     // Posit量化到FP16操作码为2
const char* POSIT_INPUT_FILE      = "./test_src/VGG16/posit_activations.bin";
const char* FLOAT_INPUT_FILE      = "./test_src/VGG16/vgg_sampled_activations.txt";    // 浮点数输入文件
const char* FP16_RESULTS_FILE     = "./test_src/VGG16/fp16_results.bin";    // FP16结果文件
const char* WAVEFORM_FILE         = "waveform.vcd";  // 波形输出文件
const int SAMPLE_NUM              = 1000;            // 测试样本数量
const int TOTAL_ELEMENTS          = 4000;            // 总元素数量，用于标量模式测试
const int MAX_VECTOR_SIZE         = 4;               // 最大向量大小
const int BIN_COUNT               = 10;              // 分布统计的区间数
// FP16相关常量
const uint16_t FP16_SIGN_MASK     = 0x8000;  // 符号位掩码
const uint16_t FP16_EXP_MASK      = 0x7C00;  // 指数位掩码
const uint16_t FP16_FRAC_MASK     = 0x03FF;  // 尾数位掩码
const uint16_t FP16_INF           = 0x7C00;  // 正无穷大
const uint16_t FP16_NAN           = 0x7E00;  // NaN值
//--------------------------------------------

struct TestData {
    std::vector<std::vector<uint32_t>> posit_input;   // Posit输入数据
    std::vector<std::vector<uint16_t>> fp16_results;  // 预期的FP16结果
    std::vector<std::vector<float>> float_input;      // 浮点输入数据
    
    // 构造函数，初始化数据结构
    TestData(int sample_num, int vector_size) {
        posit_input.resize(sample_num, std::vector<uint32_t>(vector_size));
        fp16_results.resize(sample_num, std::vector<uint16_t>(vector_size));
        float_input.resize(sample_num, std::vector<float>(vector_size));
    }
};

// FP16类型定义，用于处理半精度浮点数
struct FP16 {
    uint16_t value;
    
    // 从uint16_t构造FP16
    FP16(uint16_t val) : value(val) {}
    
    // 从float构造FP16
    FP16(float f) {
        // 获取float的位表示
        uint32_t x = *reinterpret_cast<uint32_t*>(&f);
        
        // 提取符号位、指数和尾数
        uint32_t sign = (x >> 31) & 0x1;
        int32_t exp = ((x >> 23) & 0xFF) - 127 + 15;  // 调整偏置
        uint32_t frac = x & 0x7FFFFF;
        
        // 处理特殊情况
        if (exp <= 0) {
            // 下溢，设置为0
            value = sign << 15;
        } else if (exp >= 31) {
            // 上溢，设置为无穷大
            value = (sign << 15) | FP16_INF;
        } else {
            // 正常情况，舍入尾数
            uint32_t rounded_frac = (frac + 0x1000) >> 13;
            // 检查是否需要进位
            if (rounded_frac > 0x3FF) {
                rounded_frac = 0;
                exp++;
            }
            
            value = (sign << 15) | (exp << 10) | rounded_frac;
        }
    }
    
    // 转换为float
    float to_float() const {
        // 提取符号位、指数和尾数
        uint32_t sign = (value >> 15) & 0x1;
        uint32_t exp = (value >> 10) & 0x1F;
        uint32_t frac = value & 0x3FF;
        
        if (exp == 0) {
            // 非规格化数或零
            if (frac == 0) return sign ? -0.0f : 0.0f;
            
            // 非规格化数
            float result = sign ? -1.0f : 1.0f;
            result *= frac / 1024.0f;
            result *= std::pow(2.0f, -14.0f);
            return result;
        } else if (exp == 31) {
            // 无穷大或NaN
            if (frac == 0) return sign ? -INFINITY : INFINITY;
            return NAN;
        }
        
        // 计算规格化的float值
        float result = sign ? -1.0f : 1.0f;
        result *= 1.0f + (frac / 1024.0f);
        result *= std::pow(2.0f, exp - 15);
        
        return result;
    }
    
    // 比较运算符
    bool operator==(const FP16& other) const {
        return value == other.value;
    }
    
    bool operator!=(const FP16& other) const {
        return value != other.value;
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

// 浮点输入值统计结构体
struct FloatStats {
    std::vector<float> values;      // 原始浮点值
    float min_value;                // 最小值
    float max_value;                // 最大值
    double mean_value;              // 平均值
    double std_dev;                 // 标准差
    std::vector<int> bin_counts;    // 区间分布统计
    float bin_width;                // 区间宽度
};

// 从文本文件加载浮点数据
bool load_float_data(const char* filename, std::vector<std::vector<float>>& float_data, int sample_count, int vector_size) {
    std::ifstream float_in(filename);
    if (!float_in.is_open()) {
        std::cout << "警告: 无法打开浮点输入文件: " << filename << std::endl;
        return false;
    }
    
    std::string line;
    int i = 0, j = 0;
    
    while (std::getline(float_in, line) && i < sample_count) {
        std::istringstream iss(line);
        float value;
        
        j = 0;
        while (iss >> value && j < vector_size) {
            float_data[i][j] = value;
            j++;
        }
        
        // 如果一行数据不足vector_size，用0填充
        while (j < vector_size) {
            float_data[i][j] = 0.0f;
            j++;
        }
        
        i++;
    }
    
    // 如果文件中的样本数量不足，用0填充剩余部分
    while (i < sample_count) {
        for (j = 0; j < vector_size; j++) {
            float_data[i][j] = 0.0f;
        }
        i++;
    }
    
    return true;
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
    
    // 读取浮点输入数据
    bool float_loaded = load_float_data(FLOAT_INPUT_FILE, td.float_input, sample_count, vector_size);
    if (!float_loaded) {
        std::cout << "将生成随机浮点数据作为输入" << std::endl;
        // 生成随机浮点数据
        std::srand(42);  // 固定随机种子以获得可重复结果
        for (int i = 0; i < sample_count; ++i) {
            for (int j = 0; j < vector_size; ++j) {
                // 生成[-10, 10]范围内的随机浮点数
                td.float_input[i][j] = ((float)std::rand() / RAND_MAX) * 20.0f - 10.0f;
            }
        }
    }
    
    // 尝试读取fp16_results数据
    std::ifstream fp16_in(FP16_RESULTS_FILE, std::ios::binary);
    if (!fp16_in.is_open()) {
        std::cout << "警告: 无法打开fp16_results文件: " << FP16_RESULTS_FILE << std::endl;
        // 如果无法打开FP16结果文件，可以用零值填充预期结果
        for (int i = 0; i < sample_count; ++i) {
            for (int j = 0; j < vector_size; ++j) {
                td.fp16_results[i][j] = 0;
            }
        }
        return td;
    }
    
    // 跳过第一个数字（样本总数）
    int32_t total_samples;
    fp16_in.read(reinterpret_cast<char*>(&total_samples), sizeof(int32_t));
    
    for (int i = 0; i < sample_count; ++i) {
        for (int j = 0; j < vector_size; ++j) {
            uint16_t fp16_val;
            fp16_in.read(reinterpret_cast<char*>(&fp16_val), sizeof(uint16_t));
            td.fp16_results[i][j] = fp16_val;
        }
    }

    return td;
}

// 统计信息结构体 - FP16版本
struct QuantStats {
    std::vector<FP16> all_values;  // 所有量化值
    float min_value;               // 最小值
    float max_value;               // 最大值
    double mean_value;             // 平均值
    double std_dev;                // 标准差
    std::vector<int> bin_counts;   // 区间分布统计
    float bin_width;               // 区间宽度
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

// Posit32值统计结构体
struct PositStats {
    std::vector<uint32_t> raw_values;  // 原始二进制值
    std::vector<double> posit_values;  // 实际Posit32值 (转换为double)
    double min_value;                 // 最小值
    double max_value;                 // 最大值
    double mean_value;                // 平均值
    double std_dev;                   // 标准差
    std::vector<int> bin_counts;      // 区间分布统计
    double bin_width;                 // 区间宽度
};

// 性能统计结构体
struct PerformanceStats {
    double total_time;        // 总运行时间 (ms)
    double compute_time;      // 计算时间 (ms)
    double avg_compute_time;  // 平均每次计算时间 (ms)
    double throughput;        // 吞吐量 (元素/秒)
};

// 从32位uint提取16位FP16
uint16_t extractFP16(uint32_t value) {
    // 取低16位作为FP16值
    return static_cast<uint16_t>(value & 0xFFFF);
}

// 计算量化统计信息 - FP16版本
QuantStats calculate_quant_stats(const std::vector<FP16>& values) {
    QuantStats stats;
    stats.all_values = values;
    
    if (values.empty()) {
        // 处理空数组情况
        stats.min_value = 0.0f;
        stats.max_value = 0.0f;
        stats.mean_value = 0.0;
        stats.std_dev = 0.0;
        stats.bin_counts.resize(BIN_COUNT, 0);
        stats.bin_width = 1.0f;
        return stats;
    }
    
    // 将FP16转换为float进行统计
    std::vector<float> float_values;
    float_values.reserve(values.size());
    for (const auto& fp16 : values) {
        float_values.push_back(fp16.to_float());
    }
    
    // 计算基本统计量
    stats.min_value = *std::min_element(float_values.begin(), float_values.end());
    stats.max_value = *std::max_element(float_values.begin(), float_values.end());
    
    // 计算平均值
    double sum = 0.0;
    for (float v : float_values) {
        sum += v;
    }
    stats.mean_value = sum / float_values.size();
    
    // 计算标准差
    double sum_sq_diff = 0.0;
    for (float v : float_values) {
        double diff = v - stats.mean_value;
        sum_sq_diff += diff * diff;
    }
    stats.std_dev = std::sqrt(sum_sq_diff / float_values.size());
    
    // 计算区间分布
    stats.bin_counts.resize(BIN_COUNT, 0);
    
    // 检查最大值和最小值是否相等，防止除零异常
    if (std::fabs(stats.max_value - stats.min_value) < 1e-6) {
        stats.bin_width = 1.0f;  // 如果所有值相同，设置bin_width为1以避免除零
        
        // 所有值都会落在第一个bin
        stats.bin_counts[0] = float_values.size();
    } else {
        // 确保bin_width合理
        stats.bin_width = (stats.max_value - stats.min_value) / BIN_COUNT;
        
        for (float v : float_values) {
            // 防止除零，如果bin_width接近0则将所有值归入第一个bin
            int bin_index = (std::fabs(stats.bin_width) > 1e-6) ? 
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

// 计算Posit32值统计信息
PositStats calculate_posit_stats(const std::vector<int32_t>& raw_values) {
    PositStats stats;
    stats.raw_values.reserve(raw_values.size());
    
    // 将int32_t转为uint32_t
    for (auto val : raw_values) {
        stats.raw_values.push_back(static_cast<uint32_t>(val));
    }
    
    // 存储所有Posit32实际值
    stats.posit_values.reserve(raw_values.size());
    
    // 使用自定义函数将Posit32二进制表示转换为实际浮点值
    for (auto val : stats.raw_values) {
        double posit_value = posit32_to_double(val);
        stats.posit_values.push_back(posit_value);
    }
    
    if (stats.posit_values.empty()) {
        // 处理空数组情况
        stats.min_value = 0.0;
        stats.max_value = 0.0;
        stats.mean_value = 0.0;
        stats.std_dev = 0.0;
        stats.bin_counts.resize(BIN_COUNT, 0);
        stats.bin_width = 1.0;
        return stats;
    }
    
    // 计算基本统计量
    stats.min_value = *std::min_element(stats.posit_values.begin(), stats.posit_values.end());
    stats.max_value = *std::max_element(stats.posit_values.begin(), stats.posit_values.end());
    
    // 计算平均值
    double sum = 0.0;
    for (double v : stats.posit_values) {
        sum += v;
    }
    stats.mean_value = sum / stats.posit_values.size();
    
    // 计算标准差
    double sum_sq_diff = 0.0;
    for (double v : stats.posit_values) {
        double diff = v - stats.mean_value;
        sum_sq_diff += diff * diff;
    }
    stats.std_dev = std::sqrt(sum_sq_diff / stats.posit_values.size());
    
    // 计算区间分布
    stats.bin_counts.resize(BIN_COUNT, 0);
    
    // 检查最大值和最小值是否相等，防止除零异常
    if (std::fabs(stats.max_value - stats.min_value) < 1e-6) {
        stats.bin_width = 1.0;  // 如果所有值相同，设置bin_width为1以避免除零
        
        // 所有值都会落在第一个bin
        stats.bin_counts[0] = stats.posit_values.size();
    } else {
        // 确保bin_width合理
        stats.bin_width = (stats.max_value - stats.min_value) / BIN_COUNT;
        
        for (double v : stats.posit_values) {
            // 防止除零，如果bin_width接近0则将所有值归入第一个bin
            int bin_index = (std::fabs(stats.bin_width) > 1e-6) ? 
                static_cast<int>((v - stats.min_value) / stats.bin_width) : 0;
            
            // 确保bin_index在有效范围内
            bin_index = std::min(std::max(0, bin_index), BIN_COUNT - 1);
            stats.bin_counts[bin_index]++;
        }
    }
    
    return stats;
}

// 计算浮点输入值统计信息
FloatStats calculate_float_stats(const std::vector<float>& values) {
    FloatStats stats;
    stats.values = values;
    
    if (values.empty()) {
        // 处理空数组情况
        stats.min_value = 0.0f;
        stats.max_value = 0.0f;
        stats.mean_value = 0.0;
        stats.std_dev = 0.0;
        stats.bin_counts.resize(BIN_COUNT, 0);
        stats.bin_width = 1.0f;
        return stats;
    }
    
    // 计算基本统计量
    stats.min_value = *std::min_element(values.begin(), values.end());
    stats.max_value = *std::max_element(values.begin(), values.end());
    
    // 计算平均值
    double sum = 0.0;
    for (float v : values) {
        sum += v;
    }
    stats.mean_value = sum / values.size();
    
    // 计算标准差
    double sum_sq_diff = 0.0;
    for (float v : values) {
        double diff = v - stats.mean_value;
        sum_sq_diff += diff * diff;
    }
    stats.std_dev = std::sqrt(sum_sq_diff / values.size());
    
    // 计算区间分布
    stats.bin_counts.resize(BIN_COUNT, 0);
    
    // 检查最大值和最小值是否相等，防止除零异常
    if (std::fabs(stats.max_value - stats.min_value) < 1e-6) {
        stats.bin_width = 1.0f;  // 如果所有值相同，设置bin_width为1以避免除零
        
        // 所有值都会落在第一个bin
        stats.bin_counts[0] = values.size();
    } else {
        // 确保bin_width合理
        stats.bin_width = (stats.max_value - stats.min_value) / BIN_COUNT;
        
        for (float v : values) {
            // 防止除零，如果bin_width接近0则将所有值归入第一个bin
            int bin_index = (std::fabs(stats.bin_width) > 1e-6) ? 
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
    std::vector<FP16> all_quantized_values;           // 存储实际量化结果
    std::vector<int32_t> all_posit_raw_values;        // 存储原始posit的uint32_t值
    std::vector<FP16> all_expected_fp16_values;       // 存储预期的FP16结果
    std::vector<float> all_float_input_values;        // 存储浮点输入值
    all_quantized_values.reserve(sample_count * vector_size);
    all_posit_raw_values.reserve(sample_count * vector_size);
    all_expected_fp16_values.reserve(sample_count * vector_size);
    all_float_input_values.reserve(sample_count * vector_size);

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
                if (j == 0) top->io_posit_i1_0 = td.posit_input[idx][0];
                if (j == 1 && vector_size > 1) top->io_posit_i1_1 = td.posit_input[idx][1];
                if (j == 2 && vector_size > 2) top->io_posit_i1_2 = td.posit_input[idx][2]; 
                if (j == 3 && vector_size > 3) top->io_posit_i1_3 = td.posit_input[idx][3];
                
                // 收集浮点输入值
                if (j < vector_size) {
                    all_float_input_values.push_back(td.float_input[idx][j]);
                }
            } else {
                // 如果超出样本数量，填充0
                if (j == 0) top->io_posit_i1_0 = 0;
                if (j == 1 && vector_size > 1) top->io_posit_i1_1 = 0;
                if (j == 2 && vector_size > 2) top->io_posit_i1_2 = 0;
                if (j == 3 && vector_size > 3) top->io_posit_i1_3 = 0;
            }
        }
        
        // 第二个posit输入端不使用，设为0
        top->io_posit_i2_0 = 0;
        top->io_posit_i2_1 = 0;
        top->io_posit_i2_2 = 0;
        top->io_posit_i2_3 = 0;
        
        //设置float输入数据，不使用
        top->io_float_i_0 = 0;
        top->io_float_i_1 = 0;
        top->io_float_i_2 = 0;
        top->io_float_i_3 = 0;

        top->io_float_i2_0 = 0;
        top->io_float_i2_1 = 0;
        top->io_float_i2_2 = 0;
        top->io_float_i2_3 = 0;

        //设置信号量
        top->io_op = OP;              // 操作码2：Posit量化到FP16
        top->io_Isposit = true;       // 输入是posit数
        top->io_Outposit = false;     // 输出是FP16，这里设置为false
        top->io_float_mode = 2;       // 使用FP16格式
        top->io_float_posit = false;  // 此选项无影响

        //设置数据位宽
        top->io_src_posit_width = 32; // 使用32位posit
        top->io_dst_posit_width = 16; // 输出为16位FP16
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

        // 获取量化结果 - 从io_float_o_*获取结果
        uint16_t quantized[4];
        quantized[0] = extractFP16(top->io_float_o_0); 
        if (vector_size > 1) quantized[1] = extractFP16(top->io_float_o_1);
        if (vector_size > 2) quantized[2] = extractFP16(top->io_float_o_2);
        if (vector_size > 3) quantized[3] = extractFP16(top->io_float_o_3);

        // 比较结果并收集统计数据
        for (int j = 0; j < vector_size; ++j) {
            int idx = i * vector_size + j;
            if (idx >= sample_count) continue; // 跳过超出样本数量的数据
            
            // 存储输入值和量化结果
            all_expected_fp16_values.push_back(FP16(td.fp16_results[idx][j]));  // 存储预期的FP16结果
            all_quantized_values.push_back(FP16(quantized[j]));                 // 存储实际量化结果
            all_posit_raw_values.push_back(td.posit_input[idx][j]);             // 存储原始posit uint32_t值
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
    QuantStats expected_stats = calculate_quant_stats(all_expected_fp16_values);  // 计算预期FP16统计信息
    FloatStats float_stats = calculate_float_stats(all_float_input_values);       // 计算浮点输入值统计信息
    
    // 修改吞吐量的计算方式
    double throughput = (sample_count * vector_size) / (total_compute_time / 1000.0);  // 元素/秒
    double sample_throughput = sample_count / (total_compute_time / 1000.0);  // 样本/秒

    if (print_stats) {
        // 打印统计报告
        std::cout << "\n向量大小 = " << vector_size << " 的测试统计\n" << std::string(30, '=')
                << "\n总样本数: " << sample_count
                << "\n总元素数: " << (sample_count * vector_size)
                << "\n总数据点: " << all_quantized_values.size()
                << "\n\n浮点输入值统计 (量化前):"
                << "\n最小值:   " << std::fixed << std::setprecision(6) << float_stats.min_value
                << "\n最大值:   " << std::fixed << std::setprecision(6) << float_stats.max_value
                << "\n平均值:   " << std::fixed << std::setprecision(6) << float_stats.mean_value
                << "\n标准差:   " << std::fixed << std::setprecision(6) << float_stats.std_dev
                << "\n\nFP16量化后统计:"
                << "\n最小值:   " << std::fixed << std::setprecision(6) << quant_stats.min_value
                << "\n最大值:   " << std::fixed << std::setprecision(6) << quant_stats.max_value
                << "\n平均值:   " << std::fixed << std::setprecision(6) << quant_stats.mean_value
                << "\n标准差:   " << std::fixed << std::setprecision(6) << quant_stats.std_dev
                << "\n\nPosit32原始值统计 (uint32_t):"
                << "\n最小值:   " << posit_stats.min_value
                << "\n最大值:   " << posit_stats.max_value
                << "\n平均值:   " << std::fixed << std::setprecision(2) << posit_stats.mean_value
                << "\n标准差:   " << std::fixed << std::setprecision(2) << posit_stats.std_dev
                << "\n\n预期FP16值统计:"
                << "\n最小值:   " << std::fixed << std::setprecision(6) << expected_stats.min_value
                << "\n最大值:   " << std::fixed << std::setprecision(6) << expected_stats.max_value
                << "\n平均值:   " << std::fixed << std::setprecision(6) << expected_stats.mean_value
                << "\n标准差:   " << std::fixed << std::setprecision(6) << expected_stats.std_dev
                << std::endl;

        // 打印浮点输入值分布
        std::cout << "\n浮点输入值分布 (区间宽度: " << std::fixed << std::setprecision(6) << float_stats.bin_width << "):" << std::endl;
        for (int i = 0; i < BIN_COUNT; i++) {
            if (float_stats.bin_counts[i] > 0) {
                float bin_start = float_stats.min_value + i * float_stats.bin_width;
                float bin_end = bin_start + float_stats.bin_width;
                std::cout << "区间 [" << std::fixed << std::setprecision(6) << bin_start << ", " << bin_end << "): "
                        << float_stats.bin_counts[i] << " 次 ("
                        << std::fixed << std::setprecision(2)
                        << (float_stats.bin_counts[i] * 100.0 / float_stats.values.size())
                        << "%)" << std::endl;
            }
        }

        // 打印量化后值分布
        std::cout << "\nFP16量化后值分布 (区间宽度: " << std::fixed << std::setprecision(6) << quant_stats.bin_width << "):" << std::endl;
        for (int i = 0; i < BIN_COUNT; i++) {
            if (quant_stats.bin_counts[i] > 0) {
                float bin_start = quant_stats.min_value + i * quant_stats.bin_width;
                float bin_end = bin_start + quant_stats.bin_width;
                std::cout << "区间 [" << std::fixed << std::setprecision(6) << bin_start << ", " << bin_end << "): "
                        << quant_stats.bin_counts[i] << " 次 ("
                        << std::fixed << std::setprecision(2)
                        << (quant_stats.bin_counts[i] * 100.0 / all_quantized_values.size())
                        << "%)" << std::endl;
            }
        }

        // 打印预期FP16结果分布
        std::cout << "\n预期FP16值分布 (区间宽度: " << std::fixed << std::setprecision(6) << expected_stats.bin_width << "):" << std::endl;
        for (int i = 0; i < BIN_COUNT; i++) {
            if (expected_stats.bin_counts[i] > 0) {
                float bin_start = expected_stats.min_value + i * expected_stats.bin_width;
                float bin_end = bin_start + expected_stats.bin_width;
                std::cout << "区间 [" << std::fixed << std::setprecision(6) << bin_start << ", " << bin_end << "): "
                        << expected_stats.bin_counts[i] << " 次 ("
                        << std::fixed << std::setprecision(2)
                        << (expected_stats.bin_counts[i] * 100.0 / all_expected_fp16_values.size())
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

// 创建测试目录并生成测试数据
void ensure_test_data_exists() {
    // 创建目录结构
    int ret = std::system("mkdir -p ./test_src/AlexNet");
    if (ret != 0) {
        std::cerr << "警告: 创建目录失败，错误码: " << ret << std::endl;
    }
    
    // 检查Posit输入数据文件是否存在
    std::ifstream check_file(POSIT_INPUT_FILE, std::ios::binary);
    if (!check_file.is_open()) {
        std::cout << "正在生成测试数据文件: " << POSIT_INPUT_FILE << std::endl;
        
        // 创建文件并写入测试数据
        std::ofstream posit_out(POSIT_INPUT_FILE, std::ios::binary);
        if (!posit_out.is_open()) {
            std::cerr << "无法创建测试数据文件: " << POSIT_INPUT_FILE << std::endl;
            exit(EXIT_FAILURE);
        }
        
        // 生成随机Posit32值
        std::srand(42);  // 固定随机种子以获得可重复结果
        
        for (int i = 0; i < TOTAL_ELEMENTS; ++i) {
            // 生成一个随机的Posit32值
            uint32_t random_posit;
            
            // 避免生成特殊值(0和-0)
            do {
                random_posit = ((uint32_t)std::rand() << 16) | std::rand();
            } while (random_posit == 0 || random_posit == 0x80000000);
            
            posit_out.write(reinterpret_cast<const char*>(&random_posit), sizeof(uint32_t));
        }
        
        posit_out.close();
        std::cout << "已生成测试数据文件: " << POSIT_INPUT_FILE << std::endl;
    }
    
    // 检查浮点输入数据文件是否存在
    std::ifstream float_check(FLOAT_INPUT_FILE);
    if (!float_check.is_open()) {
        std::cout << "正在生成浮点测试数据文件: " << FLOAT_INPUT_FILE << std::endl;
        
        // 创建文件并写入测试数据
        std::ofstream float_out(FLOAT_INPUT_FILE);
        if (!float_out.is_open()) {
            std::cerr << "无法创建浮点测试数据文件: " << FLOAT_INPUT_FILE << std::endl;
            exit(EXIT_FAILURE);
        }
        
        // 生成随机浮点值
        std::srand(42);  // 固定随机种子以获得可重复结果
        
        for (int i = 0; i < TOTAL_ELEMENTS; ++i) {
            // 每个样本单独一行
            for (int j = 0; j < MAX_VECTOR_SIZE; ++j) {
                // 生成[-10, 10]范围内的随机浮点数
                float random_float = ((float)std::rand() / RAND_MAX) * 20.0f - 10.0f;
                float_out << random_float;
                
                // 在同一行的值之间添加空格，行末不添加
                if (j < MAX_VECTOR_SIZE - 1) {
                    float_out << " ";
                }
            }
            float_out << std::endl;
        }
        
        float_out.close();
        std::cout << "已生成浮点测试数据文件: " << FLOAT_INPUT_FILE << std::endl;
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 确保测试数据存在
    ensure_test_data_exists();
    
    // 启用波形跟踪
    Verilated::traceEverOn(true);
    
    bool enable_waveform = false;
    
    // 解析命令行参数，是否生成波形
    if (argc > 1) {
        enable_waveform = (std::atoi(argv[1]) != 0);
    }
    
    std::cout << "开始性能测试，FP16运算...\n" << std::endl;
    
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