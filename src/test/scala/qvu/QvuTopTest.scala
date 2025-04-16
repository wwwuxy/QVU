package qvu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers
import chiseltest.simulator.WriteVcdAnnotation
import scala.collection.mutable.ArrayBuffer
import scala.util.Random

class QvuTopTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "QvuTop"

  // 测试Posit量化到Int8功能
  it should "correctly quantize posit numbers to Int8 with full range" in {
    test(new QvuTop(MAX_POSIT_WIDTH = 32, MAX_VECTOR_SIZE = 16, MAX_ALIGN_WIDTH = 64, ES = 2))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        // 创建测试数据的功能函数
        def createTestData(count: Int, min: Int, max: Int): Seq[(Int, Int)] = {
          val data = ArrayBuffer[(Int, Int)]()
          val random = new Random(42)  // 固定种子以便测试结果可重复
          
          // 添加均匀分布的测试值
          for (i <- 0 until count) {
            val value = min + (max - min) * i / count
            val positBits = if (value > 0) {
              0x40000000 + value * 1000 // 正数使用较大的值以确保在Int8范围之外
            } else if (value < 0) {
              0xC0000000 + value * 1000 // 负数使用较大的值以确保在Int8范围之外
            } else {
              0 // 0的特殊表示
            }
            data += ((positBits, value))
          }
          
          // 添加极值
          data += ((0x7FFFFFFF, Int.MaxValue))   // 最大正数
          data += ((0x80000000, Int.MinValue))   // 最小负数
          
          // 添加多个0
          for(_ <- 0 until 5) {
            data += ((0, 0))
          }
          
          // 添加随机值
          for(_ <- 0 until count/2) {
            val value = min + random.nextInt(max - min + 1)
            val positBits = if (value > 0) {
              0x40000000 + value * 1000 
            } else if (value < 0) {
              0xC0000000 + value * 1000
            } else {
              0
            }
            data += ((positBits, value))
          }
          
          data.toSeq
        }
        
        // 创建测试统计功能
        def analyzeResults(results: ArrayBuffer[Int]): Unit = {
          // 分析每个区间内的数量
          val buckets = Array.fill[Int](256)(0)
          var minVal = Int.MaxValue
          var maxVal = Int.MinValue
          
          for (value <- results) {
            // 转换为[-128,127]范围的索引
            val index = if (value < 0) value + 256 else value
            buckets(index) += 1
            
            // 记录最小和最大值
            minVal = math.min(minVal, value)
            maxVal = math.max(maxVal, value)
          }
          
          println(s"Quantization Results Statistics:")
          println(s"Min Value: $minVal, Max Value: $maxVal")
          
          // 输出每个区间内的数量
          val intervalSize = 32 // 每个打印区间的大小
          for (i <- -128 until 128 by intervalSize) {
            val end = math.min(i + intervalSize - 1, 127)
            val count = (i until end + 1).map(v => buckets(if (v < 0) v + 256 else v)).sum
            val percentage = count * 100.0 / results.size
            println(f"Range [$i, $end]: $count times ($percentage%.2f%%)")
          }
        }
        
        // 运行测试
        println("Starting Posit to Int8 Quantization Test")
        
        // 设置操作类型为QuantizeInt8
        dut.io.op.poke(0.U)  
        dut.io.Isposit.poke(true.B)  // 输入是posit
        dut.io.src_posit_width.poke(32.U)  // 源posit位宽为32
        dut.io.vector_size.poke(16.U)  // 向量大小为16
        
        // 生成测试数据
        val testData = createTestData(100, -1000, 1000)
        val results = ArrayBuffer[Int]()
        
        // 将数据分批传入模块测试
        for (batchIdx <- testData.indices by 16) {
          // 准备输入数据
          for (i <- 0 until 16) {
            val idx = batchIdx + i
            if (idx < testData.length) {
              val (positBits, _) = testData(idx)
              dut.io.posit_i(i).poke(positBits.U)
            } else {
              dut.io.posit_i(i).poke(0.U)
            }
          }
          
          // 运行一个周期
          dut.clock.step(1)
          
          // 收集输出结果
          for (i <- 0 until 16) {
            val idx = batchIdx + i
            if (idx < testData.length) {
              val result = dut.io.int_o(i).peek().litValue.toInt
              results += result
            }
          }
          
          // 每10批打印一次当前窗口状态，使用重置窗口信号
          if (batchIdx % 160 == 0) {
            dut.clock.step(10) // 多执行几个周期确保窗口更新
            println(s"Batch ${batchIdx/16}: Reset window")
            dut.io.reset_window.poke(true.B)
            dut.clock.step(1)
            dut.io.reset_window.poke(false.B)
          }
        }
        
        // 分析结果
        analyzeResults(results)
        
        // 验证至少有-128和127的值
        val hasMinValue = results.contains(-128)
        val hasMaxValue = results.contains(127)
        
        // 验证值分布
        val uniqueValues = results.distinct.size
        
        println(s"Unique value count: $uniqueValues")
        println(s"Has min value -128: $hasMinValue")
        println(s"Has max value 127: $hasMaxValue")
        
        // 验证分布在整个区间
        assert(uniqueValues > 200, "Distribution not wide enough")
        assert(hasMinValue, "Does not contain min value -128")
        assert(hasMaxValue, "Does not contain max value 127")
    }
  }
} 