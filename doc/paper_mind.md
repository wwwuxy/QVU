### 硬件模块：

#### 解码：
- 提取符号位，若符号位为1，表示Posit是负数，若符号位为0，表示正数，并提取后的Posit二进制修改为补码表示。
-  计算Regime的位宽和值，通过前导0计数模块（LZC）来计算Regime部分的值，首先提取Regime部分的最高位，若为0，表示Regime类如（00....01），此时直接送入LZC模块进行计数，若为1，则Regime类如（11....10），则先将所有二进制取反，再送入LZC模块进行计数。
-  LZC模块将返回前导0的个数以及是否全0，前者可以结合Regime最高位的值代入公式（1）计算r值，由于Regime位域的长度是动态的，故有Regime位域占满整个Posit位宽的情况，此时可以通过后者进行判断。
-  Regime位域的长度k可以由前导0的个数+1得到，我们将Posit通过桶形移位器左移k+1位，即可从最高位提取Exponent位域，其宽度ES由Posit配置（通常为2）获取，同时，若ES不为2，我们可以将ES值代入公式（2），得到Useed的值，若ES为2，我们则不用计算Useed。
- 为了便于后续计算，我们将Regime和Exponent结合，计算统一的以二为底的指数值exp。具体而言，我们将r左移ES位，再和Exponent位域的值e相加，即可得到exp的值。
- 最后，我们通过桶形移位器左移ES位，即可得到尾数部分Fraction。注意，在Posit数制中，尾数部分是有隐藏位的m的，我们将其与提取到的Fraction拼接，便获得了运算时的真实尾数值。
- 至此，我们成功将Posit解码，得到了Posit浮点运算中间表示（PIR），包括表示Posit正负的sign，以二为底的指数值exp和实际尾数frc。
#### 加法/减法：
- 在进行加减运算前，需要将操作数进行对齐化处理，使得进行加减运算的两个操作数得指数统一。具体的，我们先通过比较器，得到指数的最大值，并将其作为对齐时的目标值target。
- 逐一计算指数与target的差值，修改指数值，并根据指数差值对尾数进行移位操作，保持其真实值不变，值得注意的是，位数的位移量不能超过Posit配置的ALIGN，以保证运算时尾数精度不丢失。
- 对阶完成后，便可根据OP进入相应运算。由于加减法运算逻辑相似，故我们在这里一并介绍，首先我们需检查两个操作数的符号位，以确定其正负性。其次，完成对齐化的两个操作数指数相同，故加减法的指数运算结果为对齐操作时的指数target，此时仅需让尾数进行加法/减法，并记录下相应的进位/借位。最后，根据进位/借位的值和操作数符号位计算出最终符号，至此，PIR的符号，指数值和尾数值均计算完成。
#### 乘法：
- 向量乘法模块是PVU最核心的部件之一，这里我们将重点介绍该模块的实现逻辑。对于乘法，我们不需要像加法减法一样先对操作数进行对齐化处理，乘法模块可以直接接入解码后的PIR向量。首先，其符号位的计算是非常简单的，将两个操作数进行异或运算即可得到最终符号位。
- 其次，我们将计算其尾数部分，这也是本模块最复杂的一个部分，为了更好的利用硬件并行性，更快的准确计算出尾数积，我们采用基4的Booth乘算法进行设计，图4展示了我们的设计逻辑，该算法通过将乘数分解为基4的编码形式，有效地减少了乘法运算所需的加法次数，特别是在处理大规模数据时，展现出较传统乘法算法更高的速度和更低的能耗，从而在硬件实现中提高了乘法效率。
- 具体的，我们先将乘数进行补0，使其符号Booth编码格式要求后对齐进行基4的Booth编码操作，结果存储至向量codes中。然后，我们将codes中的元素依次解码，根据基4Booth乘算法，对被乘数相应计算（如取反左移、乘0等），在计算完成后拼接移位为一个部分积。
- 现在，我们需要将部分积进行累加操作，为了提高累加速度，我们利用4：2压缩器和3：2压缩器编写了累加树单元（CSA），通过分治结构和递归方式，减少了进位传播的延迟，提高了加法的整体性能，从而高效地进行大规模累加操作。我们将部分积输入至CSA，即可得到累加和和进位，至此，基4Booth乘算法的实现就全部完成了。
- 最后，我们累加和和进位进行最后一起求和，即可完成尾数乘法的计算。对于指数计算，则简单很多，仅需将两个尾数进行求和，值得注意的是，求和后可能出现指数和溢出情况，故我们设定了最大指数来规避。
#### 除法：
- 浮点数除法的难点在于尾数除法的处理，对于其符号和指数，前者与乘法处理相同，通过异或计算得出，后者可以通过整数减法计算。在尾数除法部分，如（4）所示，我们将除法操作转换为乘法操作，再复用基4Booth乘法器进行乘法。
- 此时，如何将整数转换为相应的倒数便是我们关心的一个问题，针对该问题，我们采用牛顿迭代法来计算倒数，其迭代公式如（5）所示，`Xn`是当前倒数的近似值，`num`是输入的整数，通过多次迭代，`Xn`会收敛到`1/num`的近似值。迭代次数越多，精度越高但时延也越大，在PVU中我们将迭代次数设置为3。
- 我们将基4Booth乘法器输出的结果和进位再次取和，并进行移位操作，使其缩回到定点格式位宽。
#### 点积：
- 在深度学习中，点积运算的频率非常高，因此在PVU中支持专用的点积运算模块是非常有必要的。如（6）所示，我们将点积的计算过程分解为两部分，上半部分是向量乘法操作，并将结果保存至中间向量中，后半部分是累加操作，将中间向量的各个元素进行累加，得到最终得点积结果。
- 首先，我们将复用已有的向量乘法模块，其结果用中间变量存储。在进行累加之前，我们需要将中间变量内的所有元素进行对齐化处理，由于加法减法模块中，其对齐化操作是两个操作数为一组对齐，而点积运算的对齐化需要将中间向量内的所有元素统一对齐，故我们编写了适配点积运算的对齐化模块，其内部实现逻辑与加减法相同。
- 对阶完成后，我们根据符号位将所有尾数转换为补码格式，并复用CSA进行累加操作，此时我们将CSA视作一个Quire寄存器，由于其运算时采用更大的位宽，并在所有计算完成后进行一次舍入操作，从而大幅提升了点积运算的精度。
#### 标准化：
- 正如前文所述，Posit尾数部分有隐藏位，在所有计算完成到Posit编码之前，我们需要对PIR的所有尾数进行标准化操作。我们将实际尾数的最高位视为尾数隐藏位，通过标准化操作保证该位恒为1。
- 具体的，首先我们调用LZC模块，计算尾数的前导0个数。然后，我们用前导0个数和配置的小数点位置计算出指数的调整量，并通过桶形移位器对指数进行为一，使得小数点前一位的值为1。
- 最后，我们保存尾数位宽+1位，低位执行RNE舍入，并逐个调整PIR的指数值。值得注意的是，点积运算的运算输出是标量，而其他运算的输出是向量，故标准化模块有标量版本和向量版本两种，但内部逻辑相同。
#### 编码：
- 现在，所有的计算工作都完成了，我们需要将PIR的各个部分编码成规定的Posit格式，事实上，编码是解码的逆过程，我们可以用与解码相反的过程进行处理。难点在于Regime部分的提取，Regime的动态位宽属性使得其在计算后的Regime部分位宽未知，因此我们先提取一直位宽的Exponent部分，再提取Regime部分。在Regime的数值计算部分，为了保持其反转位的特性，我们先将Regime数值初始化为1（00...01），再根据其符号决定是否反转，并通过上述公式（1）反向计算出Regime位宽，从而完成Regime部分编码。
- 最后，我们将尾数进行RNE舍入，将三部分拼接转换成补码表示，即可完成Posit编码。注意，由于点积运算的结果是标量，因此我们额外编写了标量编码单元，内部逻辑与向量编码单元相同。

