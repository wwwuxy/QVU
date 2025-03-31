package pvu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers
import chiseltest.simulator.WriteVcdAnnotation

class PvuTopTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "PvuTop"

  // 测试posit精度转换
  it should "correctly convert posit numbers between different precisions" in {
    test(new PvuTop(MAX_POSIT_WIDTH = 32, MAX_VECTOR_SIZE = 4, MAX_ALIGN_WIDTH = 64, ES = 2))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        // 测试用例1：从32位posit转换到16位posit
        dut.io.op.poke(6.U)  // 设置操作类型为posit精度转换
        dut.io.Isposit.poke(true.B)  // 输入是posit
        dut.io.Outposit.poke(true.B)  // 输出是posit
        dut.io.src_posit_width.poke(32.U)  // 源posit位宽为32
        dut.io.dst_posit_width.poke(16.U)  // 目标posit位宽为16
        dut.io.vector_size.poke(1.U)  // 测试单个元素

        // 测试数据：一个32位posit数
        val posit32 = BigInt("80000000", 16)  // 1.0 in 32-bit posit
        dut.io.posit_i1(0).poke(posit32.U)
        dut.io.posit_i2(0).poke(0.U)  // 不使用第二个输入

        // 等待一个时钟周期
        dut.clock.step()

        // 验证结果
        val expected16 = BigInt("8000", 16)  // 1.0 in 16-bit posit
        dut.io.posit_o(0).expect(expected16.U)

        // 测试用例2：从16位posit转换到32位posit
        dut.io.src_posit_width.poke(16.U)
        dut.io.dst_posit_width.poke(32.U)
        
        // 测试数据：一个16位posit数
        val posit16 = BigInt("8000", 16)  // 1.0 in 16-bit posit
        dut.io.posit_i1(0).poke(posit16.U)
        
        dut.clock.step()
        
        // 验证结果
        val expected32 = BigInt("80000000", 16)  // 1.0 in 32-bit posit
        dut.io.posit_o(0).expect(expected32.U)

        // 测试用例3：测试向量转换
        dut.io.vector_size.poke(2.U)  // 测试两个元素
        
        // 第一个元素：1.0
        dut.io.posit_i1(0).poke(posit16.U)
        // 第二个元素：-1.0
        dut.io.posit_i1(1).poke(BigInt("8001", 16).U)
        
        dut.clock.step()
        
        // 验证两个元素的结果
        dut.io.posit_o(0).expect(expected32.U)
        dut.io.posit_o(1).expect(BigInt("80000001", 16).U)

        // 测试用例4：测试边界情况
        // 测试最大正数
        val maxPosit16 = BigInt("7FFF", 16)
        dut.io.posit_i1(0).poke(maxPosit16.U)
        
        dut.clock.step()
        
        // 验证最大正数转换
        dut.io.posit_o(0).expect(BigInt("7FFFFFFF", 16).U)

        // 测试最小正数
        val minPosit16 = BigInt("0001", 16)
        dut.io.posit_i1(0).poke(minPosit16.U)
        
        dut.clock.step()
        
        // 验证最小正数转换
        dut.io.posit_o(0).expect(BigInt("00000001", 16).U)
      }
  }

  // 测试无效输入处理
  it should "handle invalid inputs correctly" in {
    test(new PvuTop(MAX_POSIT_WIDTH = 32, MAX_VECTOR_SIZE = 4, MAX_ALIGN_WIDTH = 64, ES = 2))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        dut.io.op.poke(6.U)
        dut.io.Isposit.poke(true.B)
        dut.io.Outposit.poke(true.B)
        dut.io.src_posit_width.poke(32.U)
        dut.io.dst_posit_width.poke(16.U)
        dut.io.vector_size.poke(1.U)

        // 测试无效的posit数（全0）
        dut.io.posit_i1(0).poke(0.U)
        
        dut.clock.step()
        
        // 验证结果应该为0
        dut.io.posit_o(0).expect(0.U)

        // 测试无效的posit数（全1）
        dut.io.posit_i1(0).poke(BigInt("FFFFFFFF", 16).U)
        
        dut.clock.step()
        
        // 验证结果应该为NaN
        dut.io.posit_o(0).expect(BigInt("FFFF", 16).U)
      }
  }

  // 测试不同ES值的情况
  it should "handle different ES values correctly" in {
    test(new PvuTop(MAX_POSIT_WIDTH = 32, MAX_VECTOR_SIZE = 4, MAX_ALIGN_WIDTH = 64, ES = 3))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        dut.io.op.poke(6.U)
        dut.io.Isposit.poke(true.B)
        dut.io.Outposit.poke(true.B)
        dut.io.src_posit_width.poke(32.U)
        dut.io.dst_posit_width.poke(16.U)
        dut.io.vector_size.poke(1.U)

        // 测试一个特定的posit数
        val posit32 = BigInt("80000000", 16)
        dut.io.posit_i1(0).poke(posit32.U)
        
        dut.clock.step()
        
        // 验证结果
        val expected16 = BigInt("8000", 16)
        dut.io.posit_o(0).expect(expected16.U)
      }
  }
} 