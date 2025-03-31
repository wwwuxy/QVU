error id: `<error>`#`<error>`.
file://<WORKSPACE>/src/main/scala/pvu/FloatDecode.scala
empty definition using pc, found symbol in pc: 
empty definition using semanticdb
|empty definition using fallback
non-local guesses:
	 -chisel3/io/Frac.
	 -chisel3/io/Frac#
	 -chisel3/io/Frac().
	 -chisel3/util/io/Frac.
	 -chisel3/util/io/Frac#
	 -chisel3/util/io/Frac().
	 -io/Frac.
	 -io/Frac#
	 -io/Frac().
	 -scala/Predef.io.Frac.
	 -scala/Predef.io.Frac#
	 -scala/Predef.io.Frac().

Document text:

```scala
import chisel3._
import chisel3.util._

/**
  * ParamFloatDecode
  *
  * 参数化的浮点数解码单元，可解码 IEEE-754 格式的浮点数
  *
  * 参数：
  *   EXP_WIDTH : 指数域宽度（例如：单精度8位，双精度11位，半精度5位）
  *   FRAC_WIDTH: 尾数域宽度（例如：单精23位，双精52位，半精10位）
  *
  * 根据 IEEE-754 标准，偏置 BIAS = 2^(EXP_WIDTH-1) - 1，
  * 非规约数（subnormal）的实际指数为 1 - BIAS，
  * 规约数的实际指数为 exponent - BIAS。
  *
  * 输入：
  *   in: 浮点数数据，宽度 = 1 + EXP_WIDTH + FRAC_WIDTH，
  *       格式：[符号位][指数域][尾数域]
  *
  * 输出：
  *   sign     : 符号位（0为正，1为负）
  *   exp      : 实际指数（SInt类型，可为负）
  *   mantissa : 有效尾数（对于规约数隐含1，对于非规约数隐含0，宽度 = FRAC_WIDTH+1）
  *   isNaN    : 表示输入为 NaN（指数全1且尾数非0）
  *   isInf    : 表示输入为无穷大（指数全1且尾数为0）
  *   isZero   : 表示输入为零（指数全0且尾数为0）
  */
class FloatDecode(val EXP_WIDTH: Int, val FRAC_WIDTH: Int) extends Module {
  val TOTAL_WIDTH: Int = 1 + EXP_WIDTH + FRAC_WIDTH
  val BIAS: Int  = (1 << (EXP_WIDTH - 1)) - 1

  val io = IO(new Bundle {
    val float    = Input(UInt(TOTAL_WIDTH.W))
    
    val Sign     = Output(Bool())
    // 有效指数的宽度这里选用 EXP_WIDTH+1 位（可表示正负）
    val Exp      = Output(SInt((EXP_WIDTH+1).W))
    // 有效尾数宽度 = FRAC_WIDTH + 1（规约数隐含1，非规约数隐含0）
    val Fraction = Output(UInt((FRAC_WIDTH+1).W))
    val isNaN    = Output(Bool())
    val isInf    = Output(Bool())
    val isZero   = Output(Bool())
  })

  // 位分解
  // 符号位：最高位
  val signBit = io.in(TOTAL_WIDTH - 1)
  // 指数域：紧接在符号位后面，宽度 EXP_WIDTH 位
  val exponent = io.in(FRAC_WIDTH + EXP_WIDTH - 1, FRAC_WIDTH)
  // 尾数域：低 FRAC_WIDTH 位
  val fraction = io.in(FRAC_WIDTH - 1, 0)

  // 特殊值检测
  // 判断指数是否全1：例如，单精度时 exponent === "hFF"
  val isExpAllOnes  = exponent === ((BigInt(1) << EXP_WIDTH) - 1).U(EXP_WIDTH.W)
  // 判断指数是否全0
  val isExpAllZeros = exponent === 0.U

  io.isInf  := isExpAllOnes && (fraction === 0.U)  // 无穷大：指数全1且尾数全0
  io.isNaN  := isExpAllOnes && (fraction =/= 0.U)  // NaN：指数全1且尾数非0
  io.isZero := isExpAllZeros && (fraction === 0.U)   // 零：指数全0且尾数全0

  // 有效指数和有效尾数计算
  // 对于非规约数（subnormal）：实际指数 = 1 - BIAS，尾数前隐含0
  // 对于规约数（normal）：实际指数 = exponent - BIAS，尾数前隐含1
  // 对于特殊值（NaN/Inf）：指数和尾数在后续计算中无意义，这里置为0或保留原尾数
  val effectiveExp      = Wire(SInt((EXP_WIDTH+1).W))
  val effectiveMantissa = Wire(UInt((FRAC_WIDTH+1).W))

  when (isExpAllZeros) {
    // 非规约数（Subnormal）
    effectiveExp      := (1 - BIAS).S
    effectiveMantissa := Cat(0.U(1.W), fraction)
  } .elsewhen (!isExpAllOnes) {
    // 规约数（Normal）
    effectiveExp      := (exponent.asSInt - BIAS.S)
    effectiveMantissa := Cat(1.U(1.W), fraction)
  } .otherwise {
    // 特殊值（NaN/Inf），指数和尾数无实际意义
    effectiveExp      := 0.S
    effectiveMantissa := fraction
  }

  // 输出各部分信号
  io.Sign     := signBit
  io.Exp      := effectiveExp
  io.Frac := effectiveMantissa
}

/* 示例：实例化不同格式的解码单元
   - 单精度：EXP_WIDTH = 8, FRAC_WIDTH = 23  => 总位宽 32
   - 双精度：EXP_WIDTH = 11, FRAC_WIDTH = 52 => 总位宽 64
   - 半精度：EXP_WIDTH = 5, FRAC_WIDTH = 10  => 总位宽 16

   如：
   val singleDecoder = Module(new ParamFloatDecode(8, 23))
   val doubleDecoder = Module(new ParamFloatDecode(11, 52))
   val halfDecoder   = Module(new ParamFloatDecode(5, 10))
*/

```

#### Short summary: 

empty definition using pc, found symbol in pc: 