### ISA设计：

- funct6 --> inst[31:26]
- vm ------> inst[25]
- vs2 ------> inst[24:20]
- vs1 ------> inst[19:15]
- funct3 --> inst[14:12]
- vd ------> inst[11:7]
- opfvv -->  inst[6:0]
#### 加法：
```
vpositadd vd, vs1, vs2, vm
001101 1 vs2 vs1 000 vd 1010111  
```
#### 减法：
```
vpositsub vd, vs1, vs2, vm
001101 1 vs2 vs1 001 vd 1010111 0  
```
#### 乘法：
```
vpositmul vd, vs1, vs2, vm
001101 1 vs2 vs1 010 vd 1010111     
```
#### 除法：
```
vpositdiv vd, vs1, vs2, vm
001101 1 vs2 vs1 011 vd 1010111   
```
#### 点积：
```
vpositdot vd, vs1, vs2, vm
001101 1 vs2 vs1 100 vd 1010111   
```

#### 注：
- `vd`: 目标向量寄存器，存储运算结果。
- `vs1`, `vs2`: 源向量寄存器。
- `vm`: inst[25]，为0时则启用掩码向量，简化处理这里为1

---
### 设计问题：
- 除法部分准确率有点低，需要修改

---
### 测试方案：

#### Verilator
2. 通过Pytorch提取Resnet的首个卷积层的激活、权重，为了更贴合实际，我对其进行了量化处理
3. 通过SoftPosit库 将量化后的激活、权重数据批量转换为 Posit格式，其中激活数据和权重数据各4000条
4. 对五大运算进行依次测试，验证其计算正确度
5. 通过激励文件，送入PVU进行计算，对比结果得出点积运算正确率

#### Vavido
6. 仿真模拟，得到PPA等成本信息 --> 最好是有各个模块的硬件消耗
	1. Area
	2. Delay
	3. Power
	4. Performance
	5. Area Efficiency
	6. Energy Efficiency

#### yosys-sta
- 仿真拿到PVU的面积开销  --> 该项目无法仿真二维数组，需要综合时展开，有error

#### TODO:
- 添加GEMM测试数据
- 增加测试数据量，各个运算的测试量调整至1w


---
#### 问题：

7. 如何体现其对于754的优势，后续是否需要添加double转float再进行量化的验证工作？
8.  对posit16、posit8是否需要测试？ --> Softposit库不支持posit<16,2> <8,2>

---
#### 图表：

