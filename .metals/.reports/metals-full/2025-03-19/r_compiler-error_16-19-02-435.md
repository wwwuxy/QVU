error id: 5D2FD4648B334C7C5DF6A497FE569394
file://<WORKSPACE>/src/main/scala/pvu/PvuTop.scala
### scala.reflect.internal.FatalError: 
  unexpected tree: class scala.reflect.internal.Trees$Template
<Bundle: error> {
  def <init>(): <$anon: <error>> = {
    super.<init>();
    ()
  };
  private[this] val <posit_i1: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(MAX_POSIT_WIDTH.W)));
  private[this] val <posit_i2: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(MAX_POSIT_WIDTH.W)));
  private[this] val <op: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <Isposit: error>: <error> = <Input: error>(<Bool: error>());
  private[this] val <Outposit: error>: <error> = <Input: error>(<Bool: error>());
  private[this] val <float_i: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(FLOAT_WIDTH.W)));
  private[this] val <float_i2: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(FLOAT_WIDTH.W)));
  private[this] val <float_mode: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <float_posit: error>: <error> = <Input: error>(<Bool: error>());
  private[this] val <src_posit_width: error>: <error> = <Input: error>(<UInt: error>(6.<W: error>));
  private[this] val <src_es: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <vector_size: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <dst_posit_width: error>: <error> = <Input: error>(<UInt: error>(6.<W: error>));
  private[this] val <dst_es: error>: <error> = <Input: error>(<UInt: error>(4.<W: error>));
  private[this] val <float_o: error>: <error> = <Output: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(FLOAT_WIDTH.W)));
  private[this] val <float_dot_o: error>: <error> = <Output: error>(<UInt: error>(FLOAT_WIDTH.W));
  private[this] val <posit_o: error>: <error> = <Output: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(MAX_POSIT_WIDTH.W)));
  private[this] val <posit_dot_o: error>: <error> = <Output: error>(<UInt: error>(MAX_POSIT_WIDTH.W))
}
     while compiling: file://<WORKSPACE>/src/main/scala/pvu/PvuTop.scala
        during phase: globalPhase=<no phase>, enteringPhase=parser
     library version: version 2.13.15
    compiler version: version 2.13.15
  reconstructed args: -classpath <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.15/scala-library-2.13.15.jar -Ymacro-expand:discard -Ycache-plugin-class-loader:last-modified -Ypresentation-any-thread

  last tree to typer: Template(value <local $anon>)
       tree position: line 58 of file://<WORKSPACE>/src/main/scala/pvu/PvuTop.scala
              symbol: value <local $anon>
   symbol definition: val <local $anon>: <notype> (a TermSymbol)
      symbol package: pvu
       symbol owners: value <local $anon> -> <$anon: <error>> -> value io -> class PvuTop
           call site: <none> in <none>

== Source file context for tree position ==

    55      ))
    56    }
    57 
    58    val io = IO(new Bundle {
    59      // 输入Posit向量
    60      val posit_i1 = Input(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))
    61      val posit_i2 = Input(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))

occurred in the presentation compiler.



