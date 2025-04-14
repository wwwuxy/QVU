package qvu
import chisel3._
import chisel3.util._

class PositQuantizeToFP4(
  val MAX_POSIT_WIDTH: Int, // 最大位宽参数 
  val MAX_VECTOR_SIZE: Int, // 最大向量大小
  val MAX_ALIGN_WIDTH: Int, // 最大对齐宽度
  val ES: Int,             // ES参数
  val WINDOW_SIZE: Int = 8 // 滑动窗口大小
) extends Module {
  // FP4格式参数定义
  val FP4_EXP_WIDTH = 1    // 指数位宽固定为1位
  val FP4_FRAC_WIDTH = 2   // 尾数位宽固定为2位
  val FP4_WIDTH = 4        // 总位宽为4位(符号+指数+尾数)

  // 预计算常量
  private val SRC_ND_MAX = log2Ceil(MAX_POSIT_WIDTH - 1) // 预计算位置索引宽度
  private val SRC_EXP_WIDTH_MAX = math.min(SRC_ND_MAX + ES + 1, 32) // 预计算指数位宽上限
  private val SRC_FRAC_WIDTH_MAX = MAX_POSIT_WIDTH + 1 // 预计算尾数位宽上限

  val io = IO(new Bundle {
    val pir_sign_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W))) // 输入符号位
    val pir_exp_i = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W))) // 输入指数
    val pir_frac_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W))) // 输入尾数
    val reset_window = Input(Bool()) // 重置窗口信号
    val fp4_o = Output(Vec(MAX_VECTOR_SIZE, UInt(FP4_WIDTH.W))) // FP4输出向量
  })

  // FP4编码常量 - 一次性定义所有可能值，提高代码效率
  val FP4_ENCODING = Seq(
    "b0000".U -> 0.0,  // +0
    "b1000".U -> -0.0, // -0
    "b0001".U -> 0.25, // +2^-2
    "b1001".U -> -0.25,// -2^-2
    "b0010".U -> 0.5,  // +2^-1
    "b1010".U -> -0.5, // -2^-1
    "b0011".U -> 0.75, // +0.5+0.25
    "b1011".U -> -0.75,// -(0.5+0.25)
    "b0100".U -> 1.0,  // +2^0
    "b1100".U -> -1.0, // -2^0
    "b0101".U -> 1.5,  // +1.0+0.5
    "b1101".U -> -1.5, // -(1.0+0.5)
    "b0110".U -> 2.0,  // +2^1
    "b1110".U -> -2.0, // -2^1
    "b0111".U -> 3.0,  // +2^1+1.0
    "b1111".U -> -3.0  // -(2^1+1.0)
  )
  
  // 阈值定义 - 使用定点表示法，分母为2^24
  val EXP_BIAS = 1                                      // 浮点数指数偏置
  val FRAC_SCALE = 24                                   // 定点表示的小数位数
  val FRAC_ONE = (1 << FRAC_SCALE).U                    // 1.0的定点表示
  val THRESH_MAP = Seq(                                 // 量化阈值映射表
    0.0   -> 0.125,  // 0.0到0.125之间量化为0.0
    0.125 -> 0.375,  // 0.125到0.375之间量化为0.25
    0.375 -> 0.625,  // 0.375到0.625之间量化为0.5
    0.625 -> 0.875,  // 0.625到0.875之间量化为0.75
    0.875 -> 1.25,   // 0.875到1.25之间量化为1.0
    1.25  -> 1.75,   // 1.25到1.75之间量化为1.5
    1.75  -> 2.5,    // 1.75到2.5之间量化为2.0
    2.5   -> Double.MaxValue // 2.5以上量化为3.0
  )
  
  // 使用位运算高效预计算所有阈值的定点表示
  val thresholds = THRESH_MAP.map(_._1 * (1 << FRAC_SCALE)).map(_.toLong.U(33.W))
  
  // 量化结果表：索引到编码值的映射
  val FP4_VALUES = Seq(
    0.U -> "b0000".U, // +0.0
    1.U -> "b0001".U, // +0.25
    2.U -> "b0010".U, // +0.5
    3.U -> "b0011".U, // +0.75
    4.U -> "b0100".U, // +1.0
    5.U -> "b0101".U, // +1.5
    6.U -> "b0110".U, // +2.0
    7.U -> "b0111".U  // +3.0
  )
  
  // 滑动窗口状态寄存器
  val windowMax = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(0.U(33.W)))) // 窗口最大值记录
  val windowMin = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(0.U(33.W)))) // 窗口最小值记录
  val windowValid = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(false.B))) // 窗口有效位
  val windowPtr = RegInit(0.U(log2Ceil(WINDOW_SIZE).W)) // 窗口指针
  
  // 全局统计量
  val globalMax = RegInit(0.U(33.W)) // 全局最大值
  val globalMin = RegInit(0.U(33.W)) // 全局最小值
  val globalScale = RegInit(FRAC_ONE) // 全局缩放因子
  
  // 批次处理变量
  val batchMax = RegInit(0.U(33.W)) // 批次最大值
  val batchMin = RegInit(~0.U(33.W)) // 批次最小值
  val batchHasData = RegInit(false.B) // 批次数据有效标志
  
  // 状态机定义
  val sIdle :: sCollect :: sUpdate :: sQuantize :: Nil = Enum(4)
  val state = RegInit(sIdle)
  
  // 计算每个Posit转换后的原始浮点值(定点表示)
  val rawValues = Wire(Vec(MAX_VECTOR_SIZE, UInt(33.W))) // 原始值列表(定点表示)
  val validValues = Wire(Vec(MAX_VECTOR_SIZE, Bool())) // 有效值标志

  // 初始化输出值和中间存储
  io.fp4_o.foreach(_ := 0.U) // 初始化所有输出为0
  rawValues.foreach(_ := 0.U) // 初始化原始值为0
  validValues.foreach(_ := false.B) // 初始化有效标志为false
  
  // 第一步：将每个Posit转换为定点表示的浮点值 - 流水线计算
  for (i <- 0 until MAX_VECTOR_SIZE) {
    val sign = io.pir_sign_i(i) // 获取符号位
    val exp = io.pir_exp_i(i) // 获取指数
    val frac = io.pir_frac_i(i) // 获取尾数
    val isZero = frac === 0.U // 零检测
    
    // 计算绝对值(定点表示)
    when (!isZero) {
      val fracNorm = (frac << FRAC_SCALE) >> (SRC_FRAC_WIDTH_MAX - 1) // 归一化尾数
      val absValue = Wire(UInt(33.W)) // 绝对值
      when (exp >= 0.S) { // 正指数情况
        absValue := Mux(exp < 9.S, fracNorm << exp.asUInt, ~0.U(33.W)) // 防止溢出
      } .otherwise { // 负指数情况 
        absValue := Mux(exp > (-33).S, fracNorm >> (-exp).asUInt, 0.U) // 防止下溢
      }
      rawValues(i) := absValue // 保存计算结果
      validValues(i) := true.B // 标记有效
    }
  }
  
  // 状态机逻辑
  when (state === sIdle) {
    batchMax := 0.U // 重置批次最大值
    batchMin := ~0.U(33.W) // 重置批次最小值
    batchHasData := false.B // 重置数据标志
    state := sCollect // 进入数据收集状态
  } .elsewhen (state === sCollect) {
    // 收集当前批次的极值
    for (i <- 0 until MAX_VECTOR_SIZE) {
      when (validValues(i)) {
        when (!batchHasData) { // 第一个有效数据
          batchMax := rawValues(i)
          batchMin := rawValues(i)
          batchHasData := true.B
        } .otherwise { // 更新极值
          batchMax := Mux(rawValues(i) > batchMax, rawValues(i), batchMax)
          batchMin := Mux(rawValues(i) < batchMin, rawValues(i), batchMin)
        }
      }
    }
    state := sUpdate // 进入更新状态
  } .elsewhen (state === sUpdate) {
    // 更新滑动窗口和全局极值
    when (io.reset_window) { // 重置窗口
      for (i <- 0 until WINDOW_SIZE) {
        windowValid(i) := false.B
      }
      windowPtr := 0.U
      globalMax := 0.U
      globalMin := ~0.U(33.W)
    } .elsewhen (batchHasData) { // 有效批次数据
      // 更新滑动窗口
      windowMax(windowPtr) := batchMax
      windowMin(windowPtr) := batchMin
      windowValid(windowPtr) := true.B
      windowPtr := (windowPtr + 1.U) % WINDOW_SIZE.U
      
      // 更新全局极值 - 使用折叠操作避免组合逻辑环路
      // 初始值
      val initialMax = globalMax
      val initialMin = globalMin
      
      // 创建查找窗口最值的折叠函数
      val windowMaxVals = Wire(Vec(WINDOW_SIZE, UInt(33.W)))
      val windowMinVals = Wire(Vec(WINDOW_SIZE, UInt(33.W)))
      val windowValids = Wire(Vec(WINDOW_SIZE, Bool()))
      
      // 复制窗口值到临时线网
      for (i <- 0 until WINDOW_SIZE) {
        windowMaxVals(i) := windowMax(i)
        windowMinVals(i) := windowMin(i)
        windowValids(i) := windowValid(i)
      }
      
      // 使用非循环方式计算最大/最小值
      val effectiveMax = WindowMaxFinder(windowMaxVals, windowValids, initialMax)
      val effectiveMin = WindowMinFinder(windowMinVals, windowValids, initialMin)
      
      // 更新缩放因子 - 确保数据正确映射到FP4范围
      val dataRange = Mux(effectiveMax > effectiveMin, effectiveMax - effectiveMin, 1.U)
      val targetRangeMax = 3.U * FRAC_ONE // FP4最大值3.0的定点表示
      globalScale := Mux(dataRange > targetRangeMax, dataRange / targetRangeMax, FRAC_ONE)
      
      // 记录新极值
      globalMax := effectiveMax
      globalMin := effectiveMin
    }
    state := sQuantize // 进入量化状态
  } .otherwise { // sQuantize状态
    state := sIdle // 回到空闲状态
  }
  
  // 量化组合逻辑 - 一次计算所有元素
  for (i <- 0 until MAX_VECTOR_SIZE) {
    when (validValues(i)) {
      // 缩放并偏移值以适应FP4范围
      val valueAbs = Wire(UInt(33.W))
      valueAbs := Mux(globalScale > 1.U, 
                     (rawValues(i) - globalMin) / globalScale,
                     (rawValues(i) - globalMin))
      
      // 查找匹配的量化区间
      val quantIndex = Wire(UInt(3.W))
      quantIndex := 0.U // 默认为0
      
      // 量化查找表实现 - 一次性检查所有阈值
      when(valueAbs >= thresholds(7)) {
        quantIndex := 7.U
      }.elsewhen(valueAbs >= thresholds(6)) {
        quantIndex := 6.U
      }.elsewhen(valueAbs >= thresholds(5)) {
        quantIndex := 5.U
      }.elsewhen(valueAbs >= thresholds(4)) {
        quantIndex := 4.U
      }.elsewhen(valueAbs >= thresholds(3)) {
        quantIndex := 3.U
      }.elsewhen(valueAbs >= thresholds(2)) {
        quantIndex := 2.U
      }.elsewhen(valueAbs >= thresholds(1)) {
        quantIndex := 1.U
      }
      
      // 编码最终FP4结果值 - 考虑符号位
      val fp4Result = Wire(UInt(FP4_WIDTH.W))
      
      // 先获取无符号部分
      val unsignedValue = MuxLookup(quantIndex, "b0000".U)(FP4_VALUES)
      
      // 根据符号位决定最终结果，避免 fp4Result 循环依赖
      fp4Result := Mux(io.pir_sign_i(i) === 1.U && quantIndex =/= 0.U,
                       unsignedValue | "b1000".U,  // 设置符号位
                       unsignedValue)              // 保持原值
      
      io.fp4_o(i) := fp4Result // 输出最终结果
    }
  }
}