- [x] PVU和其他hw的功能比较 --> table
- [x] Posit四个部分介绍 --> figure
- [x] posit-Regime部分计算规则（r、k、useed） --> figure
- [x] posit计算示例 --> figure
- [x] Posit向量划分（复用专利1）--> figure
- [x] 基于Deep PeNSieve比较一下FP64和P32在同一个CNN上**训练**的损失和准确率 --> 无法复现就用Table 2的数据画直方图来对比推理的准确度
- [x] RVV扩展指令 --> table
- [ ] PVU数据流主图 --> figure
- [x] 基4Booth乘法器示例 --> figure
- [ ] 点积示例图 --> figure
- [x] PAU挂载至运算单元图  --> figurer --> 类似PPU-Light的前端
- [x] PVU与其他HW的异同 --> table
- [x] vpmul vv内联汇编 --> Listing
- [x] 卷积算法示例 --> Listing


---
### Listing
```Listing1
postlet vmul(long* a, long* b, long* result, int len) {
    register long* p1 asm("v0") = a;  // 向量 a 的指针
    register long* p2 asm("v1") = b;  // 向量 b 的指针
    register long* res asm("v2") = result;  // 存放结果的向量指针
    register int length asm("v3") = len;  // 向量长度
__asm__(
    ".set vlen, 4\n"  // 设置每次操作的向量元素数（假设为 4）
    ".set vli t0, %0, e32, m4\n"  // 设置向量长度和元素大小，e32表示每个元素32位，m4表示每次操作4个元素
    ".set op, 0x57\n"                // 定义操作码 1010111
    ".set opf1, 0x2\n"               // 定义功能码 010
    ".set opf2, 0x0d\n"              // 定义功能码 001101
    ".byte op | ((r%[vd] & 1) << 7), "   // vd 寄存器的最低位，移至指令的最高位
    "((r%[vs2] & 0xF) << 4) | ((r%[vs1] >> 4) & 0xF), "  // vs2 和 vs1 寄存器，低高 4 位合并
    "((r%[vs1] >> 8) & 0x1) | (opf1 << 1), " // vs1 寄存器的高位 + 功能码 010
    "(op << 1)\n"                  // 操作码1010111，左移 1 位
    : [vd] "=r"(vd)                  // 输出：目标寄存器
    : "r"(vs1), "r"(vs2), "[vd]"(vd) // 输入：源寄存器 vs1, vs2 和目标寄存器 vd
);
    return 0;
}
```


```Listing2
void conv4x4_vectorized(posit_t *a,  
    posit_t *f,  
    posit_t *c,  
    int n) {  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            posit_t sum = 0;  
            
            // 将卷积核f按行向量化，适用于一次加载多个元素
            for (int k = 0; k < 4; k++) {  
                for (int l = 0; l < 4; l++) {  
                    // 将当前行和列的数据加载到向量中
                    vect_t input_row = load_vector(&a[(i + k) * n + j], 4);  // 加载当前输入行
                    vect_t filter_row = load_vector(&f[k * 4 + l], 4); // 加载卷积核的当前列

                    // 使用 pmulvv 一次性计算行和列的乘积
                    vect_t result = pmulvv(input_row, filter_row); 

                    // 将结果累加到总和
                    sum = padd(sum, sum_vector(result)); // 假设 sum_vector 是将向量中的所有元素累加的函数
                }  
            }  
            c[i * n + j] = sum;  
        }  
    }  
}

```

___
### Paper-Word：面向低功耗平台的Posit数制向量运算单元设计与实现

#### Abstract：
在边缘计算、人工智能、深度学习和大数据处理等领域的快速发展背景下，传统的IEEE 754浮点数体系面临精度和效率的瓶颈，尤其在某些特定应用场景中暴露出高能耗和精度损失等问题。为了解决这些挑战，Posit数制凭借其自适应精度分布、更广泛的动态范围以及较低的硬件资源消耗，逐渐成为研究的热点，尤其在资源受限的边缘计算环境中展现出显著的优势。然而，尽管Posit数制在理论上具有诸多优势，现有研究仍主要集中在标量计算模式上，导致在大规模并行数据处理时出现性能瓶颈。本文提出了一种基于Chisel语言设计的Posit向量运算单元（PVU），据我们所知，这是首个支持向量运算的Posit硬件，该单元通过并行处理多个数据集，支持加法、减法、乘法、除法和点积等基本运算，突破了传统标量设计的局限。结合定制化的RISC-V指令扩展，本研究实现了更高的计算性能和能效比。实验结果表明，Posit数制在精度、速度和能效方面均优于IEEE 754浮点数制，展示了其在多种应用场景中的潜在优势。本文的贡献包括高效的向量运算单元实现、参数化和模块化的硬件设计、自定义RISC-V指令支持以及Posit数制的实际应用验证，为下一代浮点数运算在边缘计算中的应用提供了创新性解决方案。
#### 1. introduction：
如今。随着人工智能物联网（AIOT）的不断火热，边缘计算对数值计算精度与运算效率的要求不断提升。传统的IEEE 754浮点数体系虽然在多数场景中表现稳定，但其固定的精度分配和舍入机制在某些特殊应用中逐渐暴露出灵活性不足、能耗较高以及精度损失严重等问题。为此，在2017年由John L. Gustafson提出的posit数制因其自适应精度分布、更宽的动态范围和较低的硬件资源消耗等优势，逐渐成为学术界和工业界研究的热点之一。

