#include"../config.h"
#ifdef CONFIG_RESNET_POSIT32_TO_FP32

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include "VPvuTop.h"
#include "../../SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP   7   // op7对应posit32到fp32的转换
const char* POSIT_FILE   = "./test_src/posit32_data.bin";
const char* GOLDEN_FILE  = "./test_src/fp32_data.bin";
const int SAMPLE_NUM     = 1000;                           // 与生成数据一致
const char* WAVEFORM_FILE = "waveform.vcd";                // 波形输出文件
const int VECTOR_SIZE    = 4;                              // 设置向量大小为4
//--------------------------------------------

struct TestData {
    uint32_t posit_inputs[SAMPLE_NUM];    // Posit32输入
    float golden_fp32[SAMPLE_NUM];        // 预期的FP32输出
};

TestData load_testdata() {
    TestData td;

    // 读取Posit32输入数据
    std::ifstream posit_file(POSIT_FILE, std::ios::binary);
    if (!posit_file.is_open()) {
        std::cerr << "无法打开Posit32数据文件: " << POSIT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    posit_file.read(reinterpret_cast<char*>(td.posit_inputs), sizeof(uint32_t) * SAMPLE_NUM);
    posit_file.close();

    // 读取预期的FP32输出数据
    std::ifstream fp32_file(GOLDEN_FILE, std::ios::binary);
    if (!fp32_file.is_open()) {
        std::cerr << "无法打开FP32数据文件: " << GOLDEN_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    fp32_file.read(reinterpret_cast<char*>(td.golden_fp32), sizeof(float) * SAMPLE_NUM);
    fp32_file.close();

    return td;
}

// 比较两个FP32值是否相等（考虑ULP误差）
bool fp32_equal(float a, float b) {
    if (a == b) return true;
    
    // 将float转换为uint32_t以进行位比较
    uint32_t ia, ib;
    std::memcpy(&ia, &a, sizeof(uint32_t));
    std::memcpy(&ib, &b, sizeof(uint32_t));
    
    // 允许1ULP误差
    return std::abs(static_cast<int32_t>(ia) - static_cast<int32_t>(ib)) <= 1;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
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
    // 向量模式下，我们需要处理的样本数量是SAMPLE_NUM/VECTOR_SIZE（向上取整）
    const size_t vector_iterations = (SAMPLE_NUM + VECTOR_SIZE - 1) / VECTOR_SIZE;
    const size_t total_tests = vector_iterations * VECTOR_SIZE;

    // 测试主循环，每次处理VECTOR_SIZE个数据
    for (size_t i = 0; i < vector_iterations; ++i) {
        uint32_t posit_inputs[VECTOR_SIZE] = {0};
        float expected_fp32[VECTOR_SIZE] = {0};
        
        // 准备当前向量的输入数据和预期输出
        for (int j = 0; j < VECTOR_SIZE; ++j) {
            size_t idx = i * VECTOR_SIZE + j;
            if (idx < SAMPLE_NUM) {
                posit_inputs[j] = td.posit_inputs[idx];
                expected_fp32[j] = td.golden_fp32[idx];
            } else {
                // 如果超出范围，使用默认值
                posit_inputs[j] = 0;
                expected_fp32[j] = 0.0f;
            }
        }

        // 设置Posit32输入数据
        top->io_posit_i1_0 = posit_inputs[0];
        top->io_posit_i1_1 = posit_inputs[1];
        top->io_posit_i1_2 = posit_inputs[2];
        top->io_posit_i1_3 = posit_inputs[3];

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
        top->io_Outposit    = false;  // 输出是FP32
        top->io_float_mode  = 3;      // IEEE-754模式
        top->io_float_posit = false;  // 不需要转换

        // 设置数据位宽
        top->io_src_posit_width = 32;           // 32位Posit
        top->io_dst_posit_width = 32;           // 32位FP32
        top->io_vector_size     = VECTOR_SIZE;  // 向量大小为4
        
        // 运行一个时钟周期
        top->clock = 1;
        top->eval();
        tfp->dump(i*2 + 1);  // 转储波形数据

        top->clock = 0;
        top->eval();
        tfp->dump(i*2 + 2);  // 转储波形数据

        // 获取硬件计算的FP32结果
        float hw_result[VECTOR_SIZE];
        uint32_t hw_bits[VECTOR_SIZE];
        hw_bits[0] = top->io_float_o_0;
        hw_bits[1] = top->io_float_o_1;
        hw_bits[2] = top->io_float_o_2;
        hw_bits[3] = top->io_float_o_3;
        
        // 将uint32_t转换为float
        for (int j = 0; j < VECTOR_SIZE; ++j) {
            std::memcpy(&hw_result[j], &hw_bits[j], sizeof(float));
        }

        // 比较每个向量元素的结果
        for (int j = 0; j < VECTOR_SIZE; ++j) {
            size_t idx = i * VECTOR_SIZE + j;
            if (idx >= SAMPLE_NUM) continue;  // 超出范围的样本不进行比较
            
            if (!fp32_equal(hw_result[j], expected_fp32[j])) {
                std::cerr << "样本 " << idx << " 不匹配\n"
                          << "  向量位置: " << j << "\n"
                          << "  输入Posit: 0x" << std::hex << posit_inputs[j] << "\n"
                          << "  硬件输出: " << std::fixed << hw_result[j] << " (0x" << std::hex << hw_bits[j] << ")\n"
                          << "  预期输出: " << std::fixed << expected_fp32[j] << "\n";
                errors++;
            }
        }

        // 进度显示
        if ((i+1) % 25 == 0) {  // 每25个向量显示一次（对应约100个样本）
            std::cout << "已测试 " << std::min((i+1)*VECTOR_SIZE, (size_t)SAMPLE_NUM) << "/" << SAMPLE_NUM 
                      << " (" << (std::min((i+1)*VECTOR_SIZE, (size_t)SAMPLE_NUM)*100/SAMPLE_NUM) << "%)" 
                      << std::endl;
        }
    }

    // 资源清理
    tfp->close();  // 关闭波形文件
    top->final();
    delete top;
    delete tfp;

    // 结果报告
    std::cout << "\n验证结果\n========="
              << "\nPosit32到FP32向量转换测试完成！"
              << "\n总样本数: " << SAMPLE_NUM
              << "\n向量宽度: " << VECTOR_SIZE
              << "\n错误数量: " << errors
              << "\n错误率:   " << std::fixed << std::setprecision(2)
              << (errors*100.0/SAMPLE_NUM) << "%\n";

    return errors ? EXIT_FAILURE : EXIT_SUCCESS;
}

#endif 