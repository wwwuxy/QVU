// src/main/scala/pvu/Elaborate.scala
package qvu

import chisel3._
import circt.stage.ChiselStage
import chisel3.util._

/*
 * Elaborate the design into Verilog
 */
object Elaborate extends App {
  var filltlflag = Array[String]()
  var firtoolOpts = Array[String]()

  filltlflag = filltlflag ++ Array(
    "--target-dir", "vsrc",
    "--target:systemverilog"
  )
  firtoolOpts = firtoolOpts ++ Array(
    "--preserve-aggregate=all",
    "--disable-all-randomization"
  )

  // 只生成QvuTop，PositQuantizeToInt8会作为子模块自动包含
  ChiselStage.emitSystemVerilogFile(
    new QvuTop(
      MAX_POSIT_WIDTH = 32, 
      MAX_VECTOR_SIZE = 16, 
      MAX_ALIGN_WIDTH = 64, 
      ES = 2
    ),
    filltlflag,
    firtoolOpts
  )
}