然而，针对Posit浮点运算硬件的研究较少，且大多采用逐一处理数据的方式，即标量计算模式，虽然设计相对简单、实现较为成熟，但在面对大规模并行数据处理需求时容易形成性能瓶颈。相比之下，向量计算单元通过同时对多个数据元素进行并行运算，显著提高了数据吞吐量和运算效率。在信号处理、图像处理、科学计算和机器学习等领域，向量计算单元展现出了更高的能效比和更低的功耗，成为解决复杂计算任务的重要突破口。

RISC-V指令集架构（ISA）是一个开放、可扩展的架构，旨在满足从嵌入式系统到高性能计算的多种应用需求。RISC-V以其简单、高效、模块化和灵活性强等特点脱颖而出。其开放性使得任何人都可以免费使用并进行扩展，这带来了相对于X86、ARM的巨大优势。RISC-V的V扩展（RVV）是为提升处理器在数据并行任务中的性能而设计的扩展，通过对向量操作的支持，使得处理器能够在一个指令周期内对多个数据元素进行并行计算，极大地提高了科学计算、图像处理、机器学习等领域中的数据处理效率。

Chisel作为一种基于Scala的现代硬件构建语言，凭借其高度抽象、模块化设计和灵活的硬件描述能力，为快速原型开发和验证硬件架构提供了理想的平台。利用Chisel进行硬件设计，不仅可以显著提高开发效率，而且有助于实现更高层次的设计复用和参数化优化。

基于上述原因，本研究旨在设计并实现一款基于Chisel语言的posit向量运算单元(PVU)，该单元支持加法、减法、乘法、除法以及向量点积等运算，进一步利用定制化的RISC-V指令扩展，打破传统标量设计的局限，为下一代高性能、低功耗计算平台提供了全新的解决方案。具体而言，本工作主要贡献如下：
- 向量运算单元的高效实现：本研究设计的posit向量运算单元能够同时对多组数据进行并行处理，支持向量加法、向量减法、向量乘法、向量除法、向量点积五大运算，突破了传统标量计算模式在大规模数据处理中的性能瓶颈。
- 参数化模块化的硬件设计：利用Chisel语言的高度抽象和参数化能力，本文构建了一个模块化、可扩展的硬件架构。将Posit位宽、es位宽和尾数对齐位宽进行了参数化设计，便于在不同应用场景下进行灵活配置和扩展。这种设计方法大大降低了开发成本，并为后续系统级集成和功能扩展提供了坚实基础。
- 自定义RISC-V指令支持：为了充分发挥posit向量运算单元的性能优势，本研究在RISC-V向量扩展（RVV）的基础上，定制了一系列Posit向量运算指令。这些自定义指令能够直接调用向量运算单元进行数据处理，优化了数据传输和指令解码流程，显著提升了硬件与软件之间的协同效率，从而实现了更高的系统整体运算性能和能效比。
- Posit数制应用验证：通过实验与仿真结果证明，该向量运算单元在精度、速度以及能耗等方面均具备较强的竞争力，并且，在大多数应用场景下，Posit数制比IEEE 754浮点数制拥有更高的计算精度，并且在降低功耗和资源占用方面展现出明显优势，从而验证了其在高性能、低功耗计算平台中的应用潜力。
本文余下部分的组织结构如下：第二部分介绍了Posit数制系统和RISC-V指令集。第三部分对比了本研究和其他现有研究的异同。第四部分详细阐述了PVU的逻辑实现，重点介绍了乘法模块。第五部分描述了自定义的指令集架构扩展和编译支持。第六部分描述了硬件成本和运算精度。最后一部分进行了总结。

#### 2. Blackground：
Posit数制通过引入灵活的编码机制来提高数值表示的效率和精度。如图一所示，它的基本组成部分包括Sign, Regime, Exponent和Fraction，每个部分都有独特的功能和结构，使得Posit数制在精度和范围之间达到了平衡。以下是对各个组成部分的详细介绍：
- 符号位S是Posit数制的第一个比特，负责确定posit的正负。若 s = 0，则Posit为正数；若 s = 1，则Posit为负数。
- Regime file R是Posit数制的关键创新之一，采用了可变长度的编码方式来表示指数的范围，决定了Posit的尺度。Regime由连续的1和0组成，由反转位R0控制其长度，当Posit较大时，Regime将包含更多的1，反之，Regime将包含更多的0。Regime file的长度为k，值r由下述公式计算：（ r 的计算公式）
- Regime value是一个特殊常数Useed的比例因子，Useed的值与Posit的配置有关，具体而言，取决于Posit中Exponent部分的位宽ES，其计算公式如下：（Useed的计算公式）
- Exponent file E是Posit中显示配置的部分。由于Regime位域是可变长度的，因此Exponent位可能在Posit的LSB之后，此时Exponent的值为0。
- Fraction file F是Posit数制的最后一部分，类似于IEEE 754中的尾数部分。但是，在Fraction前面总是有一个隐含数m，当Posit是正数时，m = 1，当Posit是负数时，m = 2。这意味着在实际存储时，尾数部分通常只存储后续的二进制位，而第一个位不需要显式存储。例如，数值1.101会在尾部部分存储101，而隐式地理解为1.101。

综合上述4个部分，虽然在Posit标准2022中，ES固定为2，但为了更好的评估，PVU将ES进行了参数化处理，从而得到了两种计算公式，当ES不为2时，Posit value p的计算公式如（3）所示，当ES为2时，Posit value p的计算公式如（4）所示。

