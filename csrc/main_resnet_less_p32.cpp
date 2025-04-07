#include"../config.h"
#ifdef CONFIG_RESNET_LESS_P32

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <iostream>
#include "VPvuTop.h"
#include "../../SoftPosit/source/include/softposit.h"

//---------------- 配置参数 -------------------
#define OP   9   // Less操作的操作码
const char* ACT_FILE      = "./test_src/sampled_activations.bin";
const char* WEIGHT_FILE   = "./test_src/sampled_weights.bin";
const char* GOLDEN_FILE   = "./test_src/less_results.bin";
const int SAMPLE_NUM      = 5000;                       // 与生成数据一致
const char* WAVEFORM_FILE = "waveform.vcd";             // 波形输出文件
//--------------------------------------------

struct TestData {
    float activations[SAMPLE_NUM][4]; 
    float weights[SAMPLE_NUM][4];     
    uint32_t golden[SAMPLE_NUM][4];          
};

// 直接读取fp32数据
float read_float_data(std::ifstream& file) {
    float data;
    if (file.read(reinterpret_cast<char*>(&data), sizeof(float))) {
        return data;
    }
    return 0.0f;  // 如果读取失败，返回0
}

// 读取posit数据（预期结果）
uint32_t read_posit_data(std::ifstream& file) {
    uint32_t data;
    while (file.read(reinterpret_cast<char*>(&data), sizeof(uint32_t))) {
        if (data != 0xfa0) {  // 忽略头部信息 fa0
            return data;
        }
    }
    return 0;  // 如果读取失败，返回 0
}

TestData load_testdata() {
    TestData td;

    // 读取浮点激活数据
    std::ifstream act(ACT_FILE, std::ios::binary);
    if (!act.is_open()) {
        std::cerr << "无法打开激活数据文件: " << ACT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.activations[i][j] = read_float_data(act);
        }
    }

    // 读取浮点权重数据
    std::ifstream weight(WEIGHT_FILE, std::ios::binary);
    if (!weight.is_open()) {
        std::cerr << "无法打开权重数据文件: " << WEIGHT_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.weights[i][j] = read_float_data(weight);
        }
    }

    // 读取预期输出数据（posit格式）
    std::ifstream golden(GOLDEN_FILE, std::ios::binary);
    if (!golden.is_open()) {
        std::cerr << "无法打开预期输出数据文件: " << GOLDEN_FILE << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SAMPLE_NUM; ++i) {
        for (int j = 0; j < 4; ++j) {
            td.golden[i][j] = read_posit_data(golden);
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
        float* act = td.activations[i];
        float* weight = td.weights[i];
        uint32_t* golden = td.golden[i];
        
        // 将浮点数据转换为位模式用于输入
        uint32_t act_bits[4], weight_bits[4];
        for (int j = 0; j < 4; j++) {
            std::memcpy(&act_bits[j], &act[j], sizeof(float));
            std::memcpy(&weight_bits[j], &weight[j], sizeof(float));
        }

        // 设置IEEE-754浮点输入数据
        top->io_float_i_0 = act_bits[0];
        top->io_float_i_1 = act_bits[1];
        top->io_float_i_2 = act_bits[2];
        top->io_float_i_3 = act_bits[3];
        
        top->io_float_i2_0 = weight_bits[0];
        top->io_float_i2_1 = weight_bits[1];
        top->io_float_i2_2 = weight_bits[2];
        top->io_float_i2_3 = weight_bits[3];
        
        // 清零posit输入数据
        top->io_posit_i1_0 = 0;
        top->io_posit_i1_1 = 0;
        top->io_posit_i1_2 = 0;
        top->io_posit_i1_3 = 0;
        
        top->io_posit_i2_0 = 0;
        top->io_posit_i2_1 = 0;
        top->io_posit_i2_2 = 0;
        top->io_posit_i2_3 = 0;

        // 设置信号量
        top->io_op = OP;  // 使用Less操作（op=9）
        top->io_Isposit = false;  // 输入是IEEE-754浮点数
        top->io_Outposit = true;  // 输出是Posit
        top->io_float_mode = 3;   // IEEE-754模式
        top->io_float_posit = true;

        // 设置数据位宽
        top->io_src_posit_width = 32;
        top->io_dst_posit_width = 32;
        top->io_vector_size = 4;

        // 运行一次计算
        top->clock = 1;
        top->eval();
        tfp->dump(i*2 + 1);  // 转储波形数据

        top->clock = 0;
        top->eval();
        tfp->dump(i*2 + 2);  // 转储波形数据

        // 结果比较
        uint32_t hw_result[4] = {0};
        hw_result[0] = top->io_posit_o_0;
        hw_result[1] = top->io_posit_o_1;
        hw_result[2] = top->io_posit_o_2;
        hw_result[3] = top->io_posit_o_3;

        for(int j = 0; j < 4; j++){
            if (!posit_equal(hw_result[j], golden[j])) {
                std::cerr << "样本 " << i << "[" << j << "] 不匹配\n"
                          << "  硬件: 0x" << std::hex << hw_result[j] << "\n"
                          << "  预期: 0x" << std::hex << golden[j] << "\n"
                          << "  第一操作数: " << std::fixed << act[j] << "\n"
                          << "  第二操作数: " << std::fixed << weight[j] << "\n";
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

    // 打印测试结果
    if (errors == 0) {
        std::cout << "\nfp32到posit32的less测试完成！所有测试通过！测试了 " << total * 4 << " 个小值比较操作。" << std::endl;
    } else {
        std::cerr << "\nfp32到posit32的less测试完成！测试失败，共有 " << errors << " 个错误，共测试 " << total * 4 
                  << " 个小值比较操作。" << std::endl;
    }

    return errors ? EXIT_FAILURE : EXIT_SUCCESS;
}
#endif 