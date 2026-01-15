# QVU - 量化向量单元

QVU (Quantization Vector Unit) 是一个基于Chisel的高效量化处理器，用于将Posit数值格式量化为不同的目标格式(FP4/FP8/FP16/INT4/INT8)，特别为神经网络推理优化。

## 主要特性

- 支持多种神经网络模型的量化：
  - AlexNet, ConvNeXt, EfficientNet
  - LeNet, MobileNet, RegNet
  - ResNet, ShuffleNetV2, SqueezeNet, VGG

- 支持多种量化格式：
  - 浮点格式：FP4, FP8, FP16
  - 整数格式：INT4, INT8

- 高性能设计：
  - 基于Chisel硬件构建语言
  - 支持向量化操作
  - 可配置参数

## 支持的量化操作

| 操作码 | 操作名称 | 功能描述 |
|--------|---------|---------|
| 0 | QuantizeInt8 | 将Posit量化为Int8整数 |
| 1 | QuantizeInt4 | 将Posit量化为Int4整数 |
| 2 | QuantizeFP16 | 将Posit量化为FP16浮点数 |
| 3 | QuantizeFP8 | 将Posit量化为FP8浮点数 |
| 4 | QuantizeFP4 | 将Posit量化为FP4浮点数 |

## 浮点数格式

| 模式 | 格式 | 位宽分配 |
|-----|------|---------|
| 0 | FP4 | 1位符号, 1位指数, 2位尾数 |
| 1 | FP8 | 1位符号, 4位指数, 3位尾数 |
| 2 | FP16 | 1位符号, 5位指数, 10位尾数 |
| 3 | FP32 | 1位符号, 8位指数, 23位尾数 |


## 目录结构

```
.
├── csrc/                # C++测试和验证代码
│   ├── main_*.cpp       # 各模型的测试程序
├── src/                 # Chisel源代码
│   ├── main/scala/qvu/  # QVU核心实现
├── vsrc/                # Verilog代码
│   ├── QvuTop.sv        # 顶层模块
├── test_src/            # 测试数据
│   ├── AlexNet/         # AlexNet测试数据
│   ├── ConvNeXt/        # ConvNeXt测试数据
│   └── ...              # 其他模型数据
├── build.sbt            # SBT构建文件
└── makefile             # Makefile构建脚本
```