特殊的，若Posit file全为0，则Posit value 为0，若Posit file全为1，则Posit value为Not a Real(NaR)，即umbrella value for anything not mathematically definable as a unique real number。

举个例子，如图2所示，0111110111101010是Posit<16,2>的二进制编码，Posit的符号位为0，表示是正数，故s = 0。Regime file为111110，有5个连续的1和一个0组成，其长度k = 6，故r = 5 - 1 =4。Exponent file为11，故e = 3，Useed值为16。最后，Fraction file为1101010，因此f = 106/2^7 = 106/128 = 0.828125。因此，根据公式(3)，可以计算出p = (1+0.828125) ×
2^(1-2×0)×(4×4+2+0) = 239616
#### 3. Related work：
在RISC-V架构方面，欧洲的PULP平台探索了RISC-V架构的低功耗应用[1]，尤其在物联网设备和嵌入式系统中表现出色。RISC-V的优势在于其指令集简洁且高度模块化，能够根据具体需求扩展，尤其适合在边缘设备上实现定制化设计，如专用于人工智能推理任务的加速器[2]。

在Posit浮点运算软件方面，SoftPosit是由Berkeley Lab开发的一个开源项目[3]，提供了Posit浮点数的基本运算支持，并展示了Posit在高精度数值计算中的应用潜力。Julia的Posit库[4]已经实现了对Posit浮点数的支持，并被广泛应用于数值计算和深度学习推理任务中。研究表明，在相同位宽下，Posit浮点数的计算精度和效率显著优于IEEE 754浮点数[5]，尤其是在低功耗高效计算场景中，Posit的应用前景广阔。其他领域也有许多应用Posit格式的研究，包括图像处理[6]，天气预报[7]等。

法国里昂大学的Florent de Dinechin团队对Posit浮点数的适用情景进行了探索[8]，发现其非常适用于机器学习领域，并证明了Posit浮点数与IEEE 754浮点数之间的精确转换。美国罗切斯特理工学院的Zachariah Carmichael团队成功将深度神经网络（DNN）在低于8位的Posit浮点数上运行[9]，并获得更好的精度和延迟。意大利比萨大学的Marco Cococcioni团队通过软件仿真，探索了Posit浮点机制向量化计算的可能性，并将其集成在DNN模型训练推理过程中[10]。马德里康普顿斯大学的PeNSieve项目提出了一种基于Posit的深度神经网络模型训练和推理框架，并通过融合运算进行了低比特量化处理[11]。

相较于Posit数制软件仿真和应用的百花齐放，其硬件计算单元的研究则较为匮乏。马德里康普顿斯大学的PERCIVAL[12]和BIG-PERCIVAL项目[13]聚焦于小规模和大规模Posit运算的实现，旨在加速深度学习推理和科学计算。德国亚琛工业大学的PERC项目[14]则研究如何将Posit运算集成到高性能处理器中，而印度马德拉斯理工学院的PERI项目[15]侧重于优化物联网设备的高精度计算和能效表现。新加坡国立大学的POSAR项目[16]为智能终端设备和低功耗应用设计了轻量化的Posit处理单元，推动了RISC-V架构在边缘计算中的广泛应用。意大利比萨大学的PPU-light项目[17]可以将Posit转换为其他数制。南京大学的李琼团队设计了一个可配置的开源Posit点积单元PDPU，能够在深度学习应用中执行有效的点积运算，并支持混合精度[18]。如表1所示，我们总结了其中一些工作，并与本工作进行了比较。
#### 4. Posit Vector Unit Arithmentic Operations And Implementation：
 PVU的体系结构如图3所示，PVU接受两个Posit向量操作数（PV1、PV2）和一个操作模式数（PV），输出相应的Posit运算结果。我们对PVU进行了参数化设计，Posit位宽、Exponent位宽和对齐宽度。
##### A. Decode
Posit操作数进入PVU后，先对其进行向量解码。首先，我们提取符号位，若符号位为1，表示Posit是负数，若符号位为0，表示正数，并提取后的Posit二进制修改为补码表示。

其次，我们对Regime的位宽和值进行计算，通过前导0计数模块（LZC）来计算Regime部分的值，先提取Regime部分的最高位，若为0，表示Regime类如（00....01），此时直接送入LZC模块进行计数，若为1，则Regime类如（11....10），则先将所有二进制取反，再送入LZC模块进行计数。LZC模块将返回前导0的个数以及是否全0，前者可以结合Regime最高位的值代入公式（1）计算r值，由于Regime位域的长度是动态的，故有Regime位域占满整个Posit位宽的情况，此时可以通过后者进行判断。

Regime位域的长度k可以由前导0的个数加1得到，我们将Posit通过桶形移位器左移k+1位，即可从最高位提取Exponent位域，其宽度ES由Posit配置（通常为2）获取，同时，若ES不为2，我们可以将ES值代入公式（2），得到Useed的值，若ES为2，我们则不用计算Useed。为了便于后续计算，我们将Regime和Exponent结合，计算统一的以二为底的指数值exp。具体而言，我们将r左移ES位，再和Exponent位域的值e相加，即可得到exp的值。

最后，我们通过桶形移位器左移ES位，即可得到尾数部分Fraction。注意，在Posit数制中，尾数部分是有隐藏位的m的，我们将其与提取到的Fraction拼接，便获得了运算时的真实尾数值。至此，我们成功将Posit解码，得到了Posit浮点运算中间表示（PIR），包括表示Posit正负的sign，以二为底的指数值exp和实际尾数frc。

