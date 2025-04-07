#include"../config.h"
#ifdef CONFIG_RESNET_TRUNCATE_P32

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <cstdlib>  // 添加cstdlib头文件用于abs函数
#include "VPvuTop.h"
#include "../../SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP   10                     // 转Int操作码为10
const char* FP32_INPUT_FILE = "./test_src/sampled_activations.bin";
const char* GOLDEN_FILE      = "./test_src/truncate_results.bin";
const int SAMPLE_NUM         = 1000;  // 测试样本数量
const char* WAVEFORM_FILE    = "waveform.vcd";  // 波形输出文件
//--------------------------------------------

struct TestData {
    float fp32_input[SAMPLE_NUM][4];  // FP32浮点输入数据 
    int32_t golden[SAMPLE_NUM][4];    // 预期的整数输出  
};

// 直接读取fp32数据
float read_float_data(std::ifstream& file) {
    float data;
    if (file.read(reinterpret_cast<char*>(&data), sizeof(float))) {
        return data;
    }
    return 0.0f;  // 如果读取失败，返回0
}

// 读取Int数据
int32_t read_valid_int_data(std::ifstream& file) {
    int32_t data;
    while (file.read(reinterpret_cast<char*>(&data), sizeof(int32_t))) {
        if (data != 0xfa0) {  // 忽略头部信息 fa0
            return data;
        }
    }
    return 0;  // 如果读取失败，返回 0
}

TestData load_testdata() {
    TestData td;

    // 读取FP32浮点输入数据
    std::ifstream fp32_in(FP32_INPUT_FILE, std::ios::binary);
    if (!fp32_in.is_open()) {
        std::cerr << "无法打开FP32输入数据文件: " << FP32_INPUT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.fp32_input[i][j] = read_float_data(fp32_in);
        }
    }

    // 读取预期输出数据
    std::ifstream golden(GOLDEN_FILE, std::ios::binary);
    if (!golden.is_open()) {
        std::cerr << "无法打开预期输出数据文件: " << GOLDEN_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.golden[i][j] = read_valid_int_data(golden);
        }
    }

    return td;
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
    const size_t total = SAMPLE_NUM;

    // 测试主循环
    for (size_t i = 0; i < total; ++i) {
        // 获取浮点输入数据
        float* fp32_in = td.fp32_input[i];
        int32_t* golden = td.golden[i];
        
        // 将浮点数据转换为位模式用于输入
        uint32_t fp32_bits[4];
        for (int j = 0; j < 4; j++) {
            std::memcpy(&fp32_bits[j], &fp32_in[j], sizeof(float));
        }

        // 设置IEEE-754浮点输入数据
        top->io_float_i_0 = fp32_bits[0];
        top->io_float_i_1 = fp32_bits[1];
        top->io_float_i_2 = fp32_bits[2];
        top->io_float_i_3 = fp32_bits[3];
        
        // 第二个浮点输入端不使用，设为0
        top->io_float_i2_0 = 0;
        top->io_float_i2_1 = 0;
        top->io_float_i2_2 = 0;
        top->io_float_i2_3 = 0;
        
        // 清零posit输入数据
        top->io_posit_i1_0 = 0;
        top->io_posit_i1_1 = 0;
        top->io_posit_i1_2 = 0;
        top->io_posit_i1_3 = 0;
        
        top->io_posit_i2_0 = 0;
        top->io_posit_i2_1 = 0;
        top->io_posit_i2_2 = 0;
        top->io_posit_i2_3 = 0;

        //设置信号量
        top->io_op = OP;              // 操作码10：转Int
        top->io_Isposit = false;      // 输入是IEEE-754浮点数
        top->io_Outposit = false;     // 对于truncate操作，此选项无影响，输出永远为int
        top->io_float_mode = 3;       // 使用FP32格式
        top->io_float_posit = true;   

        //设置数据位宽
        top->io_src_posit_width = 32; // 使用32位
        top->io_dst_posit_width = 32; // 对于truncate无影响
        top->io_vector_size = 4;      // 使用4个元素的向量

        // 运行一次计算
        top->clock = 1;
        top->eval();
        tfp->dump(i*2 + 1);  // 转储波形数据

        top->clock = 0;
        top->eval();
        tfp->dump(i*2 + 2);  // 转储波形数据

        // 结果比较 - 对于truncate操作，使用int_o输出
        int32_t hw_result[4] = {0};
        hw_result[0] = top->io_int_o_0;
        hw_result[1] = top->io_int_o_1;
        hw_result[2] = top->io_int_o_2;
        hw_result[3] = top->io_int_o_3;

        for(int j = 0; j < 4; j++){
            // 允许±2以内误差视为正确
            if (std::abs(hw_result[j] - golden[j]) > 2) {
                std::cerr << "样本 " << i << " 元素 " << j << " 不匹配\n"
                          << "  硬件: " << hw_result[j] << "\n"
                          << "  预期: " << golden[j] << "\n"
                          << "  误差: " << hw_result[j] - golden[j] << "\n"
                          << "  输入FP32: " << std::fixed << fp32_in[j] << " (0x" << std::hex << fp32_bits[j] << std::dec << ")\n";
                errors++;
            }
        }

        // 进度显示
        if ((i+1) % 100 == 0) {
            std::cout << "已测试 " << (i+1) << "/" << total 
                      << " (" << ((i+1)*100/total) << "%)" 
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
              << "\nfp32到int的truncate测试完成！"
              << "\n总样本数: " << total
              << "\n错误数量: " << errors
              << "\n错误率:   " << std::fixed << std::setprecision(2)
              << (errors*25.0/total) << "%\n";

    return errors ? EXIT_FAILURE : EXIT_SUCCESS;
}

#endif 