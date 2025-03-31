//posit vector div unit

package pvu

import chisel3._
import chisel3.util._

class Div(val POSIT_WIDTH: Int, val VECTOR_SIZE: Int, val ALIGN_WIDTH: Int,  val ES :Int) extends Module {
  var nd: Int         = log2Ceil(POSIT_WIDTH - 1)
  var EXP_WIDTH: Int  = nd + ES + 1
  var FRAC_WIDTH: Int = POSIT_WIDTH - ES - 3
  var MUL_WIDTH: Int  = 2 * (FRAC_WIDTH + 1)

  val io = IO(new Bundle {
    val pir_sign1_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_sign2_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_exp2_i  = Input(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac1_i = Input(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH+1).W)))
    val pir_frac2_i = Input(Vec(VECTOR_SIZE, UInt((FRAC_WIDTH+1).W)))

    val pir_sign_o = Output(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp_o  = Output(Vec(VECTOR_SIZE, SInt(EXP_WIDTH.W)))
    val pir_frac_o = Output(Vec(VECTOR_SIZE, UInt(MUL_WIDTH.W)))
  })

//XOR operator
    for (i <- 0 until VECTOR_SIZE) {
        io.pir_sign_o(i)       := io.pir_sign1_i(i) ^ io.pir_sign2_i(i)
//Calculate the remainder
        val intdivider          = Module(new IntDivider(FRAC_WIDTH+1))
        intdivider.io.dividend := io.pir_frac1_i(i)
        intdivider.io.divisor  := io.pir_frac2_i(i)
        io.pir_frac_o(i)       := intdivider.io.quotient
//Calculate exponent, signed subtraction
        io.pir_exp_o(i)        := io.pir_exp1_i(i) - io.pir_exp2_i(i)
    }
}