##### B. Add/Sub
解码完成后，便进入实际运算阶段，注意，所有的运算都是基于PIR进行的。在进行加减运算前，需要将操作数进行对齐化处理，使得进行加减运算的两个操作数得指数统一。具体的，我们先通过比较器，得到指数的最大值，并将其作为对齐时的目标值target。我们逐一计算指数与target的差值，修改指数值，并根据指数差值对尾数进行移位操作，保持其真实值不变，值得注意的是，位数的位移量不能超过Posit配置的ALIGN，以保证运算时尾数精度不丢失。

在对阶完成后，根据OP进入相应运算。由于加减法运算逻辑相似，故我们在这里一并介绍，首先我们需检查两个操作数的符号位，以确定其正负性。其次，完成对齐化的两个操作数指数相同，故加减法的指数运算结果为对齐操作时的指数target，此时仅需让尾数进行加法/减法，并记录下相应的进位/借位。最后，根据进位/借位的值和操作数符号位计算出最终符号，至此，PIR的符号，指数值和尾数值均计算完成。

##### C. Mul
向量乘法模块是PVU最核心的部件之一，这里我们将重点介绍该模块的实现逻辑。对于乘法，我们不需要像加法减法先对操作数进行对齐化处理，乘法模块可以直接接入解码后的PIR向量。首先，其符号位的计算是非常简单的，将两个操作数进行异或运算即可得到最终符号位。

其次，我们将计算其尾数部分，这也是本模块最复杂的一个部分，为了更好的利用硬件并行性，更快的准确计算出尾数积，我们采用基4的Booth乘算法进行设计，图4展示了我们的设计逻辑，该算法通过将乘数分解为基4的编码形式，有效地减少了乘法运算所需的加法次数，特别是在处理大规模数据时，展现出较传统乘法算法更高的速度和更低的能耗，从而在硬件实现中提高了乘法效率。具体的，我们先将乘数进行补0，使其符号Booth编码格式要求后对齐进行基4的Booth编码操作，结果存储至向量codes中。然后，我们将codes中的元素依次解码，根据基4Booth乘算法，对被乘数相应计算（如取反左移、乘0等），在计算完成后拼接移位为一个部分积。

现在，我们需要将部分积进行累加操作，为了提高累加速度，我们利用4：2压缩器和3：2压缩器编写了累加树单元（CSA），通过分治结构和递归方式，减少了进位传播的延迟，提高了加法的整体性能，从而高效地进行大规模累加操作。我们将部分积输入至CSA，即可得到累加和和进位，至此，基4Booth乘算法的实现就全部完成了。

最后，我们累加和和进位进行最后一起求和，即可完成尾数乘法的计算。对于指数计算，则简单很多，仅需将两个尾数进行求和，值得注意的是，求和后可能出现指数和溢出情况，故我们设定了最大指数来规避。

##### D. Div
浮点数向量除法的难点在于尾数除法的处理，对于其符号和指数，前者与乘法处理相同，通过异或计算得出，后者可以通过整数减法计算。

在尾数除法部分，如（4）所示，我们将除法操作转换为乘法操作，再复用基4Booth乘法器进行乘法。此时，如何将整数转换为相应的倒数便是我们关心的一个问题，针对该问题，我们采用牛顿迭代法来计算倒数，其迭代公式如（5）所示，`Xn`是当前倒数的近似值，`num`是输入的整数，通过多次迭代，`Xn`会收敛到`1/num`的近似值。迭代次数越多，精度越高但时延也越大，在PVU中我们将迭代次数设置为3。

最后，我们将基4Booth乘法器输出的结果和进位再次取和，并进行移位操作，使其缩回到定点格式位宽。

##### E. Dot Product
在深度学习中，点积运算的频率非常高，因此在PVU中支持专用的点积运算模块是非常有必要的。如（6）所示，我们将点积的计算过程分解为两部分，上半部分是向量乘法操作，并将结果保存至中间向量中，后半部分是累加操作，将中间向量的各个元素进行累加，得到最终得点积结果。

首先，我们将复用已有的向量乘法模块，其结果用中间变量存储。在进行累加之前，我们需要将中间变量内的所有元素进行对齐化处理，由于加法减法模块中，其对齐化操作是两个操作数为一组对齐，而点积运算的对齐化需要将中间向量内的所有元素统一对齐，故我们编写了适配点积运算的对齐化模块，其内部实现逻辑与加减法相同。

对阶完成后，我们根据符号位将所有尾数转换为补码格式，并复用CSA进行累加操作，此时我们将CSA视作一个Quire寄存器，由于其运算时采用更大的位宽，并在所有计算完成后进行一次舍入操作，从而大幅提升了点积运算的精度。

##### F. Standardization
正如前文所述，Posit尾数部分有隐藏位，在所有计算完成到Posit编码之前，我们需要对PIR的所有尾数进行标准化操作。我们将实际尾数的最高位视为尾数隐藏位，通过标准化操作保证该位恒为1。

具体的，首先我们调用LZC模块，计算尾数的前导0个数。然后，我们用前导0个数和配置的小数点位置计算出指数的调整量，并通过桶形移位器对指数进行为一，使得小数点前一位的值为1。

