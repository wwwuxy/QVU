#include"../config.h"
#ifdef CONFIG_EFFICIENTNET_DOT_P32 

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <chrono>  // 添加计时库
#include <vector>  // 添加vector用于统计误差
#include "VPvuTop.h"
#include "../../SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP                 5
const char* ACT_FILE    = "./test_src/EfficientNet/posit_activations.bin";
const char* WEIGHT_FILE = "./test_src/EfficientNet/posit_weights.bin";
const char* GOLDEN_FILE = "./test_src/EfficientNet/dot_product_results.bin";
const int SAMPLE_NUM    = 9000;  // 与生成数据一致
const char* WAVEFORM_FILE = "waveform.vcd";  // 波形输出文件
//--------------------------------------------

// 直接实现一些必要的辅助函数
inline bool signP32UI(uint32_t ui) {
    return (ui & 0x80000000) != 0;
}

inline bool signregP32UI(uint32_t ui) {
    return (ui & 0x40000000) != 0;
}

// 直接在此实现convertP32ToDouble函数，避免链接错误
double convertP32ToDouble(posit32_t pA) {
    union ui32_p32 uA;
    union ui64_double uZ;
    uint_fast32_t uiA, tmp = 0;
    uint_fast64_t expA = 0, uiZ, fracA = 0;
    bool signA = 0, regSA;
    int_fast32_t scale, kA = 0;

    uA.p = pA;
    uiA = uA.ui;

    if (uA.ui == 0)
        return 0;
    else if (uA.ui == 0x80000000)
        return NAN;
    else {
        signA = signP32UI(uiA);
        if (signA) uiA = (-uiA & 0xFFFFFFFF);
        regSA = signregP32UI(uiA);
        tmp = (uiA << 2) & 0xFFFFFFFF;
        if (regSA) {
            while (tmp >> 31) {
                kA++;
                tmp = (tmp << 1) & 0xFFFFFFFF;
            }
        }
        else {
            kA = -1;
            while (!(tmp >> 31)) {
                kA--;
                tmp = (tmp << 1) & 0xFFFFFFFF;
            }
            tmp &= 0x7FFFFFFF;
        }
        expA = tmp >> 29; // 提取2位

        fracA = (((uint64_t)tmp << 3) & 0xFFFFFFFF) << 20;

        expA = (((kA << 2) + expA) + 1023) << 52;
        uiZ = expA + fracA + (((uint64_t)signA & 0x1) << 63);

        uZ.ui = uiZ;
        return uZ.d;
    }
}

struct TestData {
    uint32_t activations[SAMPLE_NUM][4];    // 格式: [SAMPLE_NUM][4] (posit格式)
    uint32_t weights[SAMPLE_NUM][4];        // 格式: [SAMPLE_NUM][4] (posit格式)
    uint32_t golden[SAMPLE_NUM];            // 格式: [SAMPLE_NUM] (posit32格式)
};

// 读取posit格式数据
uint32_t read_posit_data(std::ifstream& file) {
    uint32_t data;
    if (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        return data;
    }
    return 0;  // 如果读取失败，返回0
}

// 读取posit格式的预期结果数据
uint32_t read_posit_result(std::ifstream& file) {
    uint32_t data;
    if (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        return data;
    }
    return 0;  // 如果读取失败，返回0
}

