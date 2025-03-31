error id: 
file://<WORKSPACE>/src/main/scala/pvu/FloatDecode.scala
empty definition using pc, found symbol in pc: 
empty definition using semanticdb
|empty definition using fallback
non-local guesses:
	 -

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
  *   expWidth : 指数域宽度（例如：单精度8位，双精度11位，半精度5位）
  *   fracWidth: 尾数域宽度（例如：单精23位，双精52位，半精10位）
  *
  * 根据 IEEE-754 标准，偏置 bias = 2^(expWidth-1) - 1，
  * 非规约数（subnormal）的实际指数为 1 - bias，
  * 规约数的实际指数为 exponent - bias。
  *
  * 输入：
  *   in: 浮点数数据，宽度 = 1 + expWidth + fracWidth，
  *       格式：[符号位][指数域][尾数域]
  *
  * 输出：
  *   sign     : 符号位（0为正，1为负）
  *   exp      : 实际指数（SInt类型，可为负）
  *   mantissa : 有效尾数（对于规约数隐含1，对于非规约数隐含0，宽度 = fracWidth+1）
  *   isNaN    : 表示输入为 NaN（指数全1且尾数非0）
  *   isInf    : 表示输入为无穷大（指数全1且尾数为0）
  *   isZero   : 表示输入为零（指数全0且尾数为0）
  */
class FloatDecode(val expWidth: Int, val fracWidth: Int) extends Module {
  val totalWidth = 1 + expWidth + fracWidth
  val bias = (1 << (expWidth - 1)) - 1

  val io = IO(new Bundle {
    val float    = Input(UInt(totalWidth.W))
    val sign     = Output(Bool())
    // 有效指数的宽度这里选用 expWidth+1 位（可表示正负）
    val exp      = Output(SInt((expWidth+1).W))
    // 有效尾数宽度 = fracWidth + 1（规约数隐含1，非规约数隐含0）
    val mantissa = Output(UInt((fracWidth+1).W))
    val isNaN    = Output(Bool())
    val isInf    = Output(Bool())
    val isZero   = Output(Bool())
  })

  // 位分解
  // 符号位：最高位
  val signBit = io.in(totalWidth - 1)
  // 指数域：紧接在符号位后面，宽度 expWidth 位
  val exponent = io.in(fracWidth + expWidth - 1, fracWidth)
  // 尾数域：低 fracWidth 位
  val fraction = io.in(fracWidth - 1, 0)

  // 特殊值检测
  // 判断指数是否全1：例如，单精度时 exponent === "hFF"
  val isExpAllOnes  = exponent === ((BigInt(1) << expWidth) - 1).U(expWidth.W)
  // 判断指数是否全0
  val isExpAllZeros = exponent === 0.U

  io.isInf  := isExpAllOnes && (fraction === 0.U)  // 无穷大：指数全1且尾数全0
  io.isNaN  := isExpAllOnes && (fraction =/= 0.U)  // NaN：指数全1且尾数非0
  io.isZero := isExpAllZeros && (fraction === 0.U)   // 零：指数全0且尾数全0

  // 有效指数和有效尾数计算
  // 对于非规约数（subnormal）：实际指数 = 1 - bias，尾数前隐含0
  // 对于规约数（normal）：实际指数 = exponent - bias，尾数前隐含1
  // 对于特殊值（NaN/Inf）：指数和尾数在后续计算中无意义，这里置为0或保留原尾数
  val effectiveExp      = Wire(SInt((expWidth+1).W))
  val effectiveMantissa = Wire(UInt((fracWidth+1).W))

  when (isExpAllZeros) {
    // 非规约数（Subnormal）
    effectiveExp      := (1 - bias).S
    effectiveMantissa := Cat(0.U(1.W), fraction)
  } .elsewhen (!isExpAllOnes) {
    // 规约数（Normal）
    effectiveExp      := (exponent.asSInt - bias.S)
    effectiveMantissa := Cat(1.U(1.W), fraction)
  } .otherwise {
    // 特殊值（NaN/Inf），指数和尾数无实际意义
    effectiveExp      := 0.S
    effectiveMantissa := fraction
  }

  // 输出各部分信号
  io.sign     := signBit
  io.exp      := effectiveExp
  io.mantissa := effectiveMantissa
}

/* 示例：实例化不同格式的解码单元
   - 单精度：expWidth = 8, fracWidth = 23  => 总位宽 32
   - 双精度：expWidth = 11, fracWidth = 52 => 总位宽 64
   - 半精度：expWidth = 5, fracWidth = 10  => 总位宽 16

   如：
   val singleDecoder = Module(new ParamFloatDecode(8, 23))
   val doubleDecoder = Module(new ParamFloatDecode(11, 52))
   val halfDecoder   = Module(new ParamFloatDecode(5, 10))
*/

```

#### Short summary: 

empty definition using pc, found symbol in pc: 