// 定义辅助函数，在模块外部，用于计算窗口内的最大值
object WindowMaxFinder {
  def apply(values: Vec[UInt], valids: Vec[Bool], initial: UInt): UInt = {
    require(values.length == valids.length, "values和valids长度必须相同")
    
    // 使用二叉树结构计算最大值，避免循环依赖
    def findMax(lo: Int, hi: Int): UInt = {
      if (lo == hi) {
        Mux(valids(lo), Mux(values(lo) > initial, values(lo), initial), initial)
      } else {
        val mid = (lo + hi) / 2
        val leftMax = findMax(lo, mid)
        val rightMax = findMax(mid + 1, hi)
        Mux(leftMax > rightMax, leftMax, rightMax)
      }
    }
    
    if (values.isEmpty) initial
    else findMax(0, values.length - 1)
  }
}

// 定义辅助函数，在模块外部，用于计算窗口内的最小值
object WindowMinFinder {
  def apply(values: Vec[UInt], valids: Vec[Bool], initial: UInt): UInt = {
    require(values.length == valids.length, "values和valids长度必须相同")
    
    // 使用二叉树结构计算最小值，避免循环依赖
    def findMin(lo: Int, hi: Int): UInt = {
      if (lo == hi) {
        Mux(valids(lo), Mux(values(lo) < initial, values(lo), initial), initial)
      } else {
        val mid = (lo + hi) / 2
        val leftMin = findMin(lo, mid)
        val rightMin = findMin(mid + 1, hi)
        Mux(leftMin < rightMin, leftMin, rightMin)
      }
    }
    
    if (values.isEmpty) initial
    else findMin(0, values.length - 1)
  }
} 