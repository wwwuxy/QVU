package  pvu

import chisel3._
import chisel3.util._

// Integer division module: convert the divisor to its reciprocal, then multiply it by the dividend
// Output is a 2*width q fixed-point number with width decimal places.

class IntDivider(val WIDTH: Int) extends Module {
  val io = IO(new Bundle {
    val dividend = Input(UInt(WIDTH.W))
    val divisor  = Input(UInt(WIDTH.W))
    
    val quotient = Output(UInt((2*WIDTH).W)) // Fixed-point number, 2*width bit width, width decimal places
  })

  // 1. Find the reciprocal
  val reciprocalMod = Module(new IntReciprocal(WIDTH))
  reciprocalMod.io.num_i := io.divisor
  val reciprocal = reciprocalMod.io.reciprocal_o // 2*width digits, width decimal places

  // 2. Shift the dividend left by width bits to get the same q format (2*width bits, width decimal places)
  val dividend_fixed = (io.dividend << WIDTH)((2*WIDTH)-1,0)

  // 3. Use radix4BoothMultiplier for multiplication
  // Both operands are 2*width bits, and the result is 4*width bits.
  val boothMult = Module(new Radix4BoothMultiplier(2*WIDTH, 2*WIDTH))
  boothMult.io.operand_a := dividend_fixed
  boothMult.io.operand_b := reciprocal

  val product = boothMult.io.sum_o + boothMult.io.carry_o // 4 * width results

  // 4. Shift right by `width` bits, retract to `2*width` bits q fixed-point format
  val quotient = (product >> WIDTH)((2*WIDTH)-1,0)

  io.quotient := quotient << WIDTH - 1
}