action parameters:
offset: 2567
uri: file://<WORKSPACE>/src/main/scala/pvu/PvuTop.scala
text:
```scala
  //PVU TOP
  /* 支持六种操作类型 --> op控制
    1 --> 加法
    2 --> 减法
    3 --> 乘法
    4 --> 除法
    5 --> 点积
    6 --> Posit精度转换
    7 --> Float和Posit相互转换

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
   val MAX_ES: Int,          // 最大ES参数，用于定义输出接口的ES参数，支持不同精度之间的转换
   val FLOAT_MODE: Int = 3   // 浮点数格式，0=FP4, 1=FP8, 2=FP16, 3=FP32(默认), 4=FP64
 ) extends Module {
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
     val op       = Input(UInt(3.W))
     
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
     val src_posit_width = Input(UInt(6.W))  // 源Posit位宽@@，值为0表示使用最大值
     val src_es = Input(UInt(3.W))           // 源ES参数，值为0表示使用最大值
     val vector_size = Input(UInt(3.W))      // 实际使用的向量大小，值为0表示使用最大值
     
     // 目标精度配置接口
     val dst_posit_width = Input(UInt(6.W))  // 目标Posit位宽，值为0表示与源相同
     val dst_es = Input(UInt(4.W))           // 目标ES参数，值为0表示与源相同
     
     val float_o     = Output(Vec(MAX_VECTOR_SIZE, UInt(FLOAT_WIDTH.W)))
     val float_dot_o = Output(UInt(FLOAT_WIDTH.W))               // 添加float点积输出
     val posit_o     = Output(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W))) // 使用最大位宽
     val posit_dot_o = Output(UInt(MAX_POSIT_WIDTH.W))           // 使用最大位宽
 })
 
   // 计算实际使用的参数
   val ACTUAL_SRC_POSIT_WIDTH = Mux(io.src_posit_width === 0.U, MAX_POSIT_WIDTH.U, io.src_posit_width)
   val ACTUAL_SRC_ES          = Mux(io.src_es === 0.U, MAX_ES.U, io.src_es)
   val ACTUAL_VECTOR_SIZE     = Mux(io.vector_size === 0.U, MAX_VECTOR_SIZE.U, io.vector_size)
   
   // 根据IO接口的参数计算实际使用的目标参数
   val ACTUAL_DST_POSIT_WIDTH = Mux(io.dst_posit_width === 0.U, ACTUAL_SRC_POSIT_WIDTH, io.dst_posit_width)
   val ACTUAL_DST_ES          = Mux(io.dst_es === 0.U, ACTUAL_SRC_ES, io.dst_es)
   
   // 静态声明用于模块实例化
   val SRC_ND_MAX: Int         = log2Ceil(MAX_POSIT_WIDTH - 1)
   val SRC_EXP_WIDTH_MAX: Int  = SRC_ND_MAX + MAX_ES + 1
   val SRC_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1
   
   val DST_ND_MAX: Int         = log2Ceil(MAX_POSIT_WIDTH - 1)
   val DST_EXP_WIDTH_MAX: Int  = DST_ND_MAX + MAX_ES + 1
   val DST_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1
   
   // 初始化所有输出信号，确保在所有条件下都有值
   io.float_o     := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(FLOAT_WIDTH.W)))
   io.float_dot_o := 0.U(FLOAT_WIDTH.W)
   io.posit_o     := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
   io.posit_dot_o := 0.U(MAX_POSIT_WIDTH.W)
   
   //**********//
   //**decode**//
   //**********//
  val pir_sign1 = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
  val pir_sign2 = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
  val pir_exp1  = Wire(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
  val pir_exp2  = Wire(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
  val pir_frac1 = Wire(Vec(MAX_VECTOR_SIZE, UInt((SRC_FRAC_WIDTH_MAX + 1).W)))
  val pir_frac2 = Wire(Vec(MAX_VECTOR_SIZE, UInt((SRC_FRAC_WIDTH_MAX + 1).W)))

  // 为Float和Posit转换添加中间变量
  val float_sign   = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_exp    = Wire(Vec(MAX_VECTOR_SIZE, SInt((float_exp_width + 1).W)))
  val float_frac   = Wire(Vec(MAX_VECTOR_SIZE, UInt((float_frac_width + 1).W)))
  val float_isNaN  = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_isInf  = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_isZero = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  
  // 为Float操作添加中间变量（第二个Float输入向量）
  val float_sign2   = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_exp2    = Wire(Vec(MAX_VECTOR_SIZE, SInt((float_exp_width + 1).W)))
  val float_frac2   = Wire(Vec(MAX_VECTOR_SIZE, UInt((float_frac_width + 1).W)))
  val float_isNaN2  = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_isInf2  = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_isZero2 = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  
  // Float计算结果变量
  val float_sign_rst   = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_exp_rst    = Wire(Vec(MAX_VECTOR_SIZE, SInt((float_exp_width + 1).W)))
  val float_frac_rst   = Wire(Vec(MAX_VECTOR_SIZE, UInt((float_frac_width + 1).W)))
  val float_isNaN_rst  = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_isInf_rst  = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  val float_isZero_rst = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  
  // Float点积结果变量
  val float_sign_dot   = Wire(Bool())
  val float_exp_dot    = Wire(SInt((float_exp_width + 1).W))
  val float_frac_dot   = Wire(UInt((float_frac_width + 1).W))
  val float_isNaN_dot  = Wire(Bool())
  val float_isInf_dot  = Wire(Bool())
  val float_isZero_dot = Wire(Bool())
  
  // 初始化Float相关中间变量
  for(i <- 0 until MAX_VECTOR_SIZE) {
    float_sign(i)   := false.B
    float_exp(i)    := 0.S
    float_frac(i)   := 0.U
    float_isNaN(i)  := false.B
    float_isInf(i)  := false.B
    float_isZero(i) := false.B
    
    float_sign2(i)   := false.B
    float_exp2(i)    := 0.S
    float_frac2(i)   := 0.U
    float_isNaN2(i)  := false.B
    float_isInf2(i)  := false.B
    float_isZero2(i) := false.B
    
    float_sign_rst(i)   := false.B
    float_exp_rst(i)    := 0.S
    float_frac_rst(i)   := 0.U
    float_isNaN_rst(i)  := false.B
    float_isInf_rst(i)  := false.B
    float_isZero_rst(i) := false.B
  }
  
  // 初始化Float点积结果变量
  float_sign_dot   := false.B
  float_exp_dot    := 0.S
  float_frac_dot   := 0.U
  float_isNaN_dot  := false.B
  float_isInf_dot  := false.B
  float_isZero_dot := false.B

  val decode1 = Module(new PositDecode(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ES))
  val decode2 = Module(new PositDecode(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ES))

  // 添加Float解码模块
  val floatDecode1 = Module(new FloatDecode(float_exp_width, float_frac_width, MAX_VECTOR_SIZE))
  val floatDecode2 = Module(new FloatDecode(float_exp_width, float_frac_width, MAX_VECTOR_SIZE))

  // 连接Float解码模块
  floatDecode1.io.float := io.float_i
  floatDecode2.io.float := io.float_i2

  // 添加预先计算的动态参数，用于运行时
  // 初始化时使用这些实际参数来决定处理多少数据以及使用何种精度

  // 确保实际向量大小不超过最大值
  val valid_vector_size = Mux(ACTUAL_VECTOR_SIZE > MAX_VECTOR_SIZE.U, MAX_VECTOR_SIZE.U, ACTUAL_VECTOR_SIZE)
  
  // 计算实际使用的位宽参数 (运行时)
  val src_nd         = log2Ceil(MAX_POSIT_WIDTH).U
  val src_exp_width  = src_nd + ACTUAL_SRC_ES
  val src_frac_width = ACTUAL_SRC_POSIT_WIDTH - ACTUAL_SRC_ES - 3.U
  val src_mul_width  = 2.U * (src_frac_width + 1.U)
  val src_sum_width  = src_mul_width + log2Ceil(MAX_VECTOR_SIZE).U
  
  // 对于所有流程，添加valid_range检查
  val valid_range = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  for (i <- 0 until MAX_VECTOR_SIZE) {
    valid_range(i) := (i.U < valid_vector_size)
  }
  
  // 解码逻辑需要确保只处理有效范围内的输入数据
  when(io.Isposit) {
    decode1.io.posit := io.posit_i1
    decode2.io.posit := io.posit_i2
    // 只拷贝有效范围内的结果
    for (i <- 0 until MAX_VECTOR_SIZE) {
      when(valid_range(i)) {
        pir_sign1(i) := decode1.io.Sign(i)
        pir_exp1(i) := decode1.io.Exp(i)
        pir_frac1(i) := decode1.io.Frac(i)
        pir_sign2(i) := decode2.io.Sign(i)
        pir_exp2(i) := decode2.io.Exp(i)
        pir_frac2(i) := decode2.io.Frac(i)
      }
    }
  }.otherwise {
    decode1.io.posit := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
    decode2.io.posit := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
    
    // 保存float解码结果，只处理有效元素
    for(i <- 0 until MAX_VECTOR_SIZE) {
      when(valid_range(i)) {
        float_sign(i) := floatDecode1.io.Sign(i)
        float_exp(i) := floatDecode1.io.Exp(i)
        float_frac(i) := floatDecode1.io.Frac(i)
        float_isNaN(i) := floatDecode1.io.isNaN(i)
        float_isInf(i) := floatDecode1.io.isInf(i)
        float_isZero(i) := floatDecode1.io.isZero(i)
        
        float_sign2(i) := floatDecode2.io.Sign(i)
        float_exp2(i) := floatDecode2.io.Exp(i)
        float_frac2(i) := floatDecode2.io.Frac(i)
        float_isNaN2(i) := floatDecode2.io.isNaN(i)
        float_isInf2(i) := floatDecode2.io.isInf(i)
        float_isZero2(i) := floatDecode2.io.isZero(i)
        
        // 将Float解码结果转换为统一的PIR格式用于计算
        pir_sign1(i) := float_sign(i).asUInt
        pir_exp1(i) := float_exp(i)
        pir_frac1(i) := float_frac(i)
        pir_sign2(i) := float_sign2(i).asUInt
        pir_exp2(i) := float_exp2(i)
        pir_frac2(i) := float_frac2(i)
      }
    }
  }

  //***********************//
  //get operand and compute//
  //***********************//
  val pir_sign_rst     = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
  val pir_exp_rst      = Wire(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
  val pir_frac_rst_add = Wire(Vec(MAX_VECTOR_SIZE, UInt(MAX_ALIGN_WIDTH.W)))
  val pir_frac_rst_sub = Wire(Vec(MAX_VECTOR_SIZE, UInt(MAX_ALIGN_WIDTH.W)))
  val pir_frac_rst_mul = Wire(Vec(MAX_VECTOR_SIZE, UInt((2 * (SRC_FRAC_WIDTH_MAX + 1)).W)))
  val pir_frac_rst_div = Wire(Vec(MAX_VECTOR_SIZE, UInt((2 * (SRC_FRAC_WIDTH_MAX + 1)).W)))
  val pir_max_exp      = Wire(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))    //fraction_align

  // 为精度转换添加中间变量
  val pir_sign_convert = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
  val pir_exp_convert  = Wire(Vec(MAX_VECTOR_SIZE, SInt(DST_EXP_WIDTH_MAX.W)))
  val pir_frac_convert = Wire(Vec(MAX_VECTOR_SIZE, UInt((2 * (SRC_FRAC_WIDTH_MAX + 1)).W)))

    //for dotproduct, output is scalar
  val pir_sign_dot = Wire(UInt(1.W))
  val pir_exp_dot  = Wire(SInt(SRC_EXP_WIDTH_MAX.W))
  val pir_frac_dot = Wire(UInt(((2 * (SRC_FRAC_WIDTH_MAX + 1)) + log2Ceil(MAX_VECTOR_SIZE+1)+2).W))

  //初始化中间变量
  for(i <- 0 until MAX_VECTOR_SIZE){
    pir_sign_rst(i)     := 0.U
    pir_exp_rst(i)      := 0.S
    pir_frac_rst_add(i) := 0.U
    pir_frac_rst_sub(i) := 0.U
    pir_frac_rst_mul(i) := 0.U
    pir_frac_rst_div(i) := 0.U
    pir_max_exp(i)      := 0.S
    pir_sign_convert(i) := 0.U
    pir_exp_convert(i)  := 0.S
    pir_frac_convert(i) := 0.U
  }

  pir_sign_dot := 0.U
  pir_exp_dot  := 0.S
  pir_frac_dot := 0.U

  when(io.op === 1.U){    //Add
    val overflow      = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))  //尾数溢出
    val frac_truncate = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))  //尾数截断
  
    val fracalign = Module(new FractionAlignment_AddSub(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, MAX_ES))
    val add       = Module(new Add(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, MAX_ES))

    fracalign.io.pir_exp1_i  := pir_exp1
    fracalign.io.pir_frac1_i := pir_frac1
    fracalign.io.pir_exp2_i  := pir_exp2
    fracalign.io.pir_frac2_i := pir_frac2

    add.io.pir_sign1_i       := pir_sign1
    add.io.pir_sign2_i       := pir_sign2
    add.io.pir_exp1_i        := fracalign.io.pir_max_exp
    add.io.pir_exp2_i        := fracalign.io.pir_max_exp
    add.io.pir_frac1_aligned := fracalign.io.pir_frac1_align
    add.io.pir_frac2_aligned := fracalign.io.pir_frac2_align
  
    pir_sign_rst     := add.io.pir_sign_o
    pir_exp_rst      := add.io.pir_exp_o
    pir_frac_rst_add := add.io.pir_frac_o
    pir_max_exp      := fracalign.io.pir_max_exp
    overflow         := add.io.overflow
    frac_truncate    := add.io.frac_truncate

  }.elsewhen(io.op === 2.U){  //Sub
    val overflow      = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val frac_truncate = Wire(Vec(MAX_VECTOR_SIZE, UInt(1.W)))

    val fracalign = Module(new FractionAlignment_AddSub(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, MAX_ES))
    val sub       = Module(new Sub(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, MAX_ES))

    fracalign.io.pir_exp1_i  := pir_exp1
    fracalign.io.pir_frac1_i := pir_frac1
    fracalign.io.pir_exp2_i  := pir_exp2
    fracalign.io.pir_frac2_i := pir_frac2
  
    sub.io.pir_sign1_i       := pir_sign1
    sub.io.pir_sign2_i       := pir_sign2
    sub.io.pir_exp1_i        := fracalign.io.pir_max_exp
    sub.io.pir_exp2_i        := fracalign.io.pir_max_exp
    sub.io.pir_frac1_aligned := fracalign.io.pir_frac1_align
    sub.io.pir_frac2_aligned := fracalign.io.pir_frac2_align
  
    pir_sign_rst     := sub.io.pir_sign_o
    pir_exp_rst      := sub.io.pir_exp_o
    pir_frac_rst_sub := sub.io.pir_frac_o
    pir_max_exp      := fracalign.io.pir_max_exp
    overflow         := sub.io.overflow
    frac_truncate    := sub.io.frac_truncate
  
  }.elsewhen(io.op === 3.U){  //Mul
    val mul = Module(new Mul(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, MAX_ES))
  
    mul.io.pir_sign1_i := pir_sign1
    mul.io.pir_sign2_i := pir_sign2
    mul.io.pir_exp1_i  := pir_exp1
    mul.io.pir_exp2_i  := pir_exp2
    mul.io.pir_frac1_i := pir_frac1
    mul.io.pir_frac2_i := pir_frac2
  
    pir_sign_rst     := mul.io.pir_sign_o
    pir_exp_rst      := mul.io.pir_exp_o
    pir_frac_rst_mul := mul.io.pir_frac_o
  
  }.elsewhen(io.op === 4.U){  //Div
    val div = Module(new Div(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, MAX_ES))
  
    div.io.pir_sign1_i := pir_sign1
    div.io.pir_sign2_i := pir_sign2
    div.io.pir_exp1_i  := pir_exp1
    div.io.pir_exp2_i  := pir_exp2
    div.io.pir_frac1_i := pir_frac1
    div.io.pir_frac2_i := pir_frac2
  
    pir_sign_rst     := div.io.pir_sign_o
    pir_exp_rst      := div.io.pir_exp_o
    pir_frac_rst_div := div.io.pir_frac_o
  
  }.elsewhen(io.op === 5.U){  //DotProduct, 先相乘再相加，对阶在DotProduct中实现，输入向量 输出标量
   val dotproduct = Module(new DotProduct(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, MAX_ES))
  
  
    dotproduct.io.pir_sign1_i := pir_sign1
    dotproduct.io.pir_sign2_i := pir_sign2
    dotproduct.io.pir_exp1_i  := pir_exp1
    dotproduct.io.pir_exp2_i  := pir_exp2
    dotproduct.io.pir_frac1_i := pir_frac1
    dotproduct.io.pir_frac2_i := pir_frac2
  
    pir_sign_dot := dotproduct.io.pir_sign_o
    pir_exp_dot  := dotproduct.io.pir_exp_o
    pir_frac_dot := dotproduct.io.pir_frac_o
  }.elsewhen(io.op === 6.U){  //PositConvert
    // 定义静态值用于模块实例化
    val dst_posit_width_int = MAX_POSIT_WIDTH
    val dst_es_int = MAX_ES
    
    val convert = Module(new PositConvert(
      MAX_POSIT_WIDTH,
      dst_posit_width_int,
      MAX_ES,
      dst_es_int,
      MAX_VECTOR_SIZE,
      MAX_ALIGN_WIDTH
    ))
    
    // 仅对操作数1进行精度转换
    convert.io.pir_sign1_i := pir_sign1
    convert.io.pir_exp1_i  := pir_exp1
    convert.io.pir_frac1_i := pir_frac1
    
    pir_sign_convert := convert.io.pir_sign_o
    pir_exp_convert  := convert.io.pir_exp_o
    pir_frac_convert := convert.io.pir_frac_o
  }.elsewhen(io.op === 7.U){  // Float和Posit相互转换
    // 根据float_mode动态选择浮点数格式
    val float2posit_out = Wire(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))
    val posit2float_out = Wire(Vec(MAX_VECTOR_SIZE, UInt(FLOAT_WIDTH.W)))
    
    // 默认值
    float2posit_out := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
    posit2float_out := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(FLOAT_WIDTH.W)))
    
    // 根据float_mode选择不同的浮点数格式
    switch(io.float_mode) {
      is(0.U) { // FP4
        // Float转Posit - FP4
        val float2posit_fp4 = Module(new FloatToPosit(
          1,
          2,
          MAX_POSIT_WIDTH,
          MAX_ES,
          MAX_VECTOR_SIZE
        ))
        float2posit_fp4.io.float_in := io.float_i
        
        // 处理可能的宽度不匹配
        for(i <- 0 until MAX_VECTOR_SIZE) {
          when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
            // 如果目标位宽超过最大位宽，截断
            float2posit_out(i) := float2posit_fp4.io.posit_out(i)(MAX_POSIT_WIDTH-1, 0)
          }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
            // 否则，在运行时调整位宽
            // 计算有效位数和截断位
            val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
            float2posit_out(i) := (float2posit_fp4.io.posit_out(i) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
          }.otherwise {
            float2posit_out(i) := float2posit_fp4.io.posit_out(i)
          }
        }
        
        // Posit转Float - FP4
        val posit2float_fp4 = Module(new PositToFloat(
          MAX_POSIT_WIDTH,
          MAX_ES,
          1,
          2,
          MAX_VECTOR_SIZE
        ))
        posit2float_fp4.io.posit_in := io.posit_i1
        posit2float_out             := posit2float_fp4.io.float_out
      }
      
      is(1.U) { // FP8
        // Float转Posit - FP8
        val float2posit_fp8 = Module(new FloatToPosit(
          4,
          3,
          MAX_POSIT_WIDTH,
          MAX_ES,
          MAX_VECTOR_SIZE
        ))
        float2posit_fp8.io.float_in := io.float_i
        
        // 处理可能的宽度不匹配
        for(i <- 0 until MAX_VECTOR_SIZE) {
          when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
            // 如果目标位宽超过最大位宽，截断
            float2posit_out(i) := float2posit_fp8.io.posit_out(i)(MAX_POSIT_WIDTH-1, 0)
          }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
            // 否则，在运行时调整位宽
            // 计算有效位数和截断位
            val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
            float2posit_out(i) := (float2posit_fp8.io.posit_out(i) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
          }.otherwise {
            float2posit_out(i) := float2posit_fp8.io.posit_out(i)
          }
        }
        
        // Posit转Float - FP8
        val posit2float_fp8 = Module(new PositToFloat(
          MAX_POSIT_WIDTH,
          MAX_ES,
          4,
          3,
          MAX_VECTOR_SIZE
        ))
        posit2float_fp8.io.posit_in := io.posit_i1
        posit2float_out             := posit2float_fp8.io.float_out
      }
      
      is(2.U) { // FP16
        // Float转Posit - FP16
        val float2posit_fp16 = Module(new FloatToPosit(
          5,
          10,
          MAX_POSIT_WIDTH,
          MAX_ES,
          MAX_VECTOR_SIZE
        ))
        float2posit_fp16.io.float_in := io.float_i
        
        // 处理可能的宽度不匹配
        for(i <- 0 until MAX_VECTOR_SIZE) {
          when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
            // 如果目标位宽超过最大位宽，截断
            float2posit_out(i) := float2posit_fp16.io.posit_out(i)(MAX_POSIT_WIDTH-1, 0)
          }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
            // 否则，在运行时调整位宽
            // 计算有效位数和截断位
            val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
            float2posit_out(i) := (float2posit_fp16.io.posit_out(i) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
          }.otherwise {
            float2posit_out(i) := float2posit_fp16.io.posit_out(i)
          }
        }
        
        // Posit转Float - FP16
        val posit2float_fp16 = Module(new PositToFloat(
          MAX_POSIT_WIDTH,
          MAX_ES,
          5,
          10,
          MAX_VECTOR_SIZE
        ))
        posit2float_fp16.io.posit_in := io.posit_i1
        posit2float_out := posit2float_fp16.io.float_out
      }
      
      is(3.U) { // FP32
        // Float转Posit - FP32
        val float2posit_fp32 = Module(new FloatToPosit(
          8,
          23,
          MAX_POSIT_WIDTH,
          MAX_ES,
          MAX_VECTOR_SIZE
        ))
        float2posit_fp32.io.float_in := io.float_i
        
        // 处理可能的宽度不匹配
        for(i <- 0 until MAX_VECTOR_SIZE) {
          when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
            // 如果目标位宽超过最大位宽，截断
            float2posit_out(i) := float2posit_fp32.io.posit_out(i)(MAX_POSIT_WIDTH-1, 0)
          }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
            // 否则，在运行时调整位宽
            // 计算有效位数和截断位
            val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
            float2posit_out(i) := (float2posit_fp32.io.posit_out(i) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
          }.otherwise {
            float2posit_out(i) := float2posit_fp32.io.posit_out(i)
          }
        }
        
        // Posit转Float - FP32
        val posit2float_fp32 = Module(new PositToFloat(
          MAX_POSIT_WIDTH,
          MAX_ES,
          8,
          23,
          MAX_VECTOR_SIZE
        ))
        posit2float_fp32.io.posit_in := io.posit_i1
        posit2float_out := posit2float_fp32.io.float_out
      }
      
      is(4.U) { // FP64
        // Float转Posit - FP64
        val float2posit_fp64 = Module(new FloatToPosit(
          11,
          52,
          MAX_POSIT_WIDTH,
          MAX_ES,
          MAX_VECTOR_SIZE
        ))
        float2posit_fp64.io.float_in := io.float_i
        
        // 处理可能的宽度不匹配
        for(i <- 0 until MAX_VECTOR_SIZE) {
          when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
            // 如果目标位宽超过最大位宽，截断
            float2posit_out(i) := float2posit_fp64.io.posit_out(i)(MAX_POSIT_WIDTH-1, 0)
          }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
            // 否则，在运行时调整位宽
            // 计算有效位数和截断位
            val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
            float2posit_out(i) := (float2posit_fp64.io.posit_out(i) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
          }.otherwise {
            float2posit_out(i) := float2posit_fp64.io.posit_out(i)
          }
        }
        
        // Posit转Float - FP64
        val posit2float_fp64 = Module(new PositToFloat(
          MAX_POSIT_WIDTH,
          MAX_ES,
          11,
          52,
          MAX_VECTOR_SIZE
        ))
        posit2float_fp64.io.posit_in := io.posit_i1
        posit2float_out := posit2float_fp64.io.float_out
      }
    }
    
    // 根据float_posit信号决定转换方向
    // 如果float_posit为true，则进行Float到Posit的转换
    // 如果float_posit为false，则进行Posit到Float的转换
    when(io.float_posit) {
      // Float到Posit转换 - 仅处理操作数1
      io.posit_o := float2posit_out
      io.float_o := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(FLOAT_WIDTH.W)))
    }.otherwise {
      // Posit到Float转换 - 仅处理操作数1
      io.float_o := posit2float_out
      io.posit_o := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
    }
  }

  //***********************//
  //fraction normalization//
  //***********************//
  val pir_exp_adjust      = Wire(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
  val pir_exp_adjust_dot  = Wire(SInt(SRC_EXP_WIDTH_MAX.W))
  val pir_frac_normed     = Wire(Vec(MAX_VECTOR_SIZE, UInt((2 * (SRC_FRAC_WIDTH_MAX + 1)).W)))
  val pir_frac_normed_dot = Wire(UInt((2 * (SRC_FRAC_WIDTH_MAX + 1)).W))

  //初始化中间变量
  for(i <- 0 until MAX_VECTOR_SIZE){
    pir_exp_adjust(i) := 0.S
    pir_frac_normed(i) := 0.U
  }
  pir_exp_adjust_dot := 0.S(SRC_EXP_WIDTH_MAX.W)
  pir_frac_normed_dot := 0.U

  when(io.op === 5.U){  //dotproduct output is scala, 默认小数点位于首位
  val frac_norm_dot = Module(new FracNorm_DotProduct(MAX_POSIT_WIDTH, (2 * (SRC_FRAC_WIDTH_MAX + 1)) + log2Ceil(MAX_VECTOR_SIZE+1)+2, 1, MAX_ES))
      frac_norm_dot.io.pir_frac_i := pir_frac_dot
      pir_frac_normed_dot         := frac_norm_dot.io.pir_frac_o
      pir_exp_adjust_dot          := frac_norm_dot.io.exp_adjust
  }.elsewhen(io.op === 1.U){ //Add
    val frac_norm_add                = Module(new FracNorm(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, 1, MAX_ES))
        frac_norm_add.io.pir_frac_i := pir_frac_rst_add
        pir_frac_normed             := frac_norm_add.io.pir_frac_o
        pir_exp_adjust              := frac_norm_add.io.exp_adjust
  }.elsewhen(io.op === 2.U){ //Sub
    val frac_norm_sub                = Module(new FracNorm(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ALIGN_WIDTH, 1, MAX_ES))
        frac_norm_sub.io.pir_frac_i := pir_frac_rst_sub
        pir_frac_normed             := frac_norm_sub.io.pir_frac_o
        pir_exp_adjust              := frac_norm_sub.io.exp_adjust
  }.elsewhen(io.op === 3.U){  //Mul           
    val frac_norm_mul                = Module(new FracNorm(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, 2 * (SRC_FRAC_WIDTH_MAX + 1), 2, MAX_ES))
        frac_norm_mul.io.pir_frac_i := pir_frac_rst_mul
        pir_frac_normed             := frac_norm_mul.io.pir_frac_o
        pir_exp_adjust              := frac_norm_mul.io.exp_adjust
  }.elsewhen(io.op === 4.U){  //Div    
    val frac_norm_div                = Module(new FracNorm(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, 2 * (SRC_FRAC_WIDTH_MAX + 1), 1, MAX_ES))
        frac_norm_div.io.pir_frac_i := pir_frac_rst_div
        pir_frac_normed             := frac_norm_div.io.pir_frac_o
        pir_exp_adjust              := frac_norm_div.io.exp_adjust
  }

    // printf("pir_frac_normed: %b\n", pir_frac_normed(0))

  //***************//
  //**Adjust EXP**//
  //**************//
  val pir_exp_rst_adjusied     = Wire(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
  val pir_exp_rst_adjusied_dot = Wire(SInt(SRC_EXP_WIDTH_MAX.W))

  //初始化中间变量
  pir_exp_rst_adjusied     := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.S(SRC_EXP_WIDTH_MAX.W)))
  pir_exp_rst_adjusied_dot := 0.S(SRC_EXP_WIDTH_MAX.W)

  // 计算调整后的指数
  when(io.op === 5.U){
    pir_exp_rst_adjusied_dot := pir_exp_adjust_dot + pir_exp_dot
  }.otherwise{
    for(i <- 0 until MAX_VECTOR_SIZE){
      pir_exp_rst_adjusied(i) := pir_exp_rst(i) + pir_exp_adjust(i)
    }
  }

  // 为所有操作准备Float结果，无论输入是Posit还是Float
  // 这样在任何操作后，都可以根据Outposit信号选择输出格式
  when(io.op < 6.U) {
    // 对于前5个op操作，始终准备Float格式的结果
    when(io.op === 5.U) {
      // 点积操作
      float_sign_dot := pir_sign_dot.asBool
      float_exp_dot := pir_exp_rst_adjusied_dot
      float_frac_dot := pir_frac_normed_dot(float_frac_width, 0)
      float_isNaN_dot := false.B
      float_isInf_dot := false.B
      float_isZero_dot := false.B
      
      // 检查特殊情况
      when(pir_frac_normed_dot === 0.U) {
        float_isZero_dot := true.B
      }
      
      // 处理特殊情况：对于点积，如果输入是Float且任何输入包含NaN或Inf
      when(!io.Isposit) {
        for(i <- 0 until MAX_VECTOR_SIZE) {
          when(valid_range(i) && (float_isNaN(i) || float_isNaN2(i))) {
            float_isNaN_dot := true.B
          }
          
          when(valid_range(i) && ((float_isInf(i) && !float_isZero2(i)) || (float_isInf2(i) && !float_isZero(i)))) {
            float_isInf_dot := true.B
          }
        }
      }
    }.otherwise {
      // 其他算术操作
      for(i <- 0 until MAX_VECTOR_SIZE) {
        float_sign_rst(i) := pir_sign_rst(i).asBool
        float_exp_rst(i) := pir_exp_rst_adjusied(i)
        
        // 根据不同操作选择对应的尾数结果
        when(io.op === 1.U) {
          float_frac_rst(i) := pir_frac_normed(i)(float_frac_width, 0)
        }.elsewhen(io.op === 2.U) {
          float_frac_rst(i) := pir_frac_normed(i)(float_frac_width, 0)
        }.elsewhen(io.op === 3.U) {
          float_frac_rst(i) := pir_frac_normed(i)(float_frac_width, 0)
        }.elsewhen(io.op === 4.U) {
          float_frac_rst(i) := pir_frac_normed(i)(float_frac_width, 0)
        }
        
        // 检查特殊情况
        float_isNaN_rst(i) := false.B
        float_isInf_rst(i) := false.B
        float_isZero_rst(i) := false.B
        
        when(pir_frac_normed(i) === 0.U) {
          float_isZero_rst(i) := true.B
        }
        
        // 处理特殊情况：当输入是Float且包含NaN或Inf时
        when(!io.Isposit) {
          when(float_isNaN(i) || float_isNaN2(i)) {
            float_isNaN_rst(i) := true.B
          }
          
          when(float_isInf(i) || float_isInf2(i)) {
            float_isInf_rst(i) := true.B
          }
        }
      }
    }
  }

  when(io.op === 5.U){
    // 点积操作的输出处理
    // 准备Posit格式结果
    val encode_dot = Module(new PositEncode_DotProduct(MAX_POSIT_WIDTH, MAX_ES))
    encode_dot.io.pir_sign := pir_sign_dot
    encode_dot.io.pir_exp  := pir_exp_rst_adjusied_dot
    encode_dot.io.pir_frac := pir_frac_normed_dot
    
    // 当目标精度与源精度不同时，需要调整结果位宽
    val posit_result = Wire(UInt(MAX_POSIT_WIDTH.W))
    
    // 1. 解码点积结果
    val dot_decoder = Module(new PositDecode(MAX_POSIT_WIDTH, 1, MAX_ES))
    dot_decoder.io.posit(0) := encode_dot.io.posit
    
    // 2. 转换为目标精度
    val dot_converter = Module(new PositConvert(
      MAX_POSIT_WIDTH,
      MAX_POSIT_WIDTH,
      MAX_ES,
      MAX_ES,
      1,
      MAX_ALIGN_WIDTH
    ))
    
    dot_converter.io.pir_sign1_i(0) := dot_decoder.io.Sign(0)
    dot_converter.io.pir_exp1_i(0)  := dot_decoder.io.Exp(0)
    dot_converter.io.pir_frac1_i(0) := dot_decoder.io.Frac(0)
    
    // 3. 编码为目标精度
    val dot_encoder = Module(new PositEncode(MAX_POSIT_WIDTH, 1, MAX_ES))
    dot_encoder.io.pir_sign(0) := dot_converter.io.pir_sign_o(0)
    dot_encoder.io.pir_exp(0)  := dot_converter.io.pir_exp_o(0)
    dot_encoder.io.pir_frac(0) := dot_converter.io.pir_frac_o(0)
    
    // 如果目标宽度大于源宽度，需要扩展
    // 如果目标宽度小于源宽度，需要截断
    when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
      // 如果目标位宽超过最大位宽，截断
      posit_result := dot_encoder.io.posit(0)(MAX_POSIT_WIDTH-1, 0)
    }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
      // 否则，在运行时调整位宽
      // 计算有效位数和截断位
      val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
      posit_result := (dot_encoder.io.posit(0) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
    }.otherwise {
      posit_result := dot_encoder.io.posit(0)
    }
    
    // 准备Float格式结果
    val floatDotEncoder = Module(new FloatEncode(
      float_exp_width,
      float_frac_width,
      1
    ))
    
    floatDotEncoder.io.Sign(0)  := float_sign_dot
    floatDotEncoder.io.Exp(0)   := float_exp_dot
    floatDotEncoder.io.Frac(0)  := float_frac_dot
    floatDotEncoder.io.isNaN(0) := float_isNaN_dot
    floatDotEncoder.io.isInf(0) := float_isInf_dot
    floatDotEncoder.io.isZero(0) := float_isZero_dot
    
    val float_result = floatDotEncoder.io.float(0)
    
    // 根据Outposit信号选择输出格式
    when(io.Outposit) {
      io.posit_dot_o := posit_result
      io.float_dot_o := 0.U(FLOAT_WIDTH.W)
    }.otherwise {
      io.posit_dot_o := 0.U(MAX_POSIT_WIDTH.W)
      io.float_dot_o := float_result
    }
    
  }.elsewhen(io.op === 6.U){
    // 精度转换操作
    val convert_encoder = Module(new PositEncode(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ES))
    convert_encoder.io.pir_sign := pir_sign_convert
    convert_encoder.io.pir_exp  := pir_exp_convert
    convert_encoder.io.pir_frac := pir_frac_convert
    
    // 直接输出转换后的结果，但需要处理可能的宽度不匹配
    for(i <- 0 until MAX_VECTOR_SIZE) {
      when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
        // 目标位宽超过最大位宽，截断
        io.posit_o(i) := convert_encoder.io.posit(i)(MAX_POSIT_WIDTH-1, 0)
      }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
        // 否则，在运行时调整位宽
        // 计算有效位数和截断位
        val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
        io.posit_o(i) := (convert_encoder.io.posit(i) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
      }.otherwise {
        io.posit_o(i) := convert_encoder.io.posit(i)
      }
    }
  }.elsewhen(io.op === 7.U){
    // Float和Posit转换操作的输出已在上面处理
  }.otherwise{
    // 算术操作（加、减、乘、除）
    // 准备Posit格式结果
    val posit_results = Wire(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))
    
    // 如果目标精度与源精度相同，直接编码输出
    when (ACTUAL_DST_POSIT_WIDTH === MAX_POSIT_WIDTH.U && ACTUAL_DST_ES === MAX_ES.U) {
      val encode = Module(new PositEncode(MAX_POSIT_WIDTH, MAX_VECTOR_SIZE, MAX_ES))
      encode.io.pir_sign := pir_sign_rst
      encode.io.pir_exp  := pir_exp_rst_adjusied
      encode.io.pir_frac := pir_frac_normed
      posit_results := encode.io.posit
    } .otherwise {
      // 否则，需要进行精度转换  
      // 1. 转换为目标精度
      val result_converter = Module(new PositConvert(
        MAX_POSIT_WIDTH,
        MAX_POSIT_WIDTH,
        MAX_ES,
        MAX_ES,
        MAX_VECTOR_SIZE,
        MAX_ALIGN_WIDTH
      ))
      
      result_converter.io.pir_sign1_i := pir_sign_rst
      result_converter.io.pir_exp1_i  := pir_exp_rst_adjusied
      result_converter.io.pir_frac1_i := pir_frac_normed
      
      // 2. 编码为目标精度
      val result_encoder = Module(new PositEncode(
        MAX_POSIT_WIDTH, 
        MAX_VECTOR_SIZE, 
        MAX_ES
      ))
      result_encoder.io.pir_sign := result_converter.io.pir_sign_o
      result_encoder.io.pir_exp  := result_converter.io.pir_exp_o
      result_encoder.io.pir_frac := result_converter.io.pir_frac_o
      
      // 处理可能的宽度不匹配
      for(i <- 0 until MAX_VECTOR_SIZE) {
        when(ACTUAL_DST_POSIT_WIDTH > MAX_POSIT_WIDTH.U) {
          // 目标位宽超过最大位宽，截断
          posit_results(i) := result_encoder.io.posit(i)(MAX_POSIT_WIDTH-1, 0)
        }.elsewhen(ACTUAL_DST_POSIT_WIDTH < MAX_POSIT_WIDTH.U) {
          // 否则，在运行时调整位宽
          // 计算有效位数和截断位
          val valid_bits = ACTUAL_DST_POSIT_WIDTH - 1.U
          posit_results(i) := (result_encoder.io.posit(i) >> (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)) << (MAX_POSIT_WIDTH.U - ACTUAL_DST_POSIT_WIDTH)
        }.otherwise {
          posit_results(i) := result_encoder.io.posit(i)
        }
      }
    }
    
    // 准备Float格式结果
    val floatEncoder = Module(new FloatEncode(
      float_exp_width,
      float_frac_width,
      MAX_VECTOR_SIZE
    ))
    
    floatEncoder.io.Sign  := float_sign_rst
    floatEncoder.io.Exp   := float_exp_rst
    floatEncoder.io.Frac  := float_frac_rst
    floatEncoder.io.isNaN := float_isNaN_rst
    floatEncoder.io.isInf := float_isInf_rst
    floatEncoder.io.isZero := float_isZero_rst
    
    val float_results = floatEncoder.io.float
    
    // 根据Outposit信号选择输出格式
    when(io.Outposit) {
      io.posit_o := posit_results
      io.float_o := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(FLOAT_WIDTH.W)))
    }.otherwise {
      io.posit_o := VecInit(Seq.fill(MAX_VECTOR_SIZE)(0.U(MAX_POSIT_WIDTH.W)))
      io.float_o := float_results
    }
  }
}

```


