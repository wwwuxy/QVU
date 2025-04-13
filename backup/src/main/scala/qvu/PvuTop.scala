  //PVU TOP
  /* 支持一种操作类型 --> op控制
    0 --> Posit量化至Int8（QuantizeInt8），将PIR量化为Int8整数

   Float格式由float_mode控制:
   0 --> FP4  (1位符号, 1位指数, 2位尾数)
   1 --> FP8  (1位符号, 4位指数, 3位尾数)
   2 --> FP16 (1位符号, 5位指数, 10位尾数)
   3 --> FP32 (1位符号, 8位指数, 23位尾数)
   4 --> FP64 (1位符号, 11位指数, 52位尾数)
 */

 package pvu
 import chisel3._ 
 import chisel3.util._
 import scala.languageFeature.existentials
 import chisel3.stage._
 
 class PvuTop(
   val MAX_POSIT_WIDTH: Int, // 最大位宽参数，用于定义输出接口的位宽，支持不同精度之间的转换
   val MAX_VECTOR_SIZE: Int, // 最大向量大小
   val MAX_ALIGN_WIDTH: Int, // 最大对齐宽度
   val ES: Int,          // ES参数，用于定义输出接口的ES参数
   val FLOAT_MODE: Int = 3,   // 浮点数格式
   val INT_WIDTH: Int  = 32   // 整数位宽参数
 ) extends Module {
   // 添加参数限制
   private val LIMITED_VECTOR_SIZE = Math.min(MAX_VECTOR_SIZE, 16)  // 限制最大向量大小为16
   private val LIMITED_POSIT_WIDTH = Math.min(MAX_POSIT_WIDTH, 64) // 限制最大位宽为64
   private val LIMITED_ALIGN_WIDTH = Math.min(MAX_ALIGN_WIDTH, 62) // 限制最大对齐宽度为128

   // 根据FLOAT_MODE设置浮点数参数
   val (float_exp_width, float_frac_width) = FLOAT_MODE match {
     case 0 => (1, 2)   // FP4: 1位符号, 1位指数, 2位尾数
     case 1 => (4, 3)   // FP8: 1位符号, 4位指数, 3位尾数
     case 2 => (5, 10)  // FP16: 1位符号, 5位指数, 10位尾数
     case 3 => (8, 23)  // FP32: 1位符号, 8位指数, 23位尾数
     case 4 => (11, 52) // FP64: 1位符号, 11位指数, 52位尾数
     case _ => (8, 23)  // 默认为FP32
   }
   
   // 浮点数参数
   // 静态FLOAT_WIDTH用于IO定义
   val FLOAT_WIDTH: Int = 1 + 11 + 52  // 使用FP64的宽度作为最大宽度
   
   // 静态声明用于模块实例化 - 这些常量需要最先定义
   val SRC_ND_MAX: Int         = log2Ceil(LIMITED_POSIT_WIDTH - 1)
   val SRC_EXP_WIDTH_MAX: Int  = Math.min(SRC_ND_MAX + ES + 1, 32)
   val SRC_FRAC_WIDTH_MAX: Int = LIMITED_POSIT_WIDTH + 1
   val DST_EXP_WIDTH_MAX: Int  = SRC_EXP_WIDTH_MAX
   
   // 预先计算的常量宽度
   val DOUBLED_FRAC_WIDTH: Int = Math.min(2 * (SRC_FRAC_WIDTH_MAX + 1), 128)
   val DOT_PRODUCT_WIDTH: Int  = Math.min(DOUBLED_FRAC_WIDTH + log2Ceil(LIMITED_VECTOR_SIZE + 1) + 2, 256)
   
   // 动态计算当前使用的浮点数宽度
   def getCurrentFloatWidth(): UInt = {
     // 根据float_mode计算当前使用的浮点数宽度
     MuxLookup(io.float_mode, 32.U)(Seq(
       0.U -> 4.U,   // FP4: 1位符号 + 1位指数 + 2位尾数 = 4位
       1.U -> 8.U,   // FP8: 1位符号 + 4位指数 + 3位尾数 = 8位
       2.U -> 16.U,  // FP16: 1位符号 + 5位指数 + 10位尾数 = 16位
       3.U -> 32.U,  // FP32: 1位符号 + 8位指数 + 23位尾数 = 32位
       4.U -> 64.U   // FP64: 1位符号 + 11位指数 + 52位尾数 = 64位
     ))
   }

   val io = IO(new Bundle {
     // 输入Posit向量
     val posit_i1 = Input(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))
     val posit_i2 = Input(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))
     val op       = Input(UInt(4.W))  // 操作码
     
     // 是否是posit数据的控制信号
     val Isposit  = Input(Bool())  // true表示输入是posit数，false表示输入是float数
     
     // 输出格式控制信号
     val Outposit = Input(Bool())  // 1表示输出posit，0表示输出float，默认为true
     
     // 为Float和Posit转换添加的接口
     val float_i     = Input(Vec(MAX_VECTOR_SIZE, UInt(FLOAT_WIDTH.W)))
     val float_i2    = Input(Vec(MAX_VECTOR_SIZE, UInt(FLOAT_WIDTH.W)))  // 添加第二个Float输入向量
     val float_mode  = Input(UInt(3.W))  // 浮点数格式选择: 0=FP4, 1=FP8, 2=FP16, 3=FP32, 4=FP64
     val float_posit = Input(Bool())     // 浮点数互转信号：1表示Float转Posit，0表示Posit转Float
     
     // 运行时配置参数
     val src_posit_width = Input(UInt(6.W))  // 源Posit位宽，值为0表示使用最大值
     val vector_size     = Input(UInt(3.W))  // 实际使用的向量大小，值为0表示使用最大值
     
     // 目标精度配置接口
     val dst_posit_width = Input(UInt(6.W))  // 目标Posit位宽，值为0表示与源相同
     
     val float_o     = Output(Vec(MAX_VECTOR_SIZE, UInt(FLOAT_WIDTH.W)))
     val float_dot_o = Output(UInt(FLOAT_WIDTH.W))               // 添加float点积输出
     val posit_o     = Output(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W))) // 使用最大位宽
     val posit_dot_o = Output(UInt(MAX_POSIT_WIDTH.W))           // 使用最大位宽
     val int_o       = Output(Vec(MAX_VECTOR_SIZE, SInt(INT_WIDTH.W)))  // 新增整数输出接口
 })

  // 添加decode模块实例
  val decode1 = Module(new PositDecode(LIMITED_POSIT_WIDTH, LIMITED_VECTOR_SIZE, ES))
  val decode2 = Module(new PositDecode(LIMITED_POSIT_WIDTH, LIMITED_VECTOR_SIZE, ES))

  // 添加float decode模块实例
  val floatDecode1 = Module(new FloatDecode(float_exp_width, float_frac_width, LIMITED_VECTOR_SIZE))
  val floatDecode2 = Module(new FloatDecode(float_exp_width, float_frac_width, LIMITED_VECTOR_SIZE))

  // 添加Wire定义 - 使用统一的中间结果存储
  val pir_sign  = Wire(Vec(LIMITED_VECTOR_SIZE, UInt(1.W)))
  val pir_exp   = Wire(Vec(LIMITED_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
  val pir_frac  = Wire(Vec(LIMITED_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
  val pir_sign2 = Wire(Vec(LIMITED_VECTOR_SIZE, UInt(1.W)))
  val pir_exp2  = Wire(Vec(LIMITED_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
  val pir_frac2 = Wire(Vec(LIMITED_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))

  // Float相关Wire定义 - 使用统一的存储
  val float_data = Wire(Vec(LIMITED_VECTOR_SIZE, new Bundle {
    val sign   = Bool()
    val exp    = SInt(float_exp_width.W)
    val frac   = UInt(float_frac_width.W)
    val isNaN  = Bool()
    val isInf  = Bool()
    val isZero = Bool()
  }))

  val float_data2 = Wire(Vec(LIMITED_VECTOR_SIZE, new Bundle {
    val sign   = Bool()
    val exp    = SInt(float_exp_width.W)
    val frac   = UInt(float_frac_width.W)
    val isNaN  = Bool()
    val isInf  = Bool()
    val isZero = Bool()
  }))

  // 在类的开始处添加输出端口的默认初始化
  io.float_o     := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(FLOAT_WIDTH.W)))
  io.float_dot_o := 0.U(FLOAT_WIDTH.W)
  io.posit_o     := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
  io.posit_dot_o := 0.U(MAX_POSIT_WIDTH.W)
  io.int_o       := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.S(INT_WIDTH.W)))

  // 初始化FloatDecode模块的输入
  floatDecode1.io.float := io.float_i
  floatDecode2.io.float := io.float_i2

  // 初始化所有Wire
  for(i <- 0 until LIMITED_VECTOR_SIZE) {
    pir_sign(i)  := 0.U
    pir_exp(i)   := 0.S
    pir_frac(i)  := 0.U
    pir_sign2(i) := 0.U
    pir_exp2(i)  := 0.S
    pir_frac2(i) := 0.U
    
    float_data(i).sign   := false.B
    float_data(i).exp    := 0.S
    float_data(i).frac   := 0.U
    float_data(i).isNaN  := false.B
    float_data(i).isInf  := false.B
    float_data(i).isZero := true.B
    
    float_data2(i).sign   := false.B
    float_data2(i).exp    := 0.S
    float_data2(i).frac   := 0.U
    float_data2(i).isNaN  := false.B
    float_data2(i).isInf  := false.B
    float_data2(i).isZero := true.B
  }
 
   // 计算实际使用的参数
   val ACTUAL_SRC_POSIT_WIDTH = Mux(io.src_posit_width === 0.U, MAX_POSIT_WIDTH.U, io.src_posit_width)
   val ACTUAL_VECTOR_SIZE     = Mux(io.vector_size === 0.U, MAX_VECTOR_SIZE.U, io.vector_size)
   val valid_vector_size      = ACTUAL_VECTOR_SIZE
   
   // 根据IO接口的参数计算实际使用的目标参数
   val ACTUAL_DST_POSIT_WIDTH = Mux(io.dst_posit_width === 0.U, ACTUAL_SRC_POSIT_WIDTH, io.dst_posit_width)
   
   // 计算实际使用的位宽参数 (运行时)
   val src_nd         = log2Ceil(MAX_POSIT_WIDTH)
   val src_exp_width  = src_nd.U + ES.U
   val src_frac_width = ACTUAL_SRC_POSIT_WIDTH - ES.U - 3.U
   val src_mul_width  = DOUBLED_FRAC_WIDTH.U
   val src_sum_width  = DOT_PRODUCT_WIDTH.U
   
   // 对于所有流程，添加valid_range检查
   val valid_range = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
   for (i <- 0 until MAX_VECTOR_SIZE) {
     valid_range(i) := (i.U < valid_vector_size)
   }
   
   // 解码逻辑需要确保只处理有效范围内的输入数据
   when(io.Isposit) {
     decode1.io.posit      := io.posit_i1
     decode2.io.posit      := io.posit_i2
     floatDecode1.io.float := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(FLOAT_WIDTH.W)))
     floatDecode2.io.float := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(FLOAT_WIDTH.W)))
     // 只拷贝有效范围内的结果
     for (i <- 0 until MAX_VECTOR_SIZE) {
       when(valid_range(i)) {
         pir_sign(i)  := decode1.io.Sign(i)
         pir_exp(i)   := decode1.io.Exp(i)
         pir_frac(i)  := decode1.io.Frac(i)
         pir_sign2(i) := decode2.io.Sign(i)
         pir_exp2(i)  := decode2.io.Exp(i)
         pir_frac2(i) := decode2.io.Frac(i)
       }
     }
   }.otherwise {
     decode1.io.posit      := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
     decode2.io.posit      := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
     floatDecode1.io.float := io.float_i
     floatDecode2.io.float := io.float_i2
     
     // 保存float解码结果，只处理有效元素
     for(i <- 0 until MAX_VECTOR_SIZE) {
       when(valid_range(i)) {
         float_data(i).sign   := floatDecode1.io.Sign(i)
         float_data(i).exp    := floatDecode1.io.Exp(i)
         float_data(i).frac   := floatDecode1.io.Frac(i)
         float_data(i).isNaN  := floatDecode1.io.isNaN(i)
         float_data(i).isInf  := floatDecode1.io.isInf(i)
         float_data(i).isZero := floatDecode1.io.isZero(i)
         
         float_data2(i).sign   := floatDecode2.io.Sign(i)
         float_data2(i).exp    := floatDecode2.io.Exp(i)
         float_data2(i).frac   := floatDecode2.io.Frac(i)
         float_data2(i).isNaN  := floatDecode2.io.isNaN(i)
         float_data2(i).isInf  := floatDecode2.io.isInf(i)
         float_data2(i).isZero := floatDecode2.io.isZero(i)
         
         // 将Float解码结果转换为统一的PIR格式用于计算
         pir_sign(i)  := float_data(i).sign.asUInt
         pir_exp(i)   := float_data(i).exp
         pir_frac(i)  := float_data(i).frac
         pir_sign2(i) := float_data2(i).sign.asUInt
         pir_exp2(i)  := float_data2(i).exp
         pir_frac2(i) := float_data2(i).frac
       }
     }
   }

   // 只保留OP0(原OP10)的处理，删除其他所有操作
   when(io.op === 0.U) {  // QuantizeInt8 - Posit量化至Int8（原OP10改为OP0）
     val quantizeInt8 = Module(new PositQuantizeToInt8(
       MAX_POSIT_WIDTH,
       MAX_VECTOR_SIZE,
       MAX_ALIGN_WIDTH,
       ES
     ))
     
     // 输入PIR格式的posit数据
     quantizeInt8.io.pir_sign_i := pir_sign
     quantizeInt8.io.pir_exp_i  := pir_exp
     quantizeInt8.io.pir_frac_i := pir_frac
     quantizeInt8.io.reset_window := false.B  // 默认不重置窗口
     
     // 将量化结果转换为INT_WIDTH宽度输出
     for (i <- 0 until MAX_VECTOR_SIZE) {
       when(valid_range(i)) {
         // 将Int8结果符号扩展到INT_WIDTH
         io.int_o(i) := quantizeInt8.io.int8_o(i).pad(INT_WIDTH)
       }
     }
   }
 }