最后，我们保存尾数位宽+1位，低位执行RNE舍入，并逐个调整PIR的指数值。值得注意的是，点积运算的运算输出是标量，而其他运算的输出是向量，故标准化模块有标量版本和向量版本两种，但内部逻辑相同。

##### G. Encode
在计算工作完成后，我们需要将PIR的各个部分编码成规定的Posit格式，事实上，编码是解码的逆过程，我们可以用与解码相反的过程进行处理。难点在于Regime部分的提取，Regime的动态位宽属性使得其在计算后的Regime部分位宽未知，因此我们先提取一直位宽的Exponent部分，再提取Regime部分。在Regime的数值计算部分，为了保持其反转位的特性，我们先将Regime数值初始化为1（00...01），再根据其符号决定是否反转，并通过上述公式（1）反向计算出Regime位宽，从而完成Regime部分编码。

最后，我们将尾数进行RNE舍入，将三部分拼接转换成补码表示，即可完成Posit编码。注意，由于点积运算的结果是标量，因此我们额外编写了标量编码单元，内部逻辑与向量编码单元相同。
#### 5. RISC-V ISA Extension And Compiler suppopt
在‌指令集体系结构层面，我们通过RISC-V的V扩展，为PVU设计了运算所必须的向量指令。如表2所示，我们为ADD、SUB、MUL、DIV、DOT五种运算自定义了相应指令，由于Posit数制是为了取代传统IEEE 754浮点类型的，因此自定义的指令格式遵守OPFVV的指令格式，我们利用自定义编码空间001101代替原有func6字段来表示指令为Posit数制运算，并通过fun3字段区分Posit数制的不用操作。向量掩码方面，我们将Vm简化为1，表示使用向量掩码。

为了支持自定义指令能够被硬件所使用，我们通过内联汇编编写了一组函数，来将高级的C/C++函数调用映射至底层机器码。此时，我们不需要修改任何RISC-V编译器，即可在编译时为Posit指令生成正确的数据流。

我们在Listing1中展示了一个向量乘法内联汇编示例，这里我们假设每个元素是32位的且每次操作处理4个元素。寄存器关键字让编译器将输入向量和输出向量放到指定的寄存器中，并设定向量长度。在内联汇编中，第9、10、11行是我们为特定的Posit操作设定的OP操作码、funct3字段和funct6字段，也是与其他指令、操作区分的关键部分。

卷积是深度学习中的一个常用操作，我们再Listing2中展示了利用PVU进行4×4卷积的算法示例。我们将卷积核按行向量化，将行和列一次性加载至计算向量内，通过向量乘法一次性计算出结果，并保存至结果向量中，最后经过向量加法将结果相加，完成卷积计算。
#### 6. Experimental Results
为了评估PVU各个运算模块的运算正确性，我们将Posit划分为表3所示向量，并基于pytorch将Resnet-18[19]的首个卷积层的量化激活值和权重提取出来，并保存为FP64格式。由于PVU是Posit数制运算，我们通过SoftPosit库，设计了将提取到的数据批量转换为Posit32并进行加法，减法，乘法，除法。点积结果的计算框架，得到了测试所需的输入和输出。我们编写了Kconfig框架并进行了测试，PVU在向量加法、向量减法、向量乘法、向量点积运算中正确率达到了100%，在向量除法的正确率则为95.84%，这是倒数转换时带来的误差导致的。

此外，我们通过Deep PeNSieve[20]测试了Posit数制在DNN中与FP32的准确度差异，如图6和图7所示，我们在TOP-1，TOP-5层次上对MNIST，Fashion-MNIST，SVHN，CIFAR-10进行的测试，可以发现Posit16在减少一半内存占比的情况下拥有比FP32更高的准确度。

我们也通过Vavido对PVU进行了FPGA测试，如表4所示，我们统计了PVU的整体硬件消耗和乘法、除法、点积运算部件的硬件消耗，因为这三个运算资源占用率最高，测试结果显示PVU的整体开销是可接受的。
#### 7. Conclusion
在本文中，我们提出了一个开源的Posit向量计算单元PVU，能够在低功耗平台下的深度学习应用中进行有效的加法，减法，乘法，除法，点积运算。PVU可以与RISC-V紧密集成起来，并通过内联汇编将高级语言映射至机器码。此外，开发了一个PVU的可配置生成器，以支持各类低功耗场景下的不同Posit数制。