TestData load_testdata() {
    TestData td;

    // 读取posit激活数据
    std::ifstream act(ACT_FILE, std::ios::binary);
    if (!act.is_open()) {
        std::cerr << "无法打开激活数据文件: " << ACT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.activations[i][j] = read_posit_data(act);
        }
    }

    // 读取posit权重数据
    std::ifstream weight(WEIGHT_FILE, std::ios::binary);
    if (!weight.is_open()) {
        std::cerr << "无法打开权重数据文件: " << WEIGHT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.weights[i][j] = read_posit_data(weight);
        }
    }

    // 读取预期输出数据（posit32格式）
    std::ifstream golden(GOLDEN_FILE, std::ios::binary);
    if (!golden.is_open()) {
        std::cerr << "无法打开预期输出数据文件: " << GOLDEN_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        td.golden[i] = read_posit_result(golden);
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

// 计算posit32的误差率
double posit32_error_rate(uint32_t hw_result, uint32_t golden) {
    // 转换为浮点数以计算误差
    posit32_t p_hw = {.v = hw_result};
    posit32_t p_golden = {.v = golden};
    
    // 使用SoftPosit库函数直接转换
    double f_hw = convertP32ToDouble(p_hw);
    double f_golden = convertP32ToDouble(p_golden);
    
    // 计算相对误差（百分比）
    if (f_golden == 0.0) {
        // 如果标准值为0，使用绝对误差
        return std::abs(f_hw);
    } else {
        return std::abs((f_hw - f_golden) / f_golden) * 100.0;
    }
}

// 计算绝对误差
double posit32_absolute_error(uint32_t hw_result, uint32_t golden) {
    posit32_t p_hw = {.v = hw_result};
    posit32_t p_golden = {.v = golden};
    
    double f_hw = convertP32ToDouble(p_hw);
    double f_golden = convertP32ToDouble(p_golden);
    
    return std::abs(f_hw - f_golden);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // 打印测试配置
    std::cout << "AlexNet Posit32点积操作测试\n"
              << "========================\n"
              << "样本数量: " << SAMPLE_NUM << "\n"
              << "激活数据: " << ACT_FILE << "\n"
              << "权重数据: " << WEIGHT_FILE << "\n"
              << "预期结果: " << GOLDEN_FILE << "\n"
              << "========================\n";
    
    // 启用波形跟踪
    Verilated::traceEverOn(true);

    VPvuTop* top = new VPvuTop;
    
    // 创建 VCD 文件对象用于波形输出
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // 设置波形深度
    tfp->open(WAVEFORM_FILE);  // 打开波形输出文件
    
    // 加载测试数据
    TestData td = load_testdata();
    
    // 初始化信号
    top->clock = 0;
    top->reset = 1;
    top->eval();
    
    // 复位序列（2周期）
    for (int i = 0; i < 2; ++i) {
        top->clock ^= 1;
        top->eval();
        tfp->dump(i);  // 转储波形数据
    }
    top->reset = 0;
    
    size_t errors = 0;
    const size_t total = SAMPLE_NUM;
    
    // 添加误差统计变量
    double max_relative_error = 0.0;
    double total_relative_error = 0.0;
    double max_absolute_error = 0.0;
    double total_absolute_error = 0.0;
    std::vector<double> error_rates;
    size_t max_error_sample_id = 0;
    
    // 添加计时变量
    auto total_start_time = std::chrono::high_resolution_clock::now();
    
    // 测试主循环
    for (size_t i = 0; i < total; ++i) {
        // 获取posit输入数据
        uint32_t* act = td.activations[i];
        uint32_t* weight = td.weights[i];
        uint32_t golden = td.golden[i];
        
        // 设置posit输入数据
        top->io_posit_i1_0 = act[0];
        top->io_posit_i1_1 = act[1];
        top->io_posit_i1_2 = act[2];
        top->io_posit_i1_3 = act[3];
        
        top->io_posit_i2_0 = weight[0];
        top->io_posit_i2_1 = weight[1];
        top->io_posit_i2_2 = weight[2];
        top->io_posit_i2_3 = weight[3];
        
        // 清零浮点输入数据
        top->io_float_i_0 = 0;
        top->io_float_i_1 = 0;
        top->io_float_i_2 = 0;
        top->io_float_i_3 = 0;
        
        top->io_float_i2_0 = 0;
        top->io_float_i2_1 = 0;
        top->io_float_i2_2 = 0;
        top->io_float_i2_3 = 0;

        //设置信号量
        top->io_op = OP;
        top->io_Isposit = true;   // 输入是Posit
        top->io_Outposit = true;  // 输出是Posit
        top->io_float_mode = 3;   // IEEE-754模式
        top->io_float_posit = false;  // 不需要浮点数到posit的转换
        
        //设置数据位宽
        top->io_src_posit_width = 32;
        top->io_dst_posit_width = 32;
        top->io_vector_size = 4;
        
        // 运行一次点积计算
        top->clock = 1;
        top->eval();
        tfp->dump(i*2 + 1);  // 转储波形数据
        
        top->clock = 0;
        top->eval();
        tfp->dump(i*2 + 2);  // 转储波形数据
        
        // 结果比较
        uint32_t hw_result = top->io_posit_dot_o;
        if (!posit_equal(hw_result, golden)) {
            // 计算误差率
            double rel_error = posit32_error_rate(hw_result, golden);
            double abs_error = posit32_absolute_error(hw_result, golden);
            
            // 更新统计数据
            error_rates.push_back(rel_error);
            total_relative_error += rel_error;
            total_absolute_error += abs_error;
            
            // 更新最大误差
            if (rel_error > max_relative_error) {
                max_relative_error = rel_error;
                max_error_sample_id = i;
            }
            
            // 更新最大绝对误差
            if (abs_error > max_absolute_error) {
                max_absolute_error = abs_error;
            }
            
            std::cerr << "样本 " << i << " 不匹配\n"
                      << "  硬件: 0x" << std::hex << hw_result << "\n"
                      << "  预期: 0x" << std::hex << golden << "\n"
                      << "  相对误差: " << std::fixed << std::setprecision(4) << rel_error << "%\n"
                      << "  绝对误差: " << std::scientific << abs_error << "\n"
                      << "  激活数据: " << std::hex << act[0] << ", " << act[1] << ", " << act[2] << "," << act[3] << "\n"
                      << "  权重数据: " << std::hex << weight[0] << ", " << weight[1] << ", " << weight[2] << "," << weight[3] << "\n";
            errors++;
        }

        // 进度显示
        if ((i+1) % 100 == 0) {
            std::cout << "已测试 " << (i+1) << "/" << total 
                      << " (" << ((i+1)*100/total) << "%)" 
                      << std::endl;
        }
    }
    
    // 计算总运行时间
    auto total_end_time = std::chrono::high_resolution_clock::now();
    double total_time = std::chrono::duration<double, std::milli>(total_end_time - total_start_time).count();
    
    // 资源清理
    tfp->close();  // 关闭波形文件
    top->final();
    delete top;
    delete tfp;
    
    // 计算平均误差
    double avg_relative_error = errors > 0 ? total_relative_error / errors : 0.0;
    double avg_absolute_error = errors > 0 ? total_absolute_error / errors : 0.0;
    
    // 结果报告
    std::cout << "\n验证结果\n========="
              << "\nposit到posit的dot测试完成！"
              << "\n总样本数: " << total
              << "\n错误数量: " << errors
              << "\n错误率:   " << std::fixed << std::setprecision(2)
              << (errors*100.0/total) << "%"
              << "\n最大相对误差: " << std::fixed << std::setprecision(6) << max_relative_error << "% (样本 " << max_error_sample_id << ")"
              << "\n平均相对误差: " << std::fixed << std::setprecision(6) << avg_relative_error << "%"
              << "\n最大绝对误差: " << std::scientific << std::setprecision(6) << max_absolute_error
              << "\n平均绝对误差: " << std::scientific << std::setprecision(6) << avg_absolute_error
              << "\n总运行时间: " << std::fixed << std::setprecision(2) << total_time << " ms"
              << "\n每样本平均时间: " << std::fixed << std::setprecision(4) << (total_time / total) << " ms"
              << "\n处理吞吐量: " << std::fixed << std::setprecision(2) << (total / (total_time / 1000.0)) << " 样本/秒\n";

    return errors ? EXIT_FAILURE : EXIT_SUCCESS;
}

#endif 