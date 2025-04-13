package qvu
import chisel3._
import chisel3.util._

class PositQuantizeToFP16(
  val MAX_POSIT_WIDTH: Int, // 最大位宽参数 
  val MAX_VECTOR_SIZE: Int, // 最大向量大小
  val MAX_ALIGN_WIDTH: Int, // 最大对齐宽度
  val ES: Int             // ES参数
) extends Module {
  // FP16格式参数定义
  val FP16_EXP_WIDTH = 5
  val FP16_FRAC_WIDTH = 10
  val FP16_WIDTH = 1 + FP16_EXP_WIDTH + FP16_FRAC_WIDTH

  // 预先计算的常量宽度
  private val SRC_ND_MAX: Int = log2Ceil(MAX_POSIT_WIDTH - 1)
  private val SRC_EXP_WIDTH_MAX: Int = Math.min(SRC_ND_MAX + ES + 1, 32)
  private val SRC_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1

  val io = IO(new Bundle {
    // 输入PIR格式的posit数据
    val pir_sign_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_exp_i = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_frac_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
    val reset_window = Input(Bool()) // 重置窗口信号

    // 输出FP16格式结果
    val fp16_o = Output(Vec(MAX_VECTOR_SIZE, UInt(FP16_WIDTH.W)))
  })

  // FP16参数
  val FP16_BIAS = (1 << (FP16_EXP_WIDTH - 1)) - 1  // FP16偏置值 (15)

  // 对每个向量元素进行量化处理
  for (i <- 0 until MAX_VECTOR_SIZE) {
    // 提取PIR格式的输入
    val sign = io.pir_sign_i(i)
    val exp = io.pir_exp_i(i)
    val frac = io.pir_frac_i(i)

    // 规范化exp和frac
    val normExp = exp + FP16_BIAS.S  // 添加偏置值
    
    // 处理特殊情况
    val isZero = frac === 0.U || exp < (-FP16_BIAS).S
    val isInf = exp > (FP16_BIAS + 1).S || normExp >= ((1 << FP16_EXP_WIDTH) - 1).S

    // 默认量化结果
    val fp16Result = Wire(UInt(FP16_WIDTH.W))
    
    when (isZero) {
      // 处理0情况
      fp16Result := sign ## 0.U((FP16_EXP_WIDTH + FP16_FRAC_WIDTH).W)
    }.elsewhen (isInf) {
      // 处理无穷大情况
      val expAll1 = ((1 << FP16_EXP_WIDTH) - 1).U(FP16_EXP_WIDTH.W)
      fp16Result := sign ## expAll1 ## 0.U(FP16_FRAC_WIDTH.W)
    }.otherwise {
      // 正常情况
      // 确保exp在合适范围内
      val clampedExp = Mux(normExp < 0.S, 0.U, 
                        Mux(normExp >= ((1 << FP16_EXP_WIDTH) - 1).S, 
                            ((1 << FP16_EXP_WIDTH) - 2).U, 
                            normExp.asUInt))
      
      // 处理尾数
      // 我们知道SRC_FRAC_WIDTH_MAX = MAX_POSIT_WIDTH + 1，这是在编译时确定的
      // 现在分情况处理尾数
      val fracBits = Wire(UInt(FP16_FRAC_WIDTH.W))
      
      if (SRC_FRAC_WIDTH_MAX <= FP16_FRAC_WIDTH) {
        // 如果最大尾数宽度小于等于FP16尾数宽度，则需要左移
        fracBits := frac << (FP16_FRAC_WIDTH - SRC_FRAC_WIDTH_MAX)
      } else {
        // 如果最大尾数宽度大于FP16尾数宽度，则取高位
        fracBits := frac(SRC_FRAC_WIDTH_MAX - 1, SRC_FRAC_WIDTH_MAX - FP16_FRAC_WIDTH)
      }
      
      fp16Result := sign ## clampedExp(FP16_EXP_WIDTH-1, 0) ## fracBits
    }
    
    // 输出量化结果
    io.fp16_o(i) := fp16Result
  }
} 