package pvu

import chisel3._
import chisel3.util._

/**
 * PositLess模块 - 比较两个posit向量的大小并输出较小值
 * 
 * @param MAX_POSIT_WIDTH 最大posit位宽
 * @param MAX_VECTOR_SIZE 最大向量大小
 * @param MAX_ALIGN_WIDTH 最大对齐宽度
 * @param ES ES参数
 */
class PositLess(
  val MAX_POSIT_WIDTH: Int,
  val MAX_VECTOR_SIZE: Int,
  val MAX_ALIGN_WIDTH: Int,
  val ES: Int
) extends Module {
  
  // 定义相关常量
  val SRC_ND_MAX: Int         = log2Ceil(MAX_POSIT_WIDTH - 1)
  val SRC_EXP_WIDTH_MAX: Int  = SRC_ND_MAX + ES + 1
  val SRC_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1
  
  val io = IO(new Bundle {
    // 输入信号
    val pir_sign1_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i  = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_exp2_i  = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_frac1_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
    val pir_frac2_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
    
    // 输出信号 - 较小值的sign, exp, frac
    val pir_sign_o  = Output(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_exp_o   = Output(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_frac_o  = Output(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
  })
  
  // 初始化输出
  for (i <- 0 until MAX_VECTOR_SIZE) {
    io.pir_sign_o(i) := 0.U
    io.pir_exp_o(i)  := 0.S
    io.pir_frac_o(i) := 0.U
  }
  
  // 比较逻辑
  for (i <- 0 until MAX_VECTOR_SIZE) {
    // 比较两个posit数
    val is_less = Wire(Bool())
    
    // 比较规则：
    // 1. 首先比较符号位：负数 < 正数
    // 2. 如果符号位相同，对于正数，比较指数和尾数；对于负数，反向比较
    
    when(io.pir_sign1_i(i) === 1.U && io.pir_sign2_i(i) === 0.U) {
      // 第一个数是负数，第二个是正数，所以第一个更小
      is_less := true.B
    }.elsewhen(io.pir_sign1_i(i) === 0.U && io.pir_sign2_i(i) === 1.U) {
      // 第一个数是正数，第二个是负数，所以第二个更小
      is_less := false.B
    }.elsewhen(io.pir_sign1_i(i) === 0.U && io.pir_sign2_i(i) === 0.U) {
      // 两个都是正数，比较指数
      when(io.pir_exp1_i(i) < io.pir_exp2_i(i)) {
        is_less := true.B
      }.elsewhen(io.pir_exp1_i(i) > io.pir_exp2_i(i)) {
        is_less := false.B
      }.otherwise {
        // 指数相等，比较尾数
        is_less := io.pir_frac1_i(i) < io.pir_frac2_i(i)
      }
    }.otherwise {
      // 两个都是负数，反向比较（绝对值大的负数更小）
      when(io.pir_exp1_i(i) > io.pir_exp2_i(i)) {
        is_less := true.B  // 第一个绝对值更大，所以第一个负数更小
      }.elsewhen(io.pir_exp1_i(i) < io.pir_exp2_i(i)) {
        is_less := false.B // 第二个绝对值更大，所以第二个负数更小
      }.otherwise {
        // 指数相等，比较尾数（对于负数，尾数大的值更小）
        is_less := io.pir_frac1_i(i) > io.pir_frac2_i(i)
      }
    }
    
    // 输出较小的值
    when(is_less) {
      io.pir_sign_o(i) := io.pir_sign1_i(i)
      io.pir_exp_o(i)  := io.pir_exp1_i(i)
      io.pir_frac_o(i) := io.pir_frac1_i(i)
    }.otherwise {
      io.pir_sign_o(i) := io.pir_sign2_i(i)
      io.pir_exp_o(i)  := io.pir_exp2_i(i)
      io.pir_frac_o(i) := io.pir_frac2_i(i)
    }
  }
} 