presentation compiler configuration:
Scala version: 2.13.15
Classpath:
<HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.15/scala-library-2.13.15.jar [exists ]
Options:





#### Error stacktrace:

```
scala.reflect.internal.Reporting.abort(Reporting.scala:70)
	scala.reflect.internal.Reporting.abort$(Reporting.scala:66)
	scala.reflect.internal.SymbolTable.abort(SymbolTable.scala:28)
	scala.tools.nsc.typechecker.Typers$Typer.typedOutsidePatternMode$1(Typers.scala:6257)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:6274)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6320)
	scala.tools.nsc.typechecker.Typers$Typer.typedQualifier(Typers.scala:6418)
	scala.meta.internal.pc.PcDefinitionProvider.definitionTypedTreeAt(PcDefinitionProvider.scala:167)
	scala.meta.internal.pc.PcDefinitionProvider.definition(PcDefinitionProvider.scala:68)
	scala.meta.internal.pc.PcDefinitionProvider.definition(PcDefinitionProvider.scala:16)
	scala.meta.internal.pc.ScalaPresentationCompiler.$anonfun$definition$1(ScalaPresentationCompiler.scala:477)
```
#### Short summary: 

scala.reflect.internal.FatalError: 
  unexpected tree: class scala.reflect.internal.Trees$Template
