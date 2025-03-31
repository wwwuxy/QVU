package pvu

import chisel3._
import chisel3.util._

/**
 * PositToInt模块 - 将Posit的中间表示(PIR)转换为整数(Int)
 * 
 * @param MAX_POSIT_WIDTH 最大posit位宽
 * @param MAX_VECTOR_SIZE 最大向量大小
 * @param MAX_ALIGN_WIDTH 最大对齐宽度
 * @param ES ES参数
 * @param INT_WIDTH 整数位宽，可参数化配置
 */
class PositToInt(
  val MAX_POSIT_WIDTH: Int,
  val MAX_VECTOR_SIZE: Int,
  val MAX_ALIGN_WIDTH: Int,
  val ES: Int,
  val INT_WIDTH: Int
) extends Module {
  
  // 定义相关常量
  val SRC_ND_MAX: Int = log2Ceil(MAX_POSIT_WIDTH - 1)
  val SRC_EXP_WIDTH_MAX: Int = SRC_ND_MAX + ES + 1
  val SRC_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1
  
  val io = IO(new Bundle {
    // 输入信号 - PIR格式
    val pir_sign_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_exp_i  = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_frac_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
    
    // 输出信号 - 整数
    val int_o = Output(Vec(MAX_VECTOR_SIZE, SInt(INT_WIDTH.W)))
  })
  
  // 初始化输出
  for (i <- 0 until MAX_VECTOR_SIZE) {
    io.int_o(i) := 0.S
  }
  
  // 转换逻辑
  for (i <- 0 until MAX_VECTOR_SIZE) {
    // 转换步骤:
    // 1. 根据指数确定小数点位置
    // 2. 将尾数移位到正确位置
    // 3. 根据符号决定是否取负
    
    // 提取有效的尾数部分
    val frac = io.pir_frac_i(i)
    val exp  = io.pir_exp_i(i)
    val sign = io.pir_sign_i(i)
    
    // 根据指数计算需要左移(正指数)或右移(负指数)的位数
    // 注意: 在Posit中尾数部分已经包含隐藏位(1.xxxx格式)
    val shift_amount = Wire(SInt((SRC_EXP_WIDTH_MAX + 1).W))
    shift_amount := exp
    
    // 限制移位范围,防止溢出
    val clamped_shift = Wire(SInt((SRC_EXP_WIDTH_MAX + 1).W))
    clamped_shift := Mux(shift_amount > (INT_WIDTH - 1).S, 
                         (INT_WIDTH - 1).S, 
                         Mux(shift_amount < (-(MAX_POSIT_WIDTH)).S, 
                            (-(MAX_POSIT_WIDTH)).S, 
                            shift_amount))
    
    // 将尾数转换为定点数
    val extended_frac  = Wire(UInt((INT_WIDTH + MAX_POSIT_WIDTH).W))
        extended_frac := Cat(frac, 0.U((INT_WIDTH - 1).W))            // 尾数左移,附加低位0
    
    // 桶形移位器用于尾数定点转换
    val shifted_result = Wire(UInt((INT_WIDTH + MAX_POSIT_WIDTH).W))
    
    // 根据指数正负进行不同的移位
    when (clamped_shift >= 0.S) {
      // 正指数: 左移 (乘以2^exp)
      shifted_result := extended_frac << clamped_shift.asUInt
    }.otherwise {
      // 负指数: 右移 (除以2^|exp|)
      shifted_result := extended_frac >> (-clamped_shift).asUInt
    }
    
    // 提取整数部分
    val int_result  = Wire(UInt(INT_WIDTH.W))
        int_result := shifted_result(INT_WIDTH + MAX_POSIT_WIDTH - 1, MAX_POSIT_WIDTH)
    
    // 根据符号位确定最终结果
    when (sign === 1.U) {
      // 负数取补码
      io.int_o(i) := (~int_result + 1.U).asSInt
    }.otherwise {
      // 正数直接转换
      io.int_o(i) := int_result.asSInt
    }
    
    // 处理特殊情况: 如果尾数为0则结果为0
    when (frac === 0.U) {
      io.int_o(i) := 0.S
    }
    
    // 溢出处理: 如果结果超出INT_WIDTH表示范围,截断到最大/最小值
    when (clamped_shift > (INT_WIDTH - 1).S) {
      when (sign === 1.U) {
        // 负数溢出,设置为最小负数
        io.int_o(i) := (-(BigInt(1) << (INT_WIDTH - 1))).S
      }.otherwise {
        // 正数溢出,设置为最大正数
        io.int_o(i) := ((BigInt(1) << (INT_WIDTH - 1)) - 1).S
      }
    }
  }
} 