package pvu

import chisel3._
import chisel3.util._

// Integer Reciprocal Module
class IntReciprocal(val WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val num_i = Input(UInt(WIDTH.W))        // Enter an integer, the bit width is width

    val reciprocal_o = Output(UInt((2*WIDTH).W)) // Output countdown, q(1+width).width format
  })

  val num = io.num_i
  // Initial approximation x0 = (1 << WIDTH) / num
  // (1 << WIDTH) Representing 1.0 in fixed point
  val one_fixed = (BigInt(1) << WIDTH).U((2*WIDTH).W)
  val x0 = (one_fixed / num).asUInt //Initial value in Q(1+width).width format

  def nrIter(x: UInt, num: UInt): UInt = {
    // Fixed-point format：
    // x is Q(1+WIDTH).WIDTH，Width = 2*WIDTH
    // num is an integer (width bits)，like Q(WIDTH).0，The integer part is width digits, with no decimal places.

    // num * x:
    // num is U(WIDTH)
    // x is Q(1+WIDTH).WIDTH（width = 2*WIDTH, The low width bit is a decimal.）
    // num*x format is Q(1+WIDTH).WIDTH (width = 2*WIDTH)
    val num_x = (num * x)((2*WIDTH)-1,0)

    // two = 2.0 = 2 << WIDTH
    val two = (BigInt(2) << WIDTH).U((2 * WIDTH).W)
    //val two = (2.U << WIDTH)((2*WIDTH)-1,0)

    // diff = (2 - num*x)
    val diff = two - num_x

    // x*(2 - num*x)
    // x and diff format are Q(1+WIDTH).WIDTH
    // Q(2*(1+WIDTH)).(2*WIDTH)=Q(2+2*WIDTH)
    // Actually, 64-bit storage is needed, but since WIDTH is customized here, it is recommended to use 64-bit which is large enough (when WIDTH <= 32).
    val x_new_full = (x * diff)
    // The result of the multiplication is q(1+width).width with respect to both x and diff, and the total number of decimal places for the two added together is 2*width.
    // Shift right by width to return to q(1+width).width format
    val x_new = (x_new_full >> WIDTH)((2*WIDTH)-1,0)
    x_new
  }

  // The number of iterations can be adjusted as needed.
  // Generally, 2 to 4 iterations can achieve high accuracy.
  val x1 = nrIter(x0, num)
  val x2 = nrIter(x1, num)
  val x3 = nrIter(x2, num)

  // Use x3 as the final reciprocal approximation value
  io.reciprocal_o := x3
}