<Bundle: error> {
  def <init>(): <$anon: <error>> = {
    super.<init>();
    ()
  };
  private[this] val <posit_i1: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(MAX_POSIT_WIDTH.W)));
  private[this] val <posit_i2: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(MAX_POSIT_WIDTH.W)));
  private[this] val <op: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <Isposit: error>: <error> = <Input: error>(<Bool: error>());
  private[this] val <Outposit: error>: <error> = <Input: error>(<Bool: error>());
  private[this] val <float_i: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(FLOAT_WIDTH.W)));
  private[this] val <float_i2: error>: <error> = <Input: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(FLOAT_WIDTH.W)));
  private[this] val <float_mode: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <float_posit: error>: <error> = <Input: error>(<Bool: error>());
  private[this] val <src_posit_width: error>: <error> = <Input: error>(<UInt: error>(6.<W: error>));
  private[this] val <src_es: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <vector_size: error>: <error> = <Input: error>(<UInt: error>(3.<W: error>));
  private[this] val <dst_posit_width: error>: <error> = <Input: error>(<UInt: error>(6.<W: error>));
  private[this] val <dst_es: error>: <error> = <Input: error>(<UInt: error>(4.<W: error>));
  private[this] val <float_o: error>: <error> = <Output: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(FLOAT_WIDTH.W)));
  private[this] val <float_dot_o: error>: <error> = <Output: error>(<UInt: error>(FLOAT_WIDTH.W));
  private[this] val <posit_o: error>: <error> = <Output: error>(<Vec: error>(MAX_VECTOR_SIZE, <UInt: error>(MAX_POSIT_WIDTH.W)));
  private[this] val <posit_dot_o: error>: <error> = <Output: error>(<UInt: error>(MAX_POSIT_WIDTH.W))
}
     while compiling: file://<WORKSPACE>/src/main/scala/pvu/PvuTop.scala
        during phase: globalPhase=<no phase>, enteringPhase=parser
     library version: version 2.13.15
    compiler version: version 2.13.15
  reconstructed args: -classpath <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.15/scala-library-2.13.15.jar -Ymacro-expand:discard -Ycache-plugin-class-loader:last-modified -Ypresentation-any-thread

  last tree to typer: Template(value <local $anon>)
       tree position: line 58 of file://<WORKSPACE>/src/main/scala/pvu/PvuTop.scala
              symbol: value <local $anon>
   symbol definition: val <local $anon>: <notype> (a TermSymbol)
      symbol package: pvu
       symbol owners: value <local $anon> -> <$anon: <error>> -> value io -> class PvuTop
           call site: <none> in <none>

== Source file context for tree position ==

    55      ))
    56    }
    57 
    58    val io = IO(new Bundle {
    59      // 输入Posit向量
    60      val posit_i1 = Input(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))
    61      val posit_i2 = Input(Vec(MAX_VECTOR_SIZE, UInt(MAX_POSIT_WIDTH.W)))