---
[1] Pullini A, Rossi D, Loi I, Tagliavini G, Benini L. Mr.Wolf: An Energy-Precision Scalable Parallel Ultra Low Power SoC for IoT Edge Processing[J]. IEEE Journal of Solid-State Circuits, 2019, 54(7): 1970-1981. DOI:10.1109/JSSC.2019.2912307.
[2] Wang S, Wang X, Xu Z, Chen B, Feng C, Wang Q, Ye T T. Optimizing CNN Computation Using RISC-V Custom Instruction Sets for Edge Platforms[J]. IEEE Transactions on Computers, 2024, 73(5): 1371-1382.
[3] C. Leong, “Softposit,” https://gitlab.com/cerlane/SoftPosit, 2018.
[4] Klöwer M, Düben PD, Palmer TN. SoftPosit.jl: A posit arithmetic emulator for Julia[EB/OL]. GitHub repository, 2020.
[5] S. D. Ciocirlan, D. Loghin, L. Ramapantulu, N. Tapus, and Y. M. Teo, “The Accuracy and Efficiency ofPosit Arithmetic,” 2021, arXiv:2109.08225.
[6]N. Shah, L. I. G. Olascoaga, S. Zhao, W. Meert, and M. Verhelst, “DPU:
DAG processing unit for irregular graphs with precision-scalable posit
arithmetic in 28 nm,” IEEE J. Solid State Circuits (JSSC), vol. 57, no. 8,
pp. 2586–2596, 2022.
[7]N. Ho, D. T. Nguyen, H. D. Silva, J. L. Gustafson, W. Wong, and I. J.
Chang, “Posit arithmetic for the training and deployment of generative
adversarial networks,” in 2021 Design, Automation & Test in Europe
Conference & Exhibition (DATE). IEEE, 2021, pp. 1350–1355.
[8] de Dinechin, F., Forget, L., Muller, J.-M., & Uguen, Y. Posits: The Good, the Bad and the Ugly. Univ Lyon, INSA Lyon, Inria, CITI, Lyon, France.
[9] Carmichael, Z., Langroudi, H. F., Khazanov, C., Lillie, J., Gustafson, J. L., & Kudithipudi, D. Deep Positron: A Deep Neural Network Using the Posit Number System. Neuromorphic AI Lab, Rochester Institute of Technology, NY, USA, National University of Singapore, Singapore.
[10] Cococcioni, M., Rossi, F., Ruffaldi, E., & Saponara, S. Fast Approximations of Activation Functions in Deep Neural Networks when using Posit Arithmetic. _Department of Information Engineering, Università di Pisa_, Medical Microinstruments (MMI) S.p.A., 2020. Published: March 10, 2020.
[11] Murillo, R., Del Barrio, A. A., & Botella, G. (2020). Deep PeNSieve: A deep learning framework based on the posit number system. _Digital Signal Processing_, 102, 102762.
[12] Mallas, D., Murillo, R., Del Barrio, A. A., Botella, G., Piñuel, L., & Prieto-Matias, M. PERCIVAL: Open-Source Posit RISC-V Core With Quire Capability[J]. IEEE Access, Vol. 10, No. 3, July-Sept. 2022.
[13] Mallasén, D., Del Barrio, A. A., & Prieto-Matias, M. Big-PERCIVAL: Exploring the Native Use of 64-Bit Posit Arithmetic in Scientific Computing[EB/OL]. arXiv preprint, 2023, May.
[14] M. V. Arunkumar, S. G. Bhairathi, and H. G. Hayatnagarkar, “PERC: Posit Enhanced Rocket Chip,” in 4th Workshop on Computer Architecture Research with RISC-V (CARRV’20), 2020, p. 8.
[15] S. Tiwari, N. Gala, C. Rebeiro, and V. Kamakoti, “PERI: A Configurable Posit Enabled RISC-V Core,” ACM Transactions on Architecture and Code Optimization, vol. 18, no. 3, pp. 1–26, Jun. 2021.
[16] S. D. Ciocirlan, D. Loghin, L. Ramapantulu, N. Tapus, and Y. M. Teo, “The Accuracy and Efficiency of Posit Arithmetic,” 2021, arXiv:2109.08225.
[17] M. Cococcioni, F. Rossi, E. Ruffaldi, and S. Saponara, “A Lightweight Posit Processing Unit for RISC-V Processors in Deep Neural Network Applications,” IEEE Transactions on Emerging Topics in Computing, no. 01, pp. 1–1, Oct. 2021.
[18] Li, Q., Fang, C., & Wang, Z. PDPU: An Open-Source Posit Dot-Product Unit for Deep Learning Applications. In _2023 IEEE International Symposium on Circuits and Systems (ISCAS)_, 2023. IEEE.
[19]K. He, X. Zhang, S. Ren, and J. Sun, “Deep residual learning for image
recognition,” in 2016 IEEE Conference on Computer Vision and Pattern
Recognition (CVPR), 2016, pp. 770–778.
[20]Murillo, Raul, Alberto A. Del Barrio, and Guillermo Botella. "Deep PeNSieve: A Deep Learning Framework Based on the Posit Number System." _Digital Signal Processing_ 102 (2020): 102762. doi:10.1016/j.dsp.2020.102762.


---
(1) r的计算公式
(2) useed的计算公式
(3) p的计算公式 -->ES 可配置版本
(4) p的计算公式 -->ES 固定为2版本
(5) 化除法为乘法
(6) 点积操作
fig1：Posit32数制格式
fig2：Posit<16,2>举例
fig3：PVU硬件设计主图
- 解码
- 五大运算
- 尾数对齐
- 规格化
- 编码
fig4： 基4Booth乘法器及CSA设计举例
fig5：Posit-FP32在TOP-1的准确度
fig6：Posit-FP32在TOP-5的准确度

table 1：本工作与相关Posit处理单元的异同
- 比较角度：Posit配置参数化、基础四则运算、点积/FMA运算、RISC-V集成、标量运算、向量运算、高级软件支持、自定义指令支持、开源
- 比较对象：BIG-PERCIVAL、PERC、PERI、POSAR、PPU-light、PDPU
table 2：RVV自定义指令
table 3：Posit各部分向量划分示例
table 4：硬件成本信息

Listing 1：内联汇编
Listing 2：卷积算法

---

### 会议：
- Euro-Par 2025
    - 摘要截止：2025-2-24
    - 投稿截止：2025-3-9