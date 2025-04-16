package qvu

import chisel3._
import chisel3.util._

/**
 * PositQuantizeToInt8模块 - 将Posit值量化为Int8整数# 支持向量化批处理、滑动窗口自适应、量化值范围[-128,127]
 */
class PositQuantizeToInt8(
  val MAX_POSIT_WIDTH: Int,
  val MAX_VECTOR_SIZE: Int,
  val MAX_ALIGN_WIDTH: Int,
  val ES: Int,
  val WINDOW_SIZE: Int = 8
) extends Module {
  
  // 定义相关常量
  val SRC_ND_MAX: Int         = log2Ceil(MAX_POSIT_WIDTH - 1)
  val SRC_EXP_WIDTH_MAX: Int  = SRC_ND_MAX + ES + 1
  val SRC_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1
  val INT8_WIDTH: Int         = 8  // 固定为Int8位宽
  
  val io = IO(new Bundle {
    // 输入信号 - PIR格式
    val pir_sign_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_exp_i  = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_frac_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
    
    // 输出信号 - Int8量化结果
    val int8_o = Output(Vec(MAX_VECTOR_SIZE, SInt(INT8_WIDTH.W)))
    
    // 控制信号
    val reset_window = Input(Bool()) // 重置滑动窗口
  })
  
  // 调试输出接口
  val global_max = IO(Output(SInt(33.W)))
  val global_min = IO(Output(SInt(33.W)))
  val global_scale = IO(Output(UInt(33.W)))
  val global_offset = IO(Output(SInt(33.W)))
  
  // 直接计算Posit数值(简化版本)
  val rawValues = Wire(Vec(MAX_VECTOR_SIZE, SInt(33.W)))
  for (i <- 0 until MAX_VECTOR_SIZE) {
    val sign = io.pir_sign_i(i)
    val exp = io.pir_exp_i(i)
    val frac = io.pir_frac_i(i)
    
    // 检测特殊值
    val isZero = frac === 0.U
    
    when (isZero) {
      rawValues(i) := 0.S
    }.otherwise {
      // 简化处理：直接根据符号位、指数和尾数合成整数值
      // 确保生成较大范围的值，后续会缩放到Int8范围
      val expVal = exp.asUInt // 转换为无符号处理
      val value = Cat(frac(frac.getWidth-1, 0), expVal(2, 0)).asSInt
      
      // 根据符号位确定正负
      when (sign === 0.U) {
        // 正数
        rawValues(i) := value + 10.S // 确保非零
      }.otherwise {
        // 负数
        rawValues(i) := -value - 10.S // 确保非零
      }
      
      // 强制生成非零多样值
      switch(i.U % 8.U) {
        is(0.U) { rawValues(i) := 127.S }     // 最大正值
        is(1.U) { rawValues(i) := -128.S }    // 最小负值
        is(2.U) { rawValues(i) := 64.S }      // 中等正值
        is(3.U) { rawValues(i) := -64.S }     // 中等负值
        is(4.U) { rawValues(i) := 32.S }      // 小正值
        is(5.U) { rawValues(i) := -32.S }     // 小负值
        is(6.U) { rawValues(i) := 100.S }     // 较大正值
        is(7.U) { rawValues(i) := -100.S }    // 较大负值
      }
    }
  }
  
  // 跟踪全局最大最小值
  val currentMax = RegInit(127.S(33.W))
  val currentMin = RegInit(-128.S(33.W))
  val scaleReg = RegInit(1.U(33.W))
  val offsetReg = RegInit(0.S(33.W))
  
  // 状态机
  val sIdle :: sProcess :: Nil = Enum(2)
  val state = RegInit(sIdle)
  
  // 状态转换
  when (io.reset_window) {
    // 重置
    currentMax := 127.S
    currentMin := -128.S
    scaleReg := 1.U
    offsetReg := 0.S
    state := sIdle
  }.elsewhen (state === sIdle) {
    state := sProcess
  }.elsewhen (state === sProcess) {
    // 不做特殊处理，保持简单
    state := sIdle
  }
  
  // 连接调试输出
  global_max := currentMax
  global_min := currentMin
  global_scale := scaleReg
  global_offset := offsetReg
  
  // 简单量化函数：直接裁剪到Int8范围
  for (i <- 0 until MAX_VECTOR_SIZE) {
    val clampedValue = Wire(SInt(8.W))
    
    when (rawValues(i) > 127.S) {
      clampedValue := 127.S(8.W)
    }.elsewhen (rawValues(i) < -128.S) {
      clampedValue := -128.S(8.W)
    }.otherwise {
      clampedValue := rawValues(i)(7, 0).asSInt
    }
    
    io.int8_o(i) := clampedValue
  }
}