package qvu

import chisel3._
import chisel3.util._
import chisel3.experimental.{ChiselAnnotation, annotate}

/**
 * PositQuantizeToInt4模块 - 将Posit值量化为Int4整数
 * 实现向量化Posit值量化至固定Int4范围(-8至7)
 * 量化策略：基于滑动窗口的自适应缩放，保持数据流中的量化一致性
 * 
 * @param MAX_POSIT_WIDTH 最大posit位宽
 * @param MAX_VECTOR_SIZE 最大向量大小
 * @param MAX_ALIGN_WIDTH 最大对齐宽度
 * @param ES ES参数
 * @param WINDOW_SIZE 滑动窗口大小，默认为8
 */
class PositQuantizeToInt4(
  val MAX_POSIT_WIDTH: Int,
  val MAX_VECTOR_SIZE: Int,
  val MAX_ALIGN_WIDTH: Int,
  val ES: Int,
  val WINDOW_SIZE: Int = 8
) extends Module {
  
  // 添加Verilator忽略位宽扩展警告的黑盒模块
  class VerilatorDirective extends BlackBox with HasBlackBoxResource {
    val io = IO(new Bundle{})
    
    // 添加Verilog attribute设置到生成的模块
    override def desiredName = "verilator_directives"
    addResource("/verilator_directives.v")
  }
  
  // 实例化黑盒模块来添加Verilator指令
  val verilatorDirectiveInst = Module(new VerilatorDirective())
  
  // 定义相关常量
  val SRC_ND_MAX: Int         = log2Ceil(MAX_POSIT_WIDTH - 1)
  val SRC_EXP_WIDTH_MAX: Int  = SRC_ND_MAX + ES + 1
  val SRC_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1
  val INT4_WIDTH: Int         = 4  // 固定为Int4位宽
  
  val io = IO(new Bundle {
    // 输入信号 - PIR格式
    val pir_sign_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_exp_i  = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_frac_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
    
    // 输出信号 - Int4量化结果
    val int4_o = Output(Vec(MAX_VECTOR_SIZE, SInt(INT4_WIDTH.W)))
    
    // 控制信号
    val reset_window = Input(Bool()) // 重置滑动窗口
  })
  
  // Int4范围定义
  val INT4_MAX = 7.S(33.W)
  val INT4_MIN = -8.S(33.W)
  val INT4_RANGE = 16.U // 完整Int4范围的大小
  
  // 直方图相关常量 - 统一使用3位宽
  val HIST_BINS = 8
  val HIST_BIN_BITS = 3  // 使用精确的3位宽表示0-7
  
  // 简化滑动窗口存储结构
  val windowMax = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(INT4_MAX)))
  val windowMin = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(INT4_MIN)))
  val windowValid = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(false.B)))
  val windowPtr = RegInit(0.U(log2Ceil(WINDOW_SIZE).W))
  
  // 全局最大最小值跟踪
  val globalMax = RegInit(INT4_MAX)  
  val globalMin = RegInit(INT4_MIN)
  val globalScale = RegInit(1.U(33.W))
  val globalOffset = RegInit(0.S(33.W))
  
  // 批次处理变量 
  val batchMax = RegInit(INT4_MIN)
  val batchMin = RegInit(INT4_MAX)
  val batchHasData = RegInit(false.B)
  
  // 当前批次处理状态
  val sIdle :: sCollect :: sUpdate :: sQuantize :: Nil = Enum(4)
  val state = RegInit(sIdle)
  
  // 直方图统计 - 用于自适应量化
  val histogram = RegInit(VecInit(Seq.fill(HIST_BINS)(0.U(16.W))))
  val histogramTotal = RegInit(0.U(20.W))
  
  // 第一步：计算每个Posit转换后的原始整数值
  val rawInts = Wire(Vec(MAX_VECTOR_SIZE, SInt(33.W))) // 使用33位宽度避免溢出
  val validValues = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  
  // 初始化数组
  for (i <- 0 until MAX_VECTOR_SIZE) {
    rawInts(i) := 0.S
    validValues(i) := false.B
  }
  
  // 将每个Posit转换为原始整数值(不限制在Int4范围)
  for (i <- 0 until MAX_VECTOR_SIZE) {
    // 提取输入参数
    val sgn = io.pir_sign_i(i)                 // 符号位
    val frac = io.pir_frac_i(i)                // 小数
    val k = io.pir_exp_i(i)                    // 解码后的指数
    
    // 检查是否为零或特殊值
    val zn = frac === 0.U
    val nudf = (k <= 0.S) && (frac =/= 0.U)  // 下溢
    
    // 准备移位操作
    val paddedFrac = Wire(UInt(32.W))
    paddedFrac := Cat(~sgn, frac(frac.getWidth-2, 0), 0.U(4.W)) // 添加隐含位和4个0用于舍入
    
    // 计算移位量
    val shiftVal_tmp = Wire(SInt(8.W))
    shiftVal_tmp := 30.S - k
    
    // 确定最终移位量
    val shiftVal = Wire(UInt(6.W))
    when (shiftVal_tmp >= 0.S) {
      shiftVal := shiftVal_tmp(5, 0).asUInt
    }.otherwise {
      shiftVal := 0.U
    }
    
    // 执行右移
    val shiftedFrac = Wire(UInt(32.W))
    val sticky = Wire(Bool())
    val stickyBits = WireDefault(0.U(32.W))
    
    when (shiftVal >= 32.U) {
      shiftedFrac := Mux(sgn === 1.U, Fill(32, 1.U(1.W)), 0.U(32.W))
      sticky := paddedFrac.orR
    }.otherwise {
      shiftedFrac := paddedFrac >> shiftVal
      when (shiftVal === 0.U) {
        sticky := false.B
      }.otherwise {
        val mask = (1.U << shiftVal) - 1.U
        stickyBits := paddedFrac & mask
        sticky := stickyBits.orR
      }
    }
    
    // 调整舍入逻辑 - 使用IEEE舍入到最近偶数标准
    val rnd = shiftedFrac(0)
    val lsb = shiftedFrac(1)
    val guard = rnd
    val round = guard && (sticky || lsb(0))  // 修正舍入条件，只在必要时舍入
    
    // 计算整数结果
    val fracPart = shiftedFrac(31, 1)
    val intPart = fracPart // 保留完整位宽
    
    // 添加舍入位
    val roundedInt = intPart + round.asUInt
    
    // 根据符号位计算有符号整数值
    when (zn || nudf) {
      // 零或下溢情况
      rawInts(i) := 0.S
      validValues(i) := false.B
    }.elsewhen (sgn === 0.U) {
      // 正数
      rawInts(i) := roundedInt.asSInt
      validValues(i) := true.B
    }.otherwise {
      // 负数，改进补码转换
      rawInts(i) := (~roundedInt).asSInt + 1.S
      validValues(i) := true.B
    }
  }
  
  // 数据收集阶段
  when (state === sIdle) {
    // 初始化批次状态
    batchMax := INT4_MIN
    batchMin := INT4_MAX
    batchHasData := false.B
    
    // 重置直方图
    when (io.reset_window) {
      for (i <- 0 until HIST_BINS) {
        histogram(i) := 0.U
      }
      histogramTotal := 0.U
    }
    
    state := sCollect
  } .elsewhen (state === sCollect) {
    // 收集当前批次的极值
    for (i <- 0 until MAX_VECTOR_SIZE) {
      when (validValues(i)) {
        when (!batchHasData) {
          batchMax := rawInts(i)
          batchMin := rawInts(i)
          batchHasData := true.B
        } .otherwise {
          when (rawInts(i) > batchMax) {
            batchMax := rawInts(i)
          }
          when (rawInts(i) < batchMin) {
            batchMin := rawInts(i)
          }
        }
        
        // 更新直方图统计（针对原始值）
        val value = rawInts(i)
        when (value >= batchMin && value <= batchMax) {
          val binWidth = ((batchMax - batchMin).abs.asUInt + HIST_BINS.U) / HIST_BINS.U
          when (binWidth > 0.U) {
            // 简化索引计算
            val tempIndex = ((value - batchMin).abs.asUInt / binWidth).asUInt
            
            // 避免位宽扩展警告 - 显式扩展索引到5位
            val safeIndex = WireDefault(Fill(5, 1.U(1.W))(HIST_BIN_BITS-1, 0))
            when (tempIndex < HIST_BINS.U) {
              safeIndex := tempIndex(HIST_BIN_BITS-1, 0)
            }
            
            // 更新直方图计数
            histogram(safeIndex) := histogram(safeIndex) + 1.U
            histogramTotal := histogramTotal + 1.U
          }
        }
      }
    }
    state := sUpdate
  } .elsewhen (state === sUpdate) {
    // 更新滑动窗口和全局极值
    when (io.reset_window) {
      // 重置滑动窗口
      for (i <- 0 until WINDOW_SIZE) {
        windowMax(i) := INT4_MAX
        windowMin(i) := INT4_MIN
        windowValid(i) := false.B
      }
      windowPtr := 0.U
      globalMax := INT4_MAX
      globalMin := INT4_MIN
    } .elsewhen (batchHasData) {
      // 更新滑动窗口
      windowMax(windowPtr) := batchMax
      windowMin(windowPtr) := batchMin
      windowValid(windowPtr) := true.B
      windowPtr := (windowPtr + 1.U) % WINDOW_SIZE.U
      
      // 更新全局极值
      val effectiveMax = Wire(SInt(33.W))
      val effectiveMin = Wire(SInt(33.W))
      
      // 默认值设置
      effectiveMax := batchMax
      effectiveMin := batchMin
      
      // 使用直方图分析确定有效的极值点
      when (histogramTotal > 0.U) {
        // 计算直方图累计分布
        val cdf = Wire(Vec(HIST_BINS, UInt(20.W)))
        cdf(0) := histogram(0)
        for (i <- 1 until HIST_BINS) {
          cdf(i) := cdf(i-1) + histogram(i)
        }
        
        // 寻找最佳的裁剪点以改善分布 - 去除极端异常值
        val lowerThreshold = (histogramTotal * 5.U) / 100.U  // 下5%分位数
        val upperThreshold = histogramTotal - lowerThreshold // 上5%分位数
        
        // 简化匹配逻辑以减少复杂性
        val lowerIdx = WireDefault(0.U(5.W)) // 使用5位统一位宽
        val upperIdx = WireDefault((HIST_BINS - 1).U(5.W)) // 使用5位统一位宽
        
        // 扫描找到第一个超过阈值的bin - 修复类型错误
        for (i <- 0 until HIST_BINS) {
          // 分离Scala Boolean和Chisel Bool条件
          if (i == 0) {
            when (cdf(i) > lowerThreshold) {
              lowerIdx := i.U(5.W)
            }
          } else {
            when (cdf(i) > lowerThreshold && cdf(i-1) <= lowerThreshold) {
              lowerIdx := i.U(5.W)
            }
          }
          
          // 分离Scala Boolean和Chisel Bool条件
          if (i < HIST_BINS-1) {
            when (cdf(i) < upperThreshold && cdf(i+1) >= upperThreshold) {
              upperIdx := i.U(5.W)
            }
          }
        }
        
        // 计算有效数据范围
        val dataRange = (batchMax - batchMin).abs.asUInt
        val binWidth = (dataRange + HIST_BINS.U) / HIST_BINS.U
        
        // 使用裁剪点计算有效极值
        effectiveMin := batchMin + (lowerIdx(HIST_BIN_BITS-1, 0) * binWidth).asSInt
        effectiveMax := batchMin + (upperIdx(HIST_BIN_BITS-1, 0) * binWidth).asSInt
      }
      
      // 更新全局最大最小值
      when (effectiveMax > globalMax) {
        globalMax := effectiveMax
      }
      when (effectiveMin < globalMin) {
        globalMin := effectiveMin
      }
      
      // 改进的缩放因子和偏移量计算
      val dataRange = (globalMax - globalMin).abs.asUInt
      
      when (dataRange === 0.U) {
        // 避免除零情况
        globalScale := 1.U
        globalOffset := globalMin
      } .otherwise {
        // 采用动态缩放策略，确保有效利用整个Int4范围
        // 保留部分余量以防止溢出
        val targetRange = INT4_RANGE - 1.U // 留出一位余量
        
        // 缩放系数：原始范围映射到目标范围
        globalScale := (dataRange + targetRange - 1.U) / targetRange
        
        // 计算中点，将分布中心对齐到Int4范围的中心
        val mid = (globalMax + globalMin) >> 1
        val desiredMid = (INT4_MAX + INT4_MIN) >> 1  // Int4范围的中心值为-0.5
        
        // 偏移量使分布中心对齐到目标中心
        globalOffset := mid - (desiredMid * globalScale.asSInt)
      }
    }
    state := sQuantize
  } .elsewhen (state === sQuantize) {
    // 实际量化计算在下面的组合逻辑中完成
    state := sIdle
  }
  
  // 量化计算（组合逻辑）- 改进版，使用非线性映射确保分布均匀
  for (i <- 0 until MAX_VECTOR_SIZE) {
    // 初始化输出值
    val outputValue = WireDefault(0.S(4.W))
    
    when (validValues(i)) {
      val inputValue = rawInts(i)
      
      // 先应用偏移量
      val centeredValue = inputValue - globalOffset
      
      // 量化为Int4范围
      val quantizedValue = Wire(SInt(33.W))
      
      when (globalScale === 0.U) {
        quantizedValue := 0.S
      } .otherwise {
        // 改进的量化算法，使用更精确的计算方式
        val scaledValue = centeredValue / globalScale.asSInt
        
        // 使用更精确的舍入计算
        val remainder = centeredValue.abs % globalScale.asSInt
        val halfScale = (globalScale.asSInt >> 1)
        
        // 舍入策略：偏向分布稀疏区域，提高整体分布均匀性
        val needRounding = Wire(Bool())
        
        // 简化直方图映射逻辑，使用基本策略减轻firtool负担
        when (histogramTotal > 0.U) {
          // 简化索引计算
          val binSize = INT4_RANGE / HIST_BINS.U
          val tempIdx = ((scaledValue - INT4_MIN).abs.asUInt / binSize).asUInt
          
          // 安全限制索引范围 - 使用5位统一位宽
          val histIdx = WireDefault(Fill(5, 1.U(1.W))(HIST_BIN_BITS-1, 0))
          when (tempIdx < HIST_BINS.U) {
            histIdx := tempIdx(HIST_BIN_BITS-1, 0)
          }
          
          // 获取bin的频率
          val binFreq = histogram(histIdx)
          val avgFreq = histogramTotal / HIST_BINS.U
          
          // 高频区域更严格舍入，低频区域更宽松舍入
          needRounding := Mux(binFreq > avgFreq,
                            remainder.abs > (halfScale * 6.S / 5.S),  // 高频区域
                            remainder.abs > (halfScale * 4.S / 5.S))  // 低频区域
        }.otherwise {
          // 标准舍入规则
          needRounding := remainder.abs > halfScale || 
                         ((remainder.abs === halfScale) && (scaledValue(0) === 1.U))
        }
        
        // 应用舍入规则
        val roundingDirection = Mux(centeredValue >= 0.S, 
                                  Mux(needRounding, 1.S, 0.S),
                                  Mux(needRounding, -1.S, 0.S))
        
        quantizedValue := scaledValue + roundingDirection
      }
      
      // 限制在Int4范围内
      when (quantizedValue > INT4_MAX) {
        outputValue := INT4_MAX(3, 0).asSInt
      } .elsewhen (quantizedValue < INT4_MIN) {
        outputValue := INT4_MIN(3, 0).asSInt
      } .otherwise {
        outputValue := quantizedValue(3, 0).asSInt
      }
    }
    
    // 将结果输出
    io.int4_o(i) := outputValue
  }
} 