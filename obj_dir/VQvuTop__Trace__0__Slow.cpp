// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQvuTop__Syms.h"


VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+695,"clock", false,-1);
    tracep->declBit(c+696,"reset", false,-1);
    tracep->declBus(c+697,"io_posit_i_0", false,-1, 31,0);
    tracep->declBus(c+698,"io_posit_i_1", false,-1, 31,0);
    tracep->declBus(c+699,"io_posit_i_2", false,-1, 31,0);
    tracep->declBus(c+700,"io_posit_i_3", false,-1, 31,0);
    tracep->declBus(c+701,"io_posit_i_4", false,-1, 31,0);
    tracep->declBus(c+702,"io_posit_i_5", false,-1, 31,0);
    tracep->declBus(c+703,"io_posit_i_6", false,-1, 31,0);
    tracep->declBus(c+704,"io_posit_i_7", false,-1, 31,0);
    tracep->declBus(c+705,"io_posit_i_8", false,-1, 31,0);
    tracep->declBus(c+706,"io_posit_i_9", false,-1, 31,0);
    tracep->declBus(c+707,"io_posit_i_10", false,-1, 31,0);
    tracep->declBus(c+708,"io_posit_i_11", false,-1, 31,0);
    tracep->declBus(c+709,"io_posit_i_12", false,-1, 31,0);
    tracep->declBus(c+710,"io_posit_i_13", false,-1, 31,0);
    tracep->declBus(c+711,"io_posit_i_14", false,-1, 31,0);
    tracep->declBus(c+712,"io_posit_i_15", false,-1, 31,0);
    tracep->declBus(c+713,"io_op", false,-1, 3,0);
    tracep->declBit(c+714,"io_Isposit", false,-1);
    tracep->declBit(c+715,"io_Outposit", false,-1);
    tracep->declQuad(c+716,"io_float_i_0", false,-1, 63,0);
    tracep->declQuad(c+718,"io_float_i_1", false,-1, 63,0);
    tracep->declQuad(c+720,"io_float_i_2", false,-1, 63,0);
    tracep->declQuad(c+722,"io_float_i_3", false,-1, 63,0);
    tracep->declQuad(c+724,"io_float_i_4", false,-1, 63,0);
    tracep->declQuad(c+726,"io_float_i_5", false,-1, 63,0);
    tracep->declQuad(c+728,"io_float_i_6", false,-1, 63,0);
    tracep->declQuad(c+730,"io_float_i_7", false,-1, 63,0);
    tracep->declQuad(c+732,"io_float_i_8", false,-1, 63,0);
    tracep->declQuad(c+734,"io_float_i_9", false,-1, 63,0);
    tracep->declQuad(c+736,"io_float_i_10", false,-1, 63,0);
    tracep->declQuad(c+738,"io_float_i_11", false,-1, 63,0);
    tracep->declQuad(c+740,"io_float_i_12", false,-1, 63,0);
    tracep->declQuad(c+742,"io_float_i_13", false,-1, 63,0);
    tracep->declQuad(c+744,"io_float_i_14", false,-1, 63,0);
    tracep->declQuad(c+746,"io_float_i_15", false,-1, 63,0);
    tracep->declBus(c+748,"io_float_mode", false,-1, 2,0);
    tracep->declBit(c+749,"io_float_posit", false,-1);
    tracep->declBus(c+750,"io_src_posit_width", false,-1, 5,0);
    tracep->declBus(c+751,"io_vector_size", false,-1, 2,0);
    tracep->declBus(c+752,"io_dst_posit_width", false,-1, 5,0);
    tracep->declQuad(c+753,"io_float_o_0", false,-1, 63,0);
    tracep->declQuad(c+755,"io_float_o_1", false,-1, 63,0);
    tracep->declQuad(c+757,"io_float_o_2", false,-1, 63,0);
    tracep->declQuad(c+759,"io_float_o_3", false,-1, 63,0);
    tracep->declQuad(c+761,"io_float_o_4", false,-1, 63,0);
    tracep->declQuad(c+763,"io_float_o_5", false,-1, 63,0);
    tracep->declQuad(c+765,"io_float_o_6", false,-1, 63,0);
    tracep->declQuad(c+767,"io_float_o_7", false,-1, 63,0);
    tracep->declQuad(c+769,"io_float_o_8", false,-1, 63,0);
    tracep->declQuad(c+771,"io_float_o_9", false,-1, 63,0);
    tracep->declQuad(c+773,"io_float_o_10", false,-1, 63,0);
    tracep->declQuad(c+775,"io_float_o_11", false,-1, 63,0);
    tracep->declQuad(c+777,"io_float_o_12", false,-1, 63,0);
    tracep->declQuad(c+779,"io_float_o_13", false,-1, 63,0);
    tracep->declQuad(c+781,"io_float_o_14", false,-1, 63,0);
    tracep->declQuad(c+783,"io_float_o_15", false,-1, 63,0);
    tracep->declBus(c+785,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+786,"io_posit_o_1", false,-1, 31,0);
    tracep->declBus(c+787,"io_posit_o_2", false,-1, 31,0);
    tracep->declBus(c+788,"io_posit_o_3", false,-1, 31,0);
    tracep->declBus(c+789,"io_posit_o_4", false,-1, 31,0);
    tracep->declBus(c+790,"io_posit_o_5", false,-1, 31,0);
    tracep->declBus(c+791,"io_posit_o_6", false,-1, 31,0);
    tracep->declBus(c+792,"io_posit_o_7", false,-1, 31,0);
    tracep->declBus(c+793,"io_posit_o_8", false,-1, 31,0);
    tracep->declBus(c+794,"io_posit_o_9", false,-1, 31,0);
    tracep->declBus(c+795,"io_posit_o_10", false,-1, 31,0);
    tracep->declBus(c+796,"io_posit_o_11", false,-1, 31,0);
    tracep->declBus(c+797,"io_posit_o_12", false,-1, 31,0);
    tracep->declBus(c+798,"io_posit_o_13", false,-1, 31,0);
    tracep->declBus(c+799,"io_posit_o_14", false,-1, 31,0);
    tracep->declBus(c+800,"io_posit_o_15", false,-1, 31,0);
    tracep->declBus(c+801,"io_int_o_0", false,-1, 31,0);
    tracep->declBus(c+802,"io_int_o_1", false,-1, 31,0);
    tracep->declBus(c+803,"io_int_o_2", false,-1, 31,0);
    tracep->declBus(c+804,"io_int_o_3", false,-1, 31,0);
    tracep->declBus(c+805,"io_int_o_4", false,-1, 31,0);
    tracep->declBus(c+806,"io_int_o_5", false,-1, 31,0);
    tracep->declBus(c+807,"io_int_o_6", false,-1, 31,0);
    tracep->declBus(c+808,"io_int_o_7", false,-1, 31,0);
    tracep->declBus(c+809,"io_int_o_8", false,-1, 31,0);
    tracep->declBus(c+810,"io_int_o_9", false,-1, 31,0);
    tracep->declBus(c+811,"io_int_o_10", false,-1, 31,0);
    tracep->declBus(c+812,"io_int_o_11", false,-1, 31,0);
    tracep->declBus(c+813,"io_int_o_12", false,-1, 31,0);
    tracep->declBus(c+814,"io_int_o_13", false,-1, 31,0);
    tracep->declBus(c+815,"io_int_o_14", false,-1, 31,0);
    tracep->declBus(c+816,"io_int_o_15", false,-1, 31,0);
    tracep->declBit(c+817,"io_reset_window", false,-1);
    tracep->pushNamePrefix("QvuTop ");
    tracep->declBit(c+695,"clock", false,-1);
    tracep->declBit(c+696,"reset", false,-1);
    tracep->declBus(c+697,"io_posit_i_0", false,-1, 31,0);
    tracep->declBus(c+698,"io_posit_i_1", false,-1, 31,0);
    tracep->declBus(c+699,"io_posit_i_2", false,-1, 31,0);
    tracep->declBus(c+700,"io_posit_i_3", false,-1, 31,0);
    tracep->declBus(c+701,"io_posit_i_4", false,-1, 31,0);
    tracep->declBus(c+702,"io_posit_i_5", false,-1, 31,0);
    tracep->declBus(c+703,"io_posit_i_6", false,-1, 31,0);
    tracep->declBus(c+704,"io_posit_i_7", false,-1, 31,0);
    tracep->declBus(c+705,"io_posit_i_8", false,-1, 31,0);
    tracep->declBus(c+706,"io_posit_i_9", false,-1, 31,0);
    tracep->declBus(c+707,"io_posit_i_10", false,-1, 31,0);
    tracep->declBus(c+708,"io_posit_i_11", false,-1, 31,0);
    tracep->declBus(c+709,"io_posit_i_12", false,-1, 31,0);
    tracep->declBus(c+710,"io_posit_i_13", false,-1, 31,0);
    tracep->declBus(c+711,"io_posit_i_14", false,-1, 31,0);
    tracep->declBus(c+712,"io_posit_i_15", false,-1, 31,0);
    tracep->declBus(c+713,"io_op", false,-1, 3,0);
    tracep->declBit(c+714,"io_Isposit", false,-1);
    tracep->declBit(c+715,"io_Outposit", false,-1);
    tracep->declQuad(c+716,"io_float_i_0", false,-1, 63,0);
    tracep->declQuad(c+718,"io_float_i_1", false,-1, 63,0);
    tracep->declQuad(c+720,"io_float_i_2", false,-1, 63,0);
    tracep->declQuad(c+722,"io_float_i_3", false,-1, 63,0);
    tracep->declQuad(c+724,"io_float_i_4", false,-1, 63,0);
    tracep->declQuad(c+726,"io_float_i_5", false,-1, 63,0);
    tracep->declQuad(c+728,"io_float_i_6", false,-1, 63,0);
    tracep->declQuad(c+730,"io_float_i_7", false,-1, 63,0);
    tracep->declQuad(c+732,"io_float_i_8", false,-1, 63,0);
    tracep->declQuad(c+734,"io_float_i_9", false,-1, 63,0);
    tracep->declQuad(c+736,"io_float_i_10", false,-1, 63,0);
    tracep->declQuad(c+738,"io_float_i_11", false,-1, 63,0);
    tracep->declQuad(c+740,"io_float_i_12", false,-1, 63,0);
    tracep->declQuad(c+742,"io_float_i_13", false,-1, 63,0);
    tracep->declQuad(c+744,"io_float_i_14", false,-1, 63,0);
    tracep->declQuad(c+746,"io_float_i_15", false,-1, 63,0);
    tracep->declBus(c+748,"io_float_mode", false,-1, 2,0);
    tracep->declBit(c+749,"io_float_posit", false,-1);
    tracep->declBus(c+750,"io_src_posit_width", false,-1, 5,0);
    tracep->declBus(c+751,"io_vector_size", false,-1, 2,0);
    tracep->declBus(c+752,"io_dst_posit_width", false,-1, 5,0);
    tracep->declQuad(c+753,"io_float_o_0", false,-1, 63,0);
    tracep->declQuad(c+755,"io_float_o_1", false,-1, 63,0);
    tracep->declQuad(c+757,"io_float_o_2", false,-1, 63,0);
    tracep->declQuad(c+759,"io_float_o_3", false,-1, 63,0);
    tracep->declQuad(c+761,"io_float_o_4", false,-1, 63,0);
    tracep->declQuad(c+763,"io_float_o_5", false,-1, 63,0);
    tracep->declQuad(c+765,"io_float_o_6", false,-1, 63,0);
    tracep->declQuad(c+767,"io_float_o_7", false,-1, 63,0);
    tracep->declQuad(c+769,"io_float_o_8", false,-1, 63,0);
    tracep->declQuad(c+771,"io_float_o_9", false,-1, 63,0);
    tracep->declQuad(c+773,"io_float_o_10", false,-1, 63,0);
    tracep->declQuad(c+775,"io_float_o_11", false,-1, 63,0);
    tracep->declQuad(c+777,"io_float_o_12", false,-1, 63,0);
    tracep->declQuad(c+779,"io_float_o_13", false,-1, 63,0);
    tracep->declQuad(c+781,"io_float_o_14", false,-1, 63,0);
    tracep->declQuad(c+783,"io_float_o_15", false,-1, 63,0);
    tracep->declBus(c+785,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+786,"io_posit_o_1", false,-1, 31,0);
    tracep->declBus(c+787,"io_posit_o_2", false,-1, 31,0);
    tracep->declBus(c+788,"io_posit_o_3", false,-1, 31,0);
    tracep->declBus(c+789,"io_posit_o_4", false,-1, 31,0);
    tracep->declBus(c+790,"io_posit_o_5", false,-1, 31,0);
    tracep->declBus(c+791,"io_posit_o_6", false,-1, 31,0);
    tracep->declBus(c+792,"io_posit_o_7", false,-1, 31,0);
    tracep->declBus(c+793,"io_posit_o_8", false,-1, 31,0);
    tracep->declBus(c+794,"io_posit_o_9", false,-1, 31,0);
    tracep->declBus(c+795,"io_posit_o_10", false,-1, 31,0);
    tracep->declBus(c+796,"io_posit_o_11", false,-1, 31,0);
    tracep->declBus(c+797,"io_posit_o_12", false,-1, 31,0);
    tracep->declBus(c+798,"io_posit_o_13", false,-1, 31,0);
    tracep->declBus(c+799,"io_posit_o_14", false,-1, 31,0);
    tracep->declBus(c+800,"io_posit_o_15", false,-1, 31,0);
    tracep->declBus(c+801,"io_int_o_0", false,-1, 31,0);
    tracep->declBus(c+802,"io_int_o_1", false,-1, 31,0);
    tracep->declBus(c+803,"io_int_o_2", false,-1, 31,0);
    tracep->declBus(c+804,"io_int_o_3", false,-1, 31,0);
    tracep->declBus(c+805,"io_int_o_4", false,-1, 31,0);
    tracep->declBus(c+806,"io_int_o_5", false,-1, 31,0);
    tracep->declBus(c+807,"io_int_o_6", false,-1, 31,0);
    tracep->declBus(c+808,"io_int_o_7", false,-1, 31,0);
    tracep->declBus(c+809,"io_int_o_8", false,-1, 31,0);
    tracep->declBus(c+810,"io_int_o_9", false,-1, 31,0);
    tracep->declBus(c+811,"io_int_o_10", false,-1, 31,0);
    tracep->declBus(c+812,"io_int_o_11", false,-1, 31,0);
    tracep->declBus(c+813,"io_int_o_12", false,-1, 31,0);
    tracep->declBus(c+814,"io_int_o_13", false,-1, 31,0);
    tracep->declBus(c+815,"io_int_o_14", false,-1, 31,0);
    tracep->declBus(c+816,"io_int_o_15", false,-1, 31,0);
    tracep->declBit(c+817,"io_reset_window", false,-1);
    tracep->declBus(c+1,"ACTUAL_VECTOR_SIZE", false,-1, 4,0);
    tracep->declBus(c+494,"resetCounter", false,-1, 4,0);
    tracep->declArray(c+477,"pir_frac", false,-1, 527,0);
    tracep->pushNamePrefix("decode ");
    tracep->declArray(c+818,"io_posit", false,-1, 511,0);
    tracep->declBus(c+2,"io_Sign", false,-1, 15,0);
    tracep->declArray(c+834,"io_Exp", false,-1, 127,0);
    tracep->declArray(c+838,"io_Frac", false,-1, 447,0);
    tracep->declBus(c+3,"isNaR", false,-1, 15,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+4,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+97,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+98,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_1 ");
    tracep->declBus(c+5,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+201,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+202,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_10 ");
    tracep->declBus(c+6,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+137,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+138,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_11 ");
    tracep->declBus(c+7,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+129,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+130,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_12 ");
    tracep->declBus(c+8,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+121,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+122,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_13 ");
    tracep->declBus(c+9,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+113,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+114,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_14 ");
    tracep->declBus(c+10,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+105,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+106,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_15 ");
    tracep->declBus(c+11,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+89,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+90,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_2 ");
    tracep->declBus(c+12,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+193,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+194,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_3 ");
    tracep->declBus(c+13,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+185,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+186,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_4 ");
    tracep->declBus(c+14,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+177,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+178,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_5 ");
    tracep->declBus(c+15,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+169,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+170,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_6 ");
    tracep->declBus(c+16,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+161,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+162,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_7 ");
    tracep->declBus(c+17,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+209,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+210,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_8 ");
    tracep->declBus(c+18,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+153,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+154,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_9 ");
    tracep->declBus(c+19,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+145,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+146,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("floatDecode ");
    tracep->declArray(c+852,"io_float", false,-1, 511,0);
    tracep->declBus(c+868,"io_Sign", false,-1, 15,0);
    tracep->declArray(c+20,"io_Exp", false,-1, 143,0);
    tracep->declArray(c+25,"io_Frac", false,-1, 383,0);
    tracep->declBus(c+37,"io_isNaN", false,-1, 15,0);
    tracep->declBus(c+38,"io_isInf", false,-1, 15,0);
    tracep->declBus(c+39,"io_isZero", false,-1, 15,0);
    tracep->declBit(c+40,"isExpAllZeros", false,-1);
    tracep->declBit(c+41,"isExpAllZeros_1", false,-1);
    tracep->declBit(c+42,"isExpAllZeros_2", false,-1);
    tracep->declBit(c+43,"isExpAllZeros_3", false,-1);
    tracep->declBit(c+44,"isExpAllZeros_4", false,-1);
    tracep->declBit(c+45,"isExpAllZeros_5", false,-1);
    tracep->declBit(c+46,"isExpAllZeros_6", false,-1);
    tracep->declBit(c+47,"isExpAllZeros_7", false,-1);
    tracep->declBit(c+48,"isExpAllZeros_8", false,-1);
    tracep->declBit(c+49,"isExpAllZeros_9", false,-1);
    tracep->declBit(c+50,"isExpAllZeros_10", false,-1);
    tracep->declBit(c+51,"isExpAllZeros_11", false,-1);
    tracep->declBit(c+52,"isExpAllZeros_12", false,-1);
    tracep->declBit(c+53,"isExpAllZeros_13", false,-1);
    tracep->declBit(c+54,"isExpAllZeros_14", false,-1);
    tracep->declBit(c+55,"isExpAllZeros_15", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantizeFP16 ");
    tracep->declBus(c+56,"io_pir_sign_i", false,-1, 15,0);
    tracep->declArray(c+217,"io_pir_exp_i", false,-1, 127,0);
    tracep->declArray(c+477,"io_pir_frac_i", false,-1, 527,0);
    tracep->declArray(c+221,"io_fp16_o", false,-1, 255,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantizeFP4 ");
    tracep->declBit(c+695,"clock", false,-1);
    tracep->declBit(c+696,"reset", false,-1);
    tracep->declBus(c+56,"io_pir_sign_i", false,-1, 15,0);
    tracep->declArray(c+217,"io_pir_exp_i", false,-1, 127,0);
    tracep->declArray(c+477,"io_pir_frac_i", false,-1, 527,0);
    tracep->declQuad(c+265,"io_fp4_o", false,-1, 63,0);
    tracep->declArray(c+495,"windowMax", false,-1, 263,0);
    tracep->declArray(c+504,"windowMin", false,-1, 263,0);
    tracep->declBus(c+513,"windowValid", false,-1, 7,0);
    tracep->declBus(c+514,"windowPtr", false,-1, 2,0);
    tracep->declQuad(c+515,"globalMax", false,-1, 32,0);
    tracep->declQuad(c+517,"globalMin", false,-1, 32,0);
    tracep->declQuad(c+519,"globalScale", false,-1, 32,0);
    tracep->declQuad(c+521,"batchMax", false,-1, 32,0);
    tracep->declQuad(c+523,"batchMin", false,-1, 32,0);
    tracep->declBit(c+525,"batchHasData", false,-1);
    tracep->declBus(c+526,"state", false,-1, 1,0);
    tracep->declQuad(c+267,"valueAbs", false,-1, 32,0);
    tracep->declBus(c+269,"quantIndex", false,-1, 2,0);
    tracep->declQuad(c+270,"valueAbs_1", false,-1, 32,0);
    tracep->declBus(c+272,"quantIndex_1", false,-1, 2,0);
    tracep->declQuad(c+273,"valueAbs_2", false,-1, 32,0);
    tracep->declBus(c+275,"quantIndex_2", false,-1, 2,0);
    tracep->declQuad(c+276,"valueAbs_3", false,-1, 32,0);
    tracep->declBus(c+278,"quantIndex_3", false,-1, 2,0);
    tracep->declQuad(c+279,"valueAbs_4", false,-1, 32,0);
    tracep->declBus(c+281,"quantIndex_4", false,-1, 2,0);
    tracep->declQuad(c+282,"valueAbs_5", false,-1, 32,0);
    tracep->declBus(c+284,"quantIndex_5", false,-1, 2,0);
    tracep->declQuad(c+285,"valueAbs_6", false,-1, 32,0);
    tracep->declBus(c+287,"quantIndex_6", false,-1, 2,0);
    tracep->declQuad(c+288,"valueAbs_7", false,-1, 32,0);
    tracep->declBus(c+290,"quantIndex_7", false,-1, 2,0);
    tracep->declQuad(c+291,"valueAbs_8", false,-1, 32,0);
    tracep->declBus(c+293,"quantIndex_8", false,-1, 2,0);
    tracep->declQuad(c+294,"valueAbs_9", false,-1, 32,0);
    tracep->declBus(c+296,"quantIndex_9", false,-1, 2,0);
    tracep->declQuad(c+297,"valueAbs_10", false,-1, 32,0);
    tracep->declBus(c+299,"quantIndex_10", false,-1, 2,0);
    tracep->declQuad(c+300,"valueAbs_11", false,-1, 32,0);
    tracep->declBus(c+302,"quantIndex_11", false,-1, 2,0);
    tracep->declQuad(c+303,"valueAbs_12", false,-1, 32,0);
    tracep->declBus(c+305,"quantIndex_12", false,-1, 2,0);
    tracep->declQuad(c+306,"valueAbs_13", false,-1, 32,0);
    tracep->declBus(c+308,"quantIndex_13", false,-1, 2,0);
    tracep->declQuad(c+309,"valueAbs_14", false,-1, 32,0);
    tracep->declBus(c+311,"quantIndex_14", false,-1, 2,0);
    tracep->declQuad(c+312,"valueAbs_15", false,-1, 32,0);
    tracep->declBus(c+314,"quantIndex_15", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declQuad(c+527,"effectiveMax_leftMax_leftMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+529,"effectiveMax_leftMax_leftMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+531,"effectiveMax_leftMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+533,"effectiveMax_leftMax_rightMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+535,"effectiveMax_leftMax_rightMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+537,"effectiveMax_leftMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+539,"effectiveMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+541,"effectiveMax_rightMax_leftMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+543,"effectiveMax_rightMax_leftMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+545,"effectiveMax_rightMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+547,"effectiveMax_rightMax_rightMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+549,"effectiveMax_rightMax_rightMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+551,"effectiveMax_rightMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+553,"effectiveMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+555,"effectiveMax", false,-1, 32,0);
    tracep->declQuad(c+557,"effectiveMin_leftMin_leftMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+559,"effectiveMin_leftMin_leftMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+561,"effectiveMin_leftMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+563,"effectiveMin_leftMin_rightMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+565,"effectiveMin_leftMin_rightMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+567,"effectiveMin_leftMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+569,"effectiveMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+571,"effectiveMin_rightMin_leftMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+573,"effectiveMin_rightMin_leftMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+575,"effectiveMin_rightMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+577,"effectiveMin_rightMin_rightMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+579,"effectiveMin_rightMin_rightMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+581,"effectiveMin_rightMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+583,"effectiveMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+585,"effectiveMin", false,-1, 32,0);
    tracep->declQuad(c+587,"dataRange", false,-1, 32,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("quantizeFP8 ");
    tracep->declBus(c+56,"io_pir_sign_i", false,-1, 15,0);
    tracep->declArray(c+217,"io_pir_exp_i", false,-1, 127,0);
    tracep->declArray(c+477,"io_pir_frac_i", false,-1, 527,0);
    tracep->declArray(c+229,"io_fp8_o", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantizeInt4 ");
    tracep->declBit(c+695,"clock", false,-1);
    tracep->declBit(c+696,"reset", false,-1);
    tracep->declBus(c+56,"io_pir_sign_i", false,-1, 15,0);
    tracep->declArray(c+217,"io_pir_exp_i", false,-1, 127,0);
    tracep->declArray(c+477,"io_pir_frac_i", false,-1, 527,0);
    tracep->declQuad(c+315,"io_int4_o", false,-1, 63,0);
    tracep->declQuad(c+589,"globalMax", false,-1, 32,0);
    tracep->declQuad(c+591,"globalMin", false,-1, 32,0);
    tracep->declQuad(c+593,"globalScale", false,-1, 32,0);
    tracep->declQuad(c+595,"globalOffset", false,-1, 32,0);
    tracep->declQuad(c+597,"batchMax", false,-1, 32,0);
    tracep->declQuad(c+599,"batchMin", false,-1, 32,0);
    tracep->declBit(c+601,"batchHasData", false,-1);
    tracep->declBus(c+602,"state", false,-1, 1,0);
    tracep->declArray(c+603,"histogram", false,-1, 127,0);
    tracep->declBus(c+607,"histogramTotal", false,-1, 19,0);
    tracep->declBus(c+233,"shiftVal", false,-1, 5,0);
    tracep->declBus(c+234,"shiftedFrac", false,-1, 31,0);
    tracep->declBus(c+235,"shiftVal_1", false,-1, 5,0);
    tracep->declBus(c+236,"shiftedFrac_1", false,-1, 31,0);
    tracep->declBus(c+237,"shiftVal_2", false,-1, 5,0);
    tracep->declBus(c+238,"shiftedFrac_2", false,-1, 31,0);
    tracep->declBus(c+239,"shiftVal_3", false,-1, 5,0);
    tracep->declBus(c+240,"shiftedFrac_3", false,-1, 31,0);
    tracep->declBus(c+241,"shiftVal_4", false,-1, 5,0);
    tracep->declBus(c+242,"shiftedFrac_4", false,-1, 31,0);
    tracep->declBus(c+243,"shiftVal_5", false,-1, 5,0);
    tracep->declBus(c+244,"shiftedFrac_5", false,-1, 31,0);
    tracep->declBus(c+245,"shiftVal_6", false,-1, 5,0);
    tracep->declBus(c+246,"shiftedFrac_6", false,-1, 31,0);
    tracep->declBus(c+247,"shiftVal_7", false,-1, 5,0);
    tracep->declBus(c+248,"shiftedFrac_7", false,-1, 31,0);
    tracep->declBus(c+249,"shiftVal_8", false,-1, 5,0);
    tracep->declBus(c+250,"shiftedFrac_8", false,-1, 31,0);
    tracep->declBus(c+251,"shiftVal_9", false,-1, 5,0);
    tracep->declBus(c+252,"shiftedFrac_9", false,-1, 31,0);
    tracep->declBus(c+253,"shiftVal_10", false,-1, 5,0);
    tracep->declBus(c+254,"shiftedFrac_10", false,-1, 31,0);
    tracep->declBus(c+255,"shiftVal_11", false,-1, 5,0);
    tracep->declBus(c+256,"shiftedFrac_11", false,-1, 31,0);
    tracep->declBus(c+257,"shiftVal_12", false,-1, 5,0);
    tracep->declBus(c+258,"shiftedFrac_12", false,-1, 31,0);
    tracep->declBus(c+259,"shiftVal_13", false,-1, 5,0);
    tracep->declBus(c+260,"shiftedFrac_13", false,-1, 31,0);
    tracep->declBus(c+261,"shiftVal_14", false,-1, 5,0);
    tracep->declBus(c+262,"shiftedFrac_14", false,-1, 31,0);
    tracep->declBus(c+263,"shiftVal_15", false,-1, 5,0);
    tracep->declBus(c+264,"shiftedFrac_15", false,-1, 31,0);
    tracep->declQuad(c+317,"scaledValue", false,-1, 33,0);
    tracep->declQuad(c+319,"remainder", false,-1, 32,0);
    tracep->declQuad(c+321,"tempIdx", false,-1, 33,0);
    tracep->declBit(c+323,"needRounding", false,-1);
    tracep->declBus(c+324,"roundingDirection", false,-1, 1,0);
    tracep->declQuad(c+325,"quantizedValue", false,-1, 32,0);
    tracep->declQuad(c+327,"scaledValue_1", false,-1, 33,0);
    tracep->declQuad(c+329,"remainder_1", false,-1, 32,0);
    tracep->declQuad(c+331,"tempIdx_1", false,-1, 33,0);
    tracep->declBit(c+333,"needRounding_1", false,-1);
    tracep->declBus(c+334,"roundingDirection_1", false,-1, 1,0);
    tracep->declQuad(c+335,"quantizedValue_1", false,-1, 32,0);
    tracep->declQuad(c+337,"scaledValue_2", false,-1, 33,0);
    tracep->declQuad(c+339,"remainder_2", false,-1, 32,0);
    tracep->declQuad(c+341,"tempIdx_2", false,-1, 33,0);
    tracep->declBit(c+343,"needRounding_2", false,-1);
    tracep->declBus(c+344,"roundingDirection_2", false,-1, 1,0);
    tracep->declQuad(c+345,"quantizedValue_2", false,-1, 32,0);
    tracep->declQuad(c+347,"scaledValue_3", false,-1, 33,0);
    tracep->declQuad(c+349,"remainder_3", false,-1, 32,0);
    tracep->declQuad(c+351,"tempIdx_3", false,-1, 33,0);
    tracep->declBit(c+353,"needRounding_3", false,-1);
    tracep->declBus(c+354,"roundingDirection_3", false,-1, 1,0);
    tracep->declQuad(c+355,"quantizedValue_3", false,-1, 32,0);
    tracep->declQuad(c+357,"scaledValue_4", false,-1, 33,0);
    tracep->declQuad(c+359,"remainder_4", false,-1, 32,0);
    tracep->declQuad(c+361,"tempIdx_4", false,-1, 33,0);
    tracep->declBit(c+363,"needRounding_4", false,-1);
    tracep->declBus(c+364,"roundingDirection_4", false,-1, 1,0);
    tracep->declQuad(c+365,"quantizedValue_4", false,-1, 32,0);
    tracep->declQuad(c+367,"scaledValue_5", false,-1, 33,0);
    tracep->declQuad(c+369,"remainder_5", false,-1, 32,0);
    tracep->declQuad(c+371,"tempIdx_5", false,-1, 33,0);
    tracep->declBit(c+373,"needRounding_5", false,-1);
    tracep->declBus(c+374,"roundingDirection_5", false,-1, 1,0);
    tracep->declQuad(c+375,"quantizedValue_5", false,-1, 32,0);
    tracep->declQuad(c+377,"scaledValue_6", false,-1, 33,0);
    tracep->declQuad(c+379,"remainder_6", false,-1, 32,0);
    tracep->declQuad(c+381,"tempIdx_6", false,-1, 33,0);
    tracep->declBit(c+383,"needRounding_6", false,-1);
    tracep->declBus(c+384,"roundingDirection_6", false,-1, 1,0);
    tracep->declQuad(c+385,"quantizedValue_6", false,-1, 32,0);
    tracep->declQuad(c+387,"scaledValue_7", false,-1, 33,0);
    tracep->declQuad(c+389,"remainder_7", false,-1, 32,0);
    tracep->declQuad(c+391,"tempIdx_7", false,-1, 33,0);
    tracep->declBit(c+393,"needRounding_7", false,-1);
    tracep->declBus(c+394,"roundingDirection_7", false,-1, 1,0);
    tracep->declQuad(c+395,"quantizedValue_7", false,-1, 32,0);
    tracep->declQuad(c+397,"scaledValue_8", false,-1, 33,0);
    tracep->declQuad(c+399,"remainder_8", false,-1, 32,0);
    tracep->declQuad(c+401,"tempIdx_8", false,-1, 33,0);
    tracep->declBit(c+403,"needRounding_8", false,-1);
    tracep->declBus(c+404,"roundingDirection_8", false,-1, 1,0);
    tracep->declQuad(c+405,"quantizedValue_8", false,-1, 32,0);
    tracep->declQuad(c+407,"scaledValue_9", false,-1, 33,0);
    tracep->declQuad(c+409,"remainder_9", false,-1, 32,0);
    tracep->declQuad(c+411,"tempIdx_9", false,-1, 33,0);
    tracep->declBit(c+413,"needRounding_9", false,-1);
    tracep->declBus(c+414,"roundingDirection_9", false,-1, 1,0);
    tracep->declQuad(c+415,"quantizedValue_9", false,-1, 32,0);
    tracep->declQuad(c+417,"scaledValue_10", false,-1, 33,0);
    tracep->declQuad(c+419,"remainder_10", false,-1, 32,0);
    tracep->declQuad(c+421,"tempIdx_10", false,-1, 33,0);
    tracep->declBit(c+423,"needRounding_10", false,-1);
    tracep->declBus(c+424,"roundingDirection_10", false,-1, 1,0);
    tracep->declQuad(c+425,"quantizedValue_10", false,-1, 32,0);
    tracep->declQuad(c+427,"scaledValue_11", false,-1, 33,0);
    tracep->declQuad(c+429,"remainder_11", false,-1, 32,0);
    tracep->declQuad(c+431,"tempIdx_11", false,-1, 33,0);
    tracep->declBit(c+433,"needRounding_11", false,-1);
    tracep->declBus(c+434,"roundingDirection_11", false,-1, 1,0);
    tracep->declQuad(c+435,"quantizedValue_11", false,-1, 32,0);
    tracep->declQuad(c+437,"scaledValue_12", false,-1, 33,0);
    tracep->declQuad(c+439,"remainder_12", false,-1, 32,0);
    tracep->declQuad(c+441,"tempIdx_12", false,-1, 33,0);
    tracep->declBit(c+443,"needRounding_12", false,-1);
    tracep->declBus(c+444,"roundingDirection_12", false,-1, 1,0);
    tracep->declQuad(c+445,"quantizedValue_12", false,-1, 32,0);
    tracep->declQuad(c+447,"scaledValue_13", false,-1, 33,0);
    tracep->declQuad(c+449,"remainder_13", false,-1, 32,0);
    tracep->declQuad(c+451,"tempIdx_13", false,-1, 33,0);
    tracep->declBit(c+453,"needRounding_13", false,-1);
    tracep->declBus(c+454,"roundingDirection_13", false,-1, 1,0);
    tracep->declQuad(c+455,"quantizedValue_13", false,-1, 32,0);
    tracep->declQuad(c+457,"scaledValue_14", false,-1, 33,0);
    tracep->declQuad(c+459,"remainder_14", false,-1, 32,0);
    tracep->declQuad(c+461,"tempIdx_14", false,-1, 33,0);
    tracep->declBit(c+463,"needRounding_14", false,-1);
    tracep->declBus(c+464,"roundingDirection_14", false,-1, 1,0);
    tracep->declQuad(c+465,"quantizedValue_14", false,-1, 32,0);
    tracep->declQuad(c+467,"scaledValue_15", false,-1, 33,0);
    tracep->declQuad(c+469,"remainder_15", false,-1, 32,0);
    tracep->declQuad(c+471,"tempIdx_15", false,-1, 33,0);
    tracep->declBit(c+473,"needRounding_15", false,-1);
    tracep->declBus(c+474,"roundingDirection_15", false,-1, 1,0);
    tracep->declQuad(c+475,"quantizedValue_15", false,-1, 32,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+608,"lowerThreshold", false,-1, 22,0);
    tracep->declQuad(c+609,"binWidth_16", false,-1, 32,0);
    tracep->declQuad(c+611,"effectiveMin", false,-1, 32,0);
    tracep->declQuad(c+613,"effectiveMax", false,-1, 32,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declQuad(c+615,"binWidth", false,-1, 32,0);
    tracep->declQuad(c+617,"tempIndex", false,-1, 32,0);
    tracep->declBus(c+619,"safeIndex", false,-1, 2,0);
    tracep->declQuad(c+620,"binWidth_1", false,-1, 32,0);
    tracep->declQuad(c+622,"tempIndex_1", false,-1, 32,0);
    tracep->declBus(c+624,"safeIndex_1", false,-1, 2,0);
    tracep->declQuad(c+625,"binWidth_2", false,-1, 32,0);
    tracep->declQuad(c+627,"tempIndex_2", false,-1, 32,0);
    tracep->declBus(c+629,"safeIndex_2", false,-1, 2,0);
    tracep->declQuad(c+630,"binWidth_3", false,-1, 32,0);
    tracep->declQuad(c+632,"tempIndex_3", false,-1, 32,0);
    tracep->declBus(c+634,"safeIndex_3", false,-1, 2,0);
    tracep->declQuad(c+635,"binWidth_4", false,-1, 32,0);
    tracep->declQuad(c+637,"tempIndex_4", false,-1, 32,0);
    tracep->declBus(c+639,"safeIndex_4", false,-1, 2,0);
    tracep->declQuad(c+640,"binWidth_5", false,-1, 32,0);
    tracep->declQuad(c+642,"tempIndex_5", false,-1, 32,0);
    tracep->declBus(c+644,"safeIndex_5", false,-1, 2,0);
    tracep->declQuad(c+645,"binWidth_6", false,-1, 32,0);
    tracep->declQuad(c+647,"tempIndex_6", false,-1, 32,0);
    tracep->declBus(c+649,"safeIndex_6", false,-1, 2,0);
    tracep->declQuad(c+650,"binWidth_7", false,-1, 32,0);
    tracep->declQuad(c+652,"tempIndex_7", false,-1, 32,0);
    tracep->declBus(c+654,"safeIndex_7", false,-1, 2,0);
    tracep->declQuad(c+655,"binWidth_8", false,-1, 32,0);
    tracep->declQuad(c+657,"tempIndex_8", false,-1, 32,0);
    tracep->declBus(c+659,"safeIndex_8", false,-1, 2,0);
    tracep->declQuad(c+660,"binWidth_9", false,-1, 32,0);
    tracep->declQuad(c+662,"tempIndex_9", false,-1, 32,0);
    tracep->declBus(c+664,"safeIndex_9", false,-1, 2,0);
    tracep->declQuad(c+665,"binWidth_10", false,-1, 32,0);
    tracep->declQuad(c+667,"tempIndex_10", false,-1, 32,0);
    tracep->declBus(c+669,"safeIndex_10", false,-1, 2,0);
    tracep->declQuad(c+670,"binWidth_11", false,-1, 32,0);
    tracep->declQuad(c+672,"tempIndex_11", false,-1, 32,0);
    tracep->declBus(c+674,"safeIndex_11", false,-1, 2,0);
    tracep->declQuad(c+675,"binWidth_12", false,-1, 32,0);
    tracep->declQuad(c+677,"tempIndex_12", false,-1, 32,0);
    tracep->declBus(c+679,"safeIndex_12", false,-1, 2,0);
    tracep->declQuad(c+680,"binWidth_13", false,-1, 32,0);
    tracep->declQuad(c+682,"tempIndex_13", false,-1, 32,0);
    tracep->declBus(c+684,"safeIndex_13", false,-1, 2,0);
    tracep->declQuad(c+685,"binWidth_14", false,-1, 32,0);
    tracep->declQuad(c+687,"tempIndex_14", false,-1, 32,0);
    tracep->declBus(c+689,"safeIndex_14", false,-1, 2,0);
    tracep->declQuad(c+690,"binWidth_15", false,-1, 32,0);
    tracep->declQuad(c+692,"tempIndex_15", false,-1, 32,0);
    tracep->declBus(c+694,"safeIndex_15", false,-1, 2,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("quantizeInt8 ");
    tracep->declBus(c+56,"io_pir_sign_i", false,-1, 15,0);
    tracep->declArray(c+217,"io_pir_exp_i", false,-1, 127,0);
    tracep->declArray(c+477,"io_pir_frac_i", false,-1, 527,0);
    tracep->declArray(c+869,"io_int8_o", false,-1, 127,0);
    tracep->declBit(c+873,"io_reset_window", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"in_i", false,-1, 30,0);
    tracep->declBus(c+99,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+874,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+875,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+100,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+58,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_1__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"in_i", false,-1, 30,0);
    tracep->declBus(c+203,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+876,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+877,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+204,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+60,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_2__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"in_i", false,-1, 30,0);
    tracep->declBus(c+195,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+878,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+879,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+196,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+62,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_3__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_3__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"in_i", false,-1, 30,0);
    tracep->declBus(c+187,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+880,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+881,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+188,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+64,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_4__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+65,"in_i", false,-1, 30,0);
    tracep->declBus(c+179,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+882,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+883,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+180,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+66,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_5__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_5__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"in_i", false,-1, 30,0);
    tracep->declBus(c+171,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+884,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+885,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+172,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+68,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_6__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_6__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"in_i", false,-1, 30,0);
    tracep->declBus(c+163,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+886,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+887,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+164,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+70,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_7__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_7__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"in_i", false,-1, 30,0);
    tracep->declBus(c+211,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+888,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+889,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+212,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+72,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_8__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_8__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+73,"in_i", false,-1, 30,0);
    tracep->declBus(c+155,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+890,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+891,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+156,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+74,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_9__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_9__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+75,"in_i", false,-1, 30,0);
    tracep->declBus(c+147,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+892,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+893,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+148,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+76,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_10__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_10__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"in_i", false,-1, 30,0);
    tracep->declBus(c+139,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+894,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+895,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+140,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+78,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_11__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_11__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+79,"in_i", false,-1, 30,0);
    tracep->declBus(c+131,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+896,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+897,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+132,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+80,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_12__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_12__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+81,"in_i", false,-1, 30,0);
    tracep->declBus(c+123,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+898,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+899,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+124,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+82,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_13__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_13__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"in_i", false,-1, 30,0);
    tracep->declBus(c+115,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+900,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+901,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+116,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+84,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_14__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_14__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"in_i", false,-1, 30,0);
    tracep->declBus(c+107,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+902,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+903,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+108,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+86,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_15__0(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_15__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+906,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+907,"MODE", false,-1);
    tracep->declBus(c+908,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+87,"in_i", false,-1, 30,0);
    tracep->declBus(c+91,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+904,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+908,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+909,"index_lut", false,-1, 154,0);
    tracep->declBus(c+905,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+92,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+88,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_index_lut ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_levels[0] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[1] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[2] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[3] ");
    tracep->pushNamePrefix("g_not_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_levels[4] ");
    tracep->pushNamePrefix("g_last_level ");
    tracep->pushNamePrefix("g_level ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_top(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_top\n"); );
    // Body
    VQvuTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("QvuTop ");
    tracep->pushNamePrefix("decode ");
    tracep->pushNamePrefix("lzcModule ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_1 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_10 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_10__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_11 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_11__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_12 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_12__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_13 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_13__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_14 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_14__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_15 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_15__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_2 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_3 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_3__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_4 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_4__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_5 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_5__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_6 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_6__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_7 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_7__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_8 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_8__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule_9 ");
    VQvuTop___024root__trace_init_sub__TOP__QvuTop__DOT__decode__DOT__lzcModule_9__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VQvuTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VQvuTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VQvuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VQvuTop___024root__trace_register(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VQvuTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VQvuTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VQvuTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VQvuTop___024root__trace_full_sub_0(VQvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VQvuTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_full_top_0\n"); );
    // Init
    VQvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQvuTop___024root*>(voidSelf);
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VQvuTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ VQvuTop__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void VQvuTop___024root__trace_full_sub_0(VQvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<16>/*511:0*/ __Vtemp_hb473fa4f__0;
    VlWide<3>/*95:0*/ __Vtemp_hb9c394a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h30212936__0;
    VlWide<3>/*95:0*/ __Vtemp_hc5f9a6b7__0;
    VlWide<4>/*127:0*/ __Vtemp_h76de1cfc__0;
    VlWide<4>/*127:0*/ __Vtemp_hd79ae1c4__0;
    VlWide<14>/*447:0*/ __Vtemp_hd8e3ab57__0;
    VlWide<16>/*511:0*/ __Vtemp_hbf8b0890__0;
    VlWide<3>/*95:0*/ __Vtemp_h7fb1b112__0;
    VlWide<3>/*95:0*/ __Vtemp_hf815a4b1__0;
    VlWide<4>/*127:0*/ __Vtemp_h53a2d94e__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d4cfaee__0;
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE),5);
    bufp->fullSData(oldp+2,((((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcfb253e9__0) 
                              << 0xfU) | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcf4be793__0) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_hcecc844e__0) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2a2a10e4__0) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25bc0d63__0) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h25331089__0) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24af6ee8__0) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h281ce652__0) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2babc25d__0) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2b2d736f__0) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h2aaec35a__0) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h263440d8__0) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h21c2c097__0) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h217d4d15__0) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h24cba9c4__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QvuTop__DOT__decode__DOT____VdfgTmp_h244a7236__0))))))))))))))))),16);
    bufp->fullSData(oldp+3,(vlSelf->QvuTop__DOT__decode__DOT__isNaR),16);
    bufp->fullIData(oldp+4,(vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6),31);
    bufp->fullIData(oldp+5,(vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6),31);
    bufp->fullIData(oldp+6,(vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6),31);
    bufp->fullIData(oldp+7,(vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6),31);
    bufp->fullIData(oldp+8,(vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6),31);
    bufp->fullIData(oldp+9,(vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6),31);
    bufp->fullIData(oldp+10,(vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6),31);
    bufp->fullIData(oldp+11,(vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6),31);
    bufp->fullIData(oldp+12,(vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6),31);
    bufp->fullIData(oldp+13,(vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6),31);
    bufp->fullIData(oldp+14,(vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6),31);
    bufp->fullIData(oldp+15,(vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6),31);
    bufp->fullIData(oldp+16,(vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6),31);
    bufp->fullIData(oldp+17,(vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6),31);
    bufp->fullIData(oldp+18,(vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6),31);
    bufp->fullIData(oldp+19,(vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6),31);
    bufp->fullWData(oldp+20,(vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Exp),144);
    bufp->fullWData(oldp+25,(vlSelf->QvuTop__DOT____Vcellout__floatDecode__io_Frac),384);
    bufp->fullSData(oldp+37,(vlSelf->QvuTop__DOT__floatDecode__DOT__io_isNaN),16);
    bufp->fullSData(oldp+38,(((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT___GEN) 
                              & (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT___GEN_0))),16);
    bufp->fullSData(oldp+39,(((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0)) 
                                << 0xfU) | (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0)) 
                                             << 0xeU) 
                                            | (((0U 
                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0)) 
                                                << 0xdU) 
                                               | (((0U 
                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0)) 
                                                   << 0xcU) 
                                                  | (((0U 
                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0)) 
                                                      << 0xbU) 
                                                     | (((0U 
                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0)) 
                                                         << 0xaU) 
                                                        | (((0U 
                                                             == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0)) 
                                                            << 9U) 
                                                           | (((0U 
                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0)) 
                                                               << 8U) 
                                                              | (((0U 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0)) 
                                                                  << 7U) 
                                                                 | (((0U 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0)) 
                                                                     << 6U) 
                                                                    | (((0U 
                                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0)) 
                                                                        << 5U) 
                                                                       | (((0U 
                                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0)) 
                                                                           << 4U) 
                                                                          | (((0U 
                                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0)) 
                                                                              << 3U) 
                                                                             | (((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0)) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))))))))))))))))) 
                              & (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT___GEN_0))),16);
    bufp->fullBit(oldp+40,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))));
    bufp->fullBit(oldp+41,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))));
    bufp->fullBit(oldp+42,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))));
    bufp->fullBit(oldp+43,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))));
    bufp->fullBit(oldp+44,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))));
    bufp->fullBit(oldp+45,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))));
    bufp->fullBit(oldp+46,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))));
    bufp->fullBit(oldp+47,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))));
    bufp->fullBit(oldp+48,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0))));
    bufp->fullBit(oldp+49,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0))));
    bufp->fullBit(oldp+50,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))));
    bufp->fullBit(oldp+51,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0))));
    bufp->fullBit(oldp+52,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0))));
    bufp->fullBit(oldp+53,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0))));
    bufp->fullBit(oldp+54,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))));
    bufp->fullBit(oldp+55,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0))));
    bufp->fullSData(oldp+56,(vlSelf->QvuTop__DOT___GEN_7),16);
    bufp->fullIData(oldp+57,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6))),31);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+59,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6))),31);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+61,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6))),31);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+63,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6))),31);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+65,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6))),31);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+67,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6))),31);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+69,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6))),31);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+71,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6))),31);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+73,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6))),31);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+75,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6))),31);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+77,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6))),31);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+79,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6))),31);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+81,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6))),31);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+83,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6))),31);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+85,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6))),31);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+87,((0x7fffffffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6 
                                                            >> 0x1eU)))) 
                                             ^ vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6))),31);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__in_tmp),31);
    bufp->fullCData(oldp+89,((0x1fU & ((IData)(1U) 
                                       + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+90,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o),31);
    bufp->fullCData(oldp+91,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+92,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+97,((0x1fU & ((IData)(1U) 
                                       + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+98,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o),31);
    bufp->fullCData(oldp+99,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+100,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+105,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+106,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o),31);
    bufp->fullCData(oldp+107,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+108,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+113,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+114,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o),31);
    bufp->fullCData(oldp+115,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+116,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+121,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+122,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o),31);
    bufp->fullCData(oldp+123,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+124,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+129,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+130,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o),31);
    bufp->fullCData(oldp+131,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+132,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+137,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+138,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o),31);
    bufp->fullCData(oldp+139,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+140,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+145,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+146,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o),31);
    bufp->fullCData(oldp+147,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+148,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+153,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+154,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o),31);
    bufp->fullCData(oldp+155,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+156,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+161,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+162,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o),31);
    bufp->fullCData(oldp+163,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+164,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+169,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+170,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o),31);
    bufp->fullCData(oldp+171,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+172,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+177,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+178,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o),31);
    bufp->fullCData(oldp+179,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+180,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+185,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+186,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullCData(oldp+187,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+188,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+193,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+194,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullCData(oldp+195,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+196,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+201,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+202,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullCData(oldp+203,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+204,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+209,((0x1fU & ((IData)(1U) 
                                        + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+210,(vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o),31);
    bufp->fullCData(oldp+211,((0x1fU & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+212,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes),160);
    bufp->fullWData(oldp+217,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i),128);
    bufp->fullWData(oldp+221,(vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o),256);
    bufp->fullWData(oldp+229,(vlSelf->QvuTop__DOT____Vcellout__quantizeFP8__io_fp8_o),128);
    bufp->fullCData(oldp+233,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal),6);
    bufp->fullIData(oldp+234,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac),32);
    bufp->fullCData(oldp+235,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1),6);
    bufp->fullIData(oldp+236,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_1),32);
    bufp->fullCData(oldp+237,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2),6);
    bufp->fullIData(oldp+238,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_2),32);
    bufp->fullCData(oldp+239,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3),6);
    bufp->fullIData(oldp+240,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_3),32);
    bufp->fullCData(oldp+241,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4),6);
    bufp->fullIData(oldp+242,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_4),32);
    bufp->fullCData(oldp+243,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5),6);
    bufp->fullIData(oldp+244,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_5),32);
    bufp->fullCData(oldp+245,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6),6);
    bufp->fullIData(oldp+246,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_6),32);
    bufp->fullCData(oldp+247,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7),6);
    bufp->fullIData(oldp+248,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_7),32);
    bufp->fullCData(oldp+249,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8),6);
    bufp->fullIData(oldp+250,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_8),32);
    bufp->fullCData(oldp+251,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9),6);
    bufp->fullIData(oldp+252,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_9),32);
    bufp->fullCData(oldp+253,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10),6);
    bufp->fullIData(oldp+254,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_10),32);
    bufp->fullCData(oldp+255,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11),6);
    bufp->fullIData(oldp+256,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_11),32);
    bufp->fullCData(oldp+257,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12),6);
    bufp->fullIData(oldp+258,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_12),32);
    bufp->fullCData(oldp+259,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13),6);
    bufp->fullIData(oldp+260,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_13),32);
    bufp->fullCData(oldp+261,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14),6);
    bufp->fullIData(oldp+262,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_14),32);
    bufp->fullCData(oldp+263,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15),6);
    bufp->fullIData(oldp+264,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_15),32);
    bufp->fullQData(oldp+265,(vlSelf->QvuTop__DOT____Vcellout__quantizeFP4__io_fp4_o),64);
    bufp->fullQData(oldp+267,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs),33);
    bufp->fullCData(oldp+269,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex),3);
    bufp->fullQData(oldp+270,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1),33);
    bufp->fullCData(oldp+272,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1),3);
    bufp->fullQData(oldp+273,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2),33);
    bufp->fullCData(oldp+275,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2),3);
    bufp->fullQData(oldp+276,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3),33);
    bufp->fullCData(oldp+278,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3),3);
    bufp->fullQData(oldp+279,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4),33);
    bufp->fullCData(oldp+281,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4),3);
    bufp->fullQData(oldp+282,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5),33);
    bufp->fullCData(oldp+284,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5),3);
    bufp->fullQData(oldp+285,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6),33);
    bufp->fullCData(oldp+287,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6),3);
    bufp->fullQData(oldp+288,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7),33);
    bufp->fullCData(oldp+290,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7),3);
    bufp->fullQData(oldp+291,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8),33);
    bufp->fullCData(oldp+293,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8),3);
    bufp->fullQData(oldp+294,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9),33);
    bufp->fullCData(oldp+296,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9),3);
    bufp->fullQData(oldp+297,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10),33);
    bufp->fullCData(oldp+299,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10),3);
    bufp->fullQData(oldp+300,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11),33);
    bufp->fullCData(oldp+302,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11),3);
    bufp->fullQData(oldp+303,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12),33);
    bufp->fullCData(oldp+305,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12),3);
    bufp->fullQData(oldp+306,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13),33);
    bufp->fullCData(oldp+308,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13),3);
    bufp->fullQData(oldp+309,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14),33);
    bufp->fullCData(oldp+311,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14),3);
    bufp->fullQData(oldp+312,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15),33);
    bufp->fullCData(oldp+314,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15),3);
    bufp->fullQData(oldp+315,((((QData)((IData)(((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)
                                                  ? 0U
                                                  : 
                                                 (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0)))))))) 
                                << 0x3cU) | (((QData)((IData)(
                                                              ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)
                                                                ? 0U
                                                                : 
                                                               (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14)
                                                                 ? 7U
                                                                 : 
                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14)
                                                                  ? 8U
                                                                  : 
                                                                 ((0ULL 
                                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                   ? 0U
                                                                   : 
                                                                  (0xfU 
                                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0)))))))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)
                                                                   ? 0U
                                                                   : 
                                                                  (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13)
                                                                    ? 7U
                                                                    : 
                                                                   (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13)
                                                                     ? 8U
                                                                     : 
                                                                    ((0ULL 
                                                                      == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                      ? 0U
                                                                      : 
                                                                     (0xfU 
                                                                      & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0)))))))) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)
                                                                      ? 0U
                                                                      : 
                                                                     (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12)
                                                                       ? 7U
                                                                       : 
                                                                      (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12)
                                                                        ? 8U
                                                                        : 
                                                                       ((0ULL 
                                                                         == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                         ? 0U
                                                                         : 
                                                                        (0xfU 
                                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0)))))))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)
                                                                         ? 0U
                                                                         : 
                                                                        (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11)
                                                                          ? 7U
                                                                          : 
                                                                         (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11)
                                                                           ? 8U
                                                                           : 
                                                                          ((0ULL 
                                                                            == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                            ? 0U
                                                                            : 
                                                                           (0xfU 
                                                                            & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0)))))))) 
                                                       << 0x2cU) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)
                                                                            ? 0U
                                                                            : 
                                                                           (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10)
                                                                             ? 7U
                                                                             : 
                                                                            (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10)
                                                                              ? 8U
                                                                              : 
                                                                             ((0ULL 
                                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                               ? 0U
                                                                               : 
                                                                              (0xfU 
                                                                               & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0)))))))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)
                                                                               ? 0U
                                                                               : 
                                                                              (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                                                                ? 7U
                                                                                : 
                                                                               (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0)))))))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0)))))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0)))))) 
                                                                                << 0x1cU) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0)))))) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0)))))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0)))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0)))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0)))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0)))))) 
                                                                                << 4U) 
                                                                                | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)
                                                                                 ? 0U
                                                                                 : 
                                                                                (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                                                                 ? 7U
                                                                                 : 
                                                                                (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0)))))))))))))))))))))))),64);
    bufp->fullQData(oldp+317,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue),34);
    bufp->fullQData(oldp+319,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder),33);
    bufp->fullQData(oldp+321,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx),34);
    bufp->fullBit(oldp+323,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding));
    bufp->fullCData(oldp+324,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection),2);
    bufp->fullQData(oldp+325,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue),33);
    bufp->fullQData(oldp+327,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1),34);
    bufp->fullQData(oldp+329,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1),33);
    bufp->fullQData(oldp+331,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1),34);
    bufp->fullBit(oldp+333,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1));
    bufp->fullCData(oldp+334,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1),2);
    bufp->fullQData(oldp+335,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1),33);
    bufp->fullQData(oldp+337,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2),34);
    bufp->fullQData(oldp+339,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2),33);
    bufp->fullQData(oldp+341,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2),34);
    bufp->fullBit(oldp+343,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2));
    bufp->fullCData(oldp+344,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2),2);
    bufp->fullQData(oldp+345,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2),33);
    bufp->fullQData(oldp+347,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3),34);
    bufp->fullQData(oldp+349,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3),33);
    bufp->fullQData(oldp+351,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3),34);
    bufp->fullBit(oldp+353,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3));
    bufp->fullCData(oldp+354,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3),2);
    bufp->fullQData(oldp+355,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3),33);
    bufp->fullQData(oldp+357,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4),34);
    bufp->fullQData(oldp+359,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4),33);
    bufp->fullQData(oldp+361,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4),34);
    bufp->fullBit(oldp+363,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4));
    bufp->fullCData(oldp+364,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4),2);
    bufp->fullQData(oldp+365,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4),33);
    bufp->fullQData(oldp+367,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5),34);
    bufp->fullQData(oldp+369,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5),33);
    bufp->fullQData(oldp+371,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5),34);
    bufp->fullBit(oldp+373,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5));
    bufp->fullCData(oldp+374,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5),2);
    bufp->fullQData(oldp+375,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5),33);
    bufp->fullQData(oldp+377,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6),34);
    bufp->fullQData(oldp+379,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6),33);
    bufp->fullQData(oldp+381,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6),34);
    bufp->fullBit(oldp+383,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6));
    bufp->fullCData(oldp+384,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6),2);
    bufp->fullQData(oldp+385,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6),33);
    bufp->fullQData(oldp+387,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7),34);
    bufp->fullQData(oldp+389,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7),33);
    bufp->fullQData(oldp+391,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7),34);
    bufp->fullBit(oldp+393,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7));
    bufp->fullCData(oldp+394,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7),2);
    bufp->fullQData(oldp+395,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7),33);
    bufp->fullQData(oldp+397,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8),34);
    bufp->fullQData(oldp+399,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8),33);
    bufp->fullQData(oldp+401,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8),34);
    bufp->fullBit(oldp+403,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8));
    bufp->fullCData(oldp+404,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8),2);
    bufp->fullQData(oldp+405,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8),33);
    bufp->fullQData(oldp+407,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9),34);
    bufp->fullQData(oldp+409,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9),33);
    bufp->fullQData(oldp+411,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9),34);
    bufp->fullBit(oldp+413,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9));
    bufp->fullCData(oldp+414,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9),2);
    bufp->fullQData(oldp+415,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9),33);
    bufp->fullQData(oldp+417,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10),34);
    bufp->fullQData(oldp+419,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10),33);
    bufp->fullQData(oldp+421,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10),34);
    bufp->fullBit(oldp+423,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10));
    bufp->fullCData(oldp+424,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10),2);
    bufp->fullQData(oldp+425,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10),33);
    bufp->fullQData(oldp+427,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11),34);
    bufp->fullQData(oldp+429,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11),33);
    bufp->fullQData(oldp+431,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11),34);
    bufp->fullBit(oldp+433,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11));
    bufp->fullCData(oldp+434,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11),2);
    bufp->fullQData(oldp+435,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11),33);
    bufp->fullQData(oldp+437,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12),34);
    bufp->fullQData(oldp+439,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12),33);
    bufp->fullQData(oldp+441,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12),34);
    bufp->fullBit(oldp+443,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12));
    bufp->fullCData(oldp+444,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12),2);
    bufp->fullQData(oldp+445,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12),33);
    bufp->fullQData(oldp+447,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13),34);
    bufp->fullQData(oldp+449,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13),33);
    bufp->fullQData(oldp+451,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13),34);
    bufp->fullBit(oldp+453,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13));
    bufp->fullCData(oldp+454,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13),2);
    bufp->fullQData(oldp+455,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13),33);
    bufp->fullQData(oldp+457,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14),34);
    bufp->fullQData(oldp+459,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14),33);
    bufp->fullQData(oldp+461,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14),34);
    bufp->fullBit(oldp+463,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14));
    bufp->fullCData(oldp+464,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14),2);
    bufp->fullQData(oldp+465,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14),33);
    bufp->fullQData(oldp+467,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15),34);
    bufp->fullQData(oldp+469,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15),33);
    bufp->fullQData(oldp+471,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15),34);
    bufp->fullBit(oldp+473,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15));
    bufp->fullCData(oldp+474,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15),2);
    bufp->fullQData(oldp+475,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15),33);
    bufp->fullWData(oldp+477,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i),528);
    bufp->fullCData(oldp+494,(vlSelf->QvuTop__DOT__resetCounter),5);
    bufp->fullWData(oldp+495,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax),264);
    bufp->fullWData(oldp+504,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin),264);
    bufp->fullCData(oldp+513,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid),8);
    bufp->fullCData(oldp+514,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr),3);
    bufp->fullQData(oldp+515,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax),33);
    bufp->fullQData(oldp+517,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin),33);
    bufp->fullQData(oldp+519,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale),33);
    bufp->fullQData(oldp+521,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax),33);
    bufp->fullQData(oldp+523,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin),33);
    bufp->fullBit(oldp+525,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData));
    bufp->fullCData(oldp+526,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__state),2);
    bufp->fullQData(oldp+527,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax),33);
    bufp->fullQData(oldp+529,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax),33);
    bufp->fullQData(oldp+531,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax),33);
    bufp->fullQData(oldp+533,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax),33);
    bufp->fullQData(oldp+535,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax),33);
    bufp->fullQData(oldp+537,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax),33);
    bufp->fullQData(oldp+539,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax),33);
    bufp->fullQData(oldp+541,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax),33);
    bufp->fullQData(oldp+543,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax),33);
    bufp->fullQData(oldp+545,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax),33);
    bufp->fullQData(oldp+547,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax),33);
    bufp->fullQData(oldp+549,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax),33);
    bufp->fullQData(oldp+551,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax),33);
    bufp->fullQData(oldp+553,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax),33);
    bufp->fullQData(oldp+555,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax),33);
    bufp->fullQData(oldp+557,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin),33);
    bufp->fullQData(oldp+559,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin),33);
    bufp->fullQData(oldp+561,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin),33);
    bufp->fullQData(oldp+563,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin),33);
    bufp->fullQData(oldp+565,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin),33);
    bufp->fullQData(oldp+567,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin),33);
    bufp->fullQData(oldp+569,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin),33);
    bufp->fullQData(oldp+571,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin),33);
    bufp->fullQData(oldp+573,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin),33);
    bufp->fullQData(oldp+575,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin),33);
    bufp->fullQData(oldp+577,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin),33);
    bufp->fullQData(oldp+579,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin),33);
    bufp->fullQData(oldp+581,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin),33);
    bufp->fullQData(oldp+583,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin),33);
    bufp->fullQData(oldp+585,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin),33);
    bufp->fullQData(oldp+587,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange),33);
    bufp->fullQData(oldp+589,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax),33);
    bufp->fullQData(oldp+591,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin),33);
    bufp->fullQData(oldp+593,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale),33);
    bufp->fullQData(oldp+595,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset),33);
    bufp->fullQData(oldp+597,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax),33);
    bufp->fullQData(oldp+599,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin),33);
    bufp->fullBit(oldp+601,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData));
    bufp->fullCData(oldp+602,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state),2);
    bufp->fullWData(oldp+603,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram),128);
    bufp->fullIData(oldp+607,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal),20);
    bufp->fullIData(oldp+608,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold),23);
    bufp->fullQData(oldp+609,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_16),33);
    bufp->fullQData(oldp+611,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin),33);
    bufp->fullQData(oldp+613,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax),33);
    bufp->fullQData(oldp+615,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth),33);
    bufp->fullQData(oldp+617,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex),33);
    bufp->fullCData(oldp+619,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex),3);
    bufp->fullQData(oldp+620,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1),33);
    bufp->fullQData(oldp+622,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1),33);
    bufp->fullCData(oldp+624,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1),3);
    bufp->fullQData(oldp+625,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2),33);
    bufp->fullQData(oldp+627,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2),33);
    bufp->fullCData(oldp+629,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2),3);
    bufp->fullQData(oldp+630,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3),33);
    bufp->fullQData(oldp+632,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3),33);
    bufp->fullCData(oldp+634,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3),3);
    bufp->fullQData(oldp+635,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_4),33);
    bufp->fullQData(oldp+637,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_4),33);
    bufp->fullCData(oldp+639,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_4),3);
    bufp->fullQData(oldp+640,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_5),33);
    bufp->fullQData(oldp+642,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_5),33);
    bufp->fullCData(oldp+644,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_5),3);
    bufp->fullQData(oldp+645,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_6),33);
    bufp->fullQData(oldp+647,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_6),33);
    bufp->fullCData(oldp+649,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_6),3);
    bufp->fullQData(oldp+650,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_7),33);
    bufp->fullQData(oldp+652,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_7),33);
    bufp->fullCData(oldp+654,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_7),3);
    bufp->fullQData(oldp+655,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_8),33);
    bufp->fullQData(oldp+657,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_8),33);
    bufp->fullCData(oldp+659,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_8),3);
    bufp->fullQData(oldp+660,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_9),33);
    bufp->fullQData(oldp+662,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_9),33);
    bufp->fullCData(oldp+664,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_9),3);
    bufp->fullQData(oldp+665,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_10),33);
    bufp->fullQData(oldp+667,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_10),33);
    bufp->fullCData(oldp+669,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_10),3);
    bufp->fullQData(oldp+670,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_11),33);
    bufp->fullQData(oldp+672,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_11),33);
    bufp->fullCData(oldp+674,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_11),3);
    bufp->fullQData(oldp+675,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_12),33);
    bufp->fullQData(oldp+677,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_12),33);
    bufp->fullCData(oldp+679,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_12),3);
    bufp->fullQData(oldp+680,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_13),33);
    bufp->fullQData(oldp+682,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_13),33);
    bufp->fullCData(oldp+684,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_13),3);
    bufp->fullQData(oldp+685,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_14),33);
    bufp->fullQData(oldp+687,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_14),33);
    bufp->fullCData(oldp+689,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_14),3);
    bufp->fullQData(oldp+690,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_15),33);
    bufp->fullQData(oldp+692,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_15),33);
    bufp->fullCData(oldp+694,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_15),3);
    bufp->fullBit(oldp+695,(vlSelf->clock));
    bufp->fullBit(oldp+696,(vlSelf->reset));
    bufp->fullIData(oldp+697,(vlSelf->io_posit_i_0),32);
    bufp->fullIData(oldp+698,(vlSelf->io_posit_i_1),32);
    bufp->fullIData(oldp+699,(vlSelf->io_posit_i_2),32);
    bufp->fullIData(oldp+700,(vlSelf->io_posit_i_3),32);
    bufp->fullIData(oldp+701,(vlSelf->io_posit_i_4),32);
    bufp->fullIData(oldp+702,(vlSelf->io_posit_i_5),32);
    bufp->fullIData(oldp+703,(vlSelf->io_posit_i_6),32);
    bufp->fullIData(oldp+704,(vlSelf->io_posit_i_7),32);
    bufp->fullIData(oldp+705,(vlSelf->io_posit_i_8),32);
    bufp->fullIData(oldp+706,(vlSelf->io_posit_i_9),32);
    bufp->fullIData(oldp+707,(vlSelf->io_posit_i_10),32);
    bufp->fullIData(oldp+708,(vlSelf->io_posit_i_11),32);
    bufp->fullIData(oldp+709,(vlSelf->io_posit_i_12),32);
    bufp->fullIData(oldp+710,(vlSelf->io_posit_i_13),32);
    bufp->fullIData(oldp+711,(vlSelf->io_posit_i_14),32);
    bufp->fullIData(oldp+712,(vlSelf->io_posit_i_15),32);
    bufp->fullCData(oldp+713,(vlSelf->io_op),4);
    bufp->fullBit(oldp+714,(vlSelf->io_Isposit));
    bufp->fullBit(oldp+715,(vlSelf->io_Outposit));
    bufp->fullQData(oldp+716,(vlSelf->io_float_i_0),64);
    bufp->fullQData(oldp+718,(vlSelf->io_float_i_1),64);
    bufp->fullQData(oldp+720,(vlSelf->io_float_i_2),64);
    bufp->fullQData(oldp+722,(vlSelf->io_float_i_3),64);
    bufp->fullQData(oldp+724,(vlSelf->io_float_i_4),64);
    bufp->fullQData(oldp+726,(vlSelf->io_float_i_5),64);
    bufp->fullQData(oldp+728,(vlSelf->io_float_i_6),64);
    bufp->fullQData(oldp+730,(vlSelf->io_float_i_7),64);
    bufp->fullQData(oldp+732,(vlSelf->io_float_i_8),64);
    bufp->fullQData(oldp+734,(vlSelf->io_float_i_9),64);
    bufp->fullQData(oldp+736,(vlSelf->io_float_i_10),64);
    bufp->fullQData(oldp+738,(vlSelf->io_float_i_11),64);
    bufp->fullQData(oldp+740,(vlSelf->io_float_i_12),64);
    bufp->fullQData(oldp+742,(vlSelf->io_float_i_13),64);
    bufp->fullQData(oldp+744,(vlSelf->io_float_i_14),64);
    bufp->fullQData(oldp+746,(vlSelf->io_float_i_15),64);
    bufp->fullCData(oldp+748,(vlSelf->io_float_mode),3);
    bufp->fullBit(oldp+749,(vlSelf->io_float_posit));
    bufp->fullCData(oldp+750,(vlSelf->io_src_posit_width),6);
    bufp->fullCData(oldp+751,(vlSelf->io_vector_size),3);
    bufp->fullCData(oldp+752,(vlSelf->io_dst_posit_width),6);
    bufp->fullQData(oldp+753,(vlSelf->io_float_o_0),64);
    bufp->fullQData(oldp+755,(vlSelf->io_float_o_1),64);
    bufp->fullQData(oldp+757,(vlSelf->io_float_o_2),64);
    bufp->fullQData(oldp+759,(vlSelf->io_float_o_3),64);
    bufp->fullQData(oldp+761,(vlSelf->io_float_o_4),64);
    bufp->fullQData(oldp+763,(vlSelf->io_float_o_5),64);
    bufp->fullQData(oldp+765,(vlSelf->io_float_o_6),64);
    bufp->fullQData(oldp+767,(vlSelf->io_float_o_7),64);
    bufp->fullQData(oldp+769,(vlSelf->io_float_o_8),64);
    bufp->fullQData(oldp+771,(vlSelf->io_float_o_9),64);
    bufp->fullQData(oldp+773,(vlSelf->io_float_o_10),64);
    bufp->fullQData(oldp+775,(vlSelf->io_float_o_11),64);
    bufp->fullQData(oldp+777,(vlSelf->io_float_o_12),64);
    bufp->fullQData(oldp+779,(vlSelf->io_float_o_13),64);
    bufp->fullQData(oldp+781,(vlSelf->io_float_o_14),64);
    bufp->fullQData(oldp+783,(vlSelf->io_float_o_15),64);
    bufp->fullIData(oldp+785,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+786,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+787,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+788,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+789,(vlSelf->io_posit_o_4),32);
    bufp->fullIData(oldp+790,(vlSelf->io_posit_o_5),32);
    bufp->fullIData(oldp+791,(vlSelf->io_posit_o_6),32);
    bufp->fullIData(oldp+792,(vlSelf->io_posit_o_7),32);
    bufp->fullIData(oldp+793,(vlSelf->io_posit_o_8),32);
    bufp->fullIData(oldp+794,(vlSelf->io_posit_o_9),32);
    bufp->fullIData(oldp+795,(vlSelf->io_posit_o_10),32);
    bufp->fullIData(oldp+796,(vlSelf->io_posit_o_11),32);
    bufp->fullIData(oldp+797,(vlSelf->io_posit_o_12),32);
    bufp->fullIData(oldp+798,(vlSelf->io_posit_o_13),32);
    bufp->fullIData(oldp+799,(vlSelf->io_posit_o_14),32);
    bufp->fullIData(oldp+800,(vlSelf->io_posit_o_15),32);
    bufp->fullIData(oldp+801,(vlSelf->io_int_o_0),32);
    bufp->fullIData(oldp+802,(vlSelf->io_int_o_1),32);
    bufp->fullIData(oldp+803,(vlSelf->io_int_o_2),32);
    bufp->fullIData(oldp+804,(vlSelf->io_int_o_3),32);
    bufp->fullIData(oldp+805,(vlSelf->io_int_o_4),32);
    bufp->fullIData(oldp+806,(vlSelf->io_int_o_5),32);
    bufp->fullIData(oldp+807,(vlSelf->io_int_o_6),32);
    bufp->fullIData(oldp+808,(vlSelf->io_int_o_7),32);
    bufp->fullIData(oldp+809,(vlSelf->io_int_o_8),32);
    bufp->fullIData(oldp+810,(vlSelf->io_int_o_9),32);
    bufp->fullIData(oldp+811,(vlSelf->io_int_o_10),32);
    bufp->fullIData(oldp+812,(vlSelf->io_int_o_11),32);
    bufp->fullIData(oldp+813,(vlSelf->io_int_o_12),32);
    bufp->fullIData(oldp+814,(vlSelf->io_int_o_13),32);
    bufp->fullIData(oldp+815,(vlSelf->io_int_o_14),32);
    bufp->fullIData(oldp+816,(vlSelf->io_int_o_15),32);
    bufp->fullBit(oldp+817,(vlSelf->io_reset_window));
    if (vlSelf->io_Isposit) {
        __Vtemp_hb473fa4f__0[0U] = vlSelf->io_posit_i_0;
        __Vtemp_hb473fa4f__0[1U] = vlSelf->io_posit_i_1;
        __Vtemp_hb473fa4f__0[2U] = vlSelf->io_posit_i_2;
        __Vtemp_hb473fa4f__0[3U] = vlSelf->io_posit_i_3;
        __Vtemp_hb473fa4f__0[4U] = vlSelf->io_posit_i_4;
        __Vtemp_hb473fa4f__0[5U] = vlSelf->io_posit_i_5;
        __Vtemp_hb473fa4f__0[6U] = vlSelf->io_posit_i_6;
        __Vtemp_hb473fa4f__0[7U] = vlSelf->io_posit_i_7;
        __Vtemp_hb473fa4f__0[8U] = vlSelf->io_posit_i_8;
        __Vtemp_hb473fa4f__0[9U] = vlSelf->io_posit_i_9;
        __Vtemp_hb473fa4f__0[0xaU] = vlSelf->io_posit_i_10;
        __Vtemp_hb473fa4f__0[0xbU] = vlSelf->io_posit_i_11;
        __Vtemp_hb473fa4f__0[0xcU] = vlSelf->io_posit_i_12;
        __Vtemp_hb473fa4f__0[0xdU] = vlSelf->io_posit_i_13;
        __Vtemp_hb473fa4f__0[0xeU] = (IData)((((QData)((IData)(vlSelf->io_posit_i_15)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->io_posit_i_14))));
        __Vtemp_hb473fa4f__0[0xfU] = (IData)(((((QData)((IData)(vlSelf->io_posit_i_15)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->io_posit_i_14))) 
                                              >> 0x20U));
    } else {
        __Vtemp_hb473fa4f__0[0U] = VQvuTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hb473fa4f__0[1U] = VQvuTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hb473fa4f__0[2U] = VQvuTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hb473fa4f__0[3U] = VQvuTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hb473fa4f__0[4U] = VQvuTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hb473fa4f__0[5U] = VQvuTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hb473fa4f__0[6U] = VQvuTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hb473fa4f__0[7U] = VQvuTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hb473fa4f__0[8U] = VQvuTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hb473fa4f__0[9U] = VQvuTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hb473fa4f__0[0xaU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hb473fa4f__0[0xbU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hb473fa4f__0[0xcU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hb473fa4f__0[0xdU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hb473fa4f__0[0xeU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hb473fa4f__0[0xfU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    bufp->fullWData(oldp+818,(__Vtemp_hb473fa4f__0),512);
    __Vtemp_hb9c394a1__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x80U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          ((((1U 
                                                              & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((0x40000000U 
                                                               & vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)
                                                               ? 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                  - (IData)(1U)))
                                                               : 
                                                              (0x20U 
                                                               | (0x1fU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                              : 0U) 
                                                            << 2U) 
                                                           | ((1U 
                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                               ? 
                                                              (3U 
                                                               & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                                  >> 0x1dU))
                                                               : 0U))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((0x40U 
                                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                              ? 0U
                                                              : 
                                                             ((((1U 
                                                                 & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((0x40000000U 
                                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                     - (IData)(1U)))
                                                                  : 
                                                                 (0x20U 
                                                                  | (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (~ 
                                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                 : 0U) 
                                                               << 2U) 
                                                              | ((1U 
                                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 (3U 
                                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                                     >> 0x1dU))
                                                                  : 0U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((0x20U 
                                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                 ? 0U
                                                                 : 
                                                                ((((1U 
                                                                    & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((0x40000000U 
                                                                     & vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                        - (IData)(1U)))
                                                                     : 
                                                                    (0x20U 
                                                                     | (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (~ 
                                                                            vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                    : 0U) 
                                                                  << 2U) 
                                                                 | ((1U 
                                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    (3U 
                                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                                        >> 0x1dU))
                                                                     : 0U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((0x10U 
                                                                    & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                    ? 0U
                                                                    : 
                                                                   ((((1U 
                                                                       & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((0x40000000U 
                                                                        & vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)
                                                                        ? 
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                           - (IData)(1U)))
                                                                        : 
                                                                       (0x20U 
                                                                        | (0x1fU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (~ 
                                                                               vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                       : 0U) 
                                                                     << 2U) 
                                                                    | ((1U 
                                                                        & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       (3U 
                                                                        & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                                           >> 0x1dU))
                                                                        : 0U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                       ? 0U
                                                                       : 
                                                                      ((((1U 
                                                                          & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((0x40000000U 
                                                                           & vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)
                                                                           ? 
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                              - (IData)(1U)))
                                                                           : 
                                                                          (0x20U 
                                                                           | (0x1fU 
                                                                              & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                          : 0U) 
                                                                        << 2U) 
                                                                       | ((1U 
                                                                           & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          (3U 
                                                                           & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                                              >> 0x1dU))
                                                                           : 0U))) 
                                                                     << 0x18U) 
                                                                    | ((((4U 
                                                                          & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                          ? 0U
                                                                          : 
                                                                         ((((1U 
                                                                             & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((0x40000000U 
                                                                              & vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)
                                                                              ? 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                              : 
                                                                             (0x20U 
                                                                              | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                             : 0U) 
                                                                           << 2U) 
                                                                          | ((1U 
                                                                              & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             (3U 
                                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                                                >> 0x1dU))
                                                                              : 0U))) 
                                                                        << 0x10U) 
                                                                       | ((((2U 
                                                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                             ? 0U
                                                                             : 
                                                                            ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                : 0U) 
                                                                              << 2U) 
                                                                             | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U))) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                              ? 0U
                                                                              : 
                                                                             ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                               << 2U) 
                                                                              | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))))))))))));
    __Vtemp_hb9c394a1__0[1U] = (IData)(((((QData)((IData)(
                                                          ((0x80U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           ((((1U 
                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                               ? 
                                                              ((0x40000000U 
                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)
                                                                ? 
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                   - (IData)(1U)))
                                                                : 
                                                               (0x20U 
                                                                | (0x1fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ 
                                                                       vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                               : 0U) 
                                                             << 2U) 
                                                            | ((1U 
                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                                ? 
                                                               (3U 
                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                                   >> 0x1dU))
                                                                : 0U))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((0x40U 
                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                               ? 0U
                                                               : 
                                                              ((((1U 
                                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((0x40000000U 
                                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)
                                                                   ? 
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                      - (IData)(1U)))
                                                                   : 
                                                                  (0x20U 
                                                                   | (0x1fU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                  : 0U) 
                                                                << 2U) 
                                                               | ((1U 
                                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                   ? 
                                                                  (3U 
                                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                                      >> 0x1dU))
                                                                   : 0U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((0x20U 
                                                                  & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                  ? 0U
                                                                  : 
                                                                 ((((1U 
                                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((0x40000000U 
                                                                      & vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)
                                                                      ? 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                         - (IData)(1U)))
                                                                      : 
                                                                     (0x20U 
                                                                      | (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + 
                                                                            (~ 
                                                                             vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                     : 0U) 
                                                                   << 2U) 
                                                                  | ((1U 
                                                                      & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     (3U 
                                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                                         >> 0x1dU))
                                                                      : 0U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                     ? 0U
                                                                     : 
                                                                    ((((1U 
                                                                        & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((0x40000000U 
                                                                         & vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                            - (IData)(1U)))
                                                                         : 
                                                                        (0x20U 
                                                                         | (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                        : 0U) 
                                                                      << 2U) 
                                                                     | ((1U 
                                                                         & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                         ? 
                                                                        (3U 
                                                                         & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                                            >> 0x1dU))
                                                                         : 0U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                        ? 0U
                                                                        : 
                                                                       ((((1U 
                                                                           & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((0x40000000U 
                                                                            & vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)
                                                                            ? 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                               - (IData)(1U)))
                                                                            : 
                                                                           (0x20U 
                                                                            | (0x1fU 
                                                                               & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                           : 0U) 
                                                                         << 2U) 
                                                                        | ((1U 
                                                                            & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                            ? 
                                                                           (3U 
                                                                            & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                                               >> 0x1dU))
                                                                            : 0U))) 
                                                                      << 0x18U) 
                                                                     | ((((4U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          ((((1U 
                                                                              & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((0x40000000U 
                                                                               & vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)
                                                                               ? 
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                               : 
                                                                              (0x20U 
                                                                               | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                              : 0U) 
                                                                            << 2U) 
                                                                           | ((1U 
                                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                               ? 
                                                                              (3U 
                                                                               & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                                                >> 0x1dU))
                                                                               : 0U))) 
                                                                         << 0x10U) 
                                                                        | ((((2U 
                                                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                              ? 0U
                                                                              : 
                                                                             ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                               << 2U) 
                                                                              | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U))) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                               ? 0U
                                                                               : 
                                                                              ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                                << 2U) 
                                                                               | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))))))))))) 
                                        >> 0x20U));
    __Vtemp_h30212936__0[2U] = ((((0x200U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 8U) | ((0x100U 
                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                            ? 0U : 
                                           ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                               : 0U) 
                                             << 2U) 
                                            | ((1U 
                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes)
                                                ? (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o 
                                                      >> 0x1dU))
                                                : 0U))));
    __Vtemp_hc5f9a6b7__0[2U] = ((((0x800U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 0x18U) | ((((0x400U 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                 ? 0U
                                                 : 
                                                ((((1U 
                                                    & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                        - (IData)(1U)))
                                                     : 
                                                    (0x20U 
                                                     | (0x1fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ 
                                                            vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                    : 0U) 
                                                  << 2U) 
                                                 | ((1U 
                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    (3U 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                        >> 0x1dU))
                                                     : 0U))) 
                                               << 0x10U) 
                                              | __Vtemp_h30212936__0[2U]));
    __Vtemp_h76de1cfc__0[3U] = ((((0x2000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 8U) | ((0x1000U 
                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                            ? 0U : 
                                           ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                               : 0U) 
                                             << 2U) 
                                            | ((1U 
                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes)
                                                ? (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                      >> 0x1dU))
                                                : 0U))));
    __Vtemp_hd79ae1c4__0[0U] = __Vtemp_hb9c394a1__0[0U];
    __Vtemp_hd79ae1c4__0[1U] = __Vtemp_hb9c394a1__0[1U];
    __Vtemp_hd79ae1c4__0[2U] = __Vtemp_hc5f9a6b7__0[2U];
    __Vtemp_hd79ae1c4__0[3U] = ((((0x8000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : ((((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes)
                                              ? ((0x40000000U 
                                                  & vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                     - (IData)(1U)))
                                                  : 
                                                 (0x20U 
                                                  | (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                              : 0U) 
                                            << 2U) 
                                           | ((1U & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes)
                                               ? (3U 
                                                  & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o 
                                                     >> 0x1dU))
                                               : 0U))) 
                                 << 0x18U) | ((((0x4000U 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                 ? 0U
                                                 : 
                                                ((((1U 
                                                    & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                        - (IData)(1U)))
                                                     : 
                                                    (0x20U 
                                                     | (0x1fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ 
                                                            vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                    : 0U) 
                                                  << 2U) 
                                                 | ((1U 
                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    (3U 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                        >> 0x1dU))
                                                     : 0U))) 
                                               << 0x10U) 
                                              | __Vtemp_h76de1cfc__0[3U]));
    bufp->fullWData(oldp+834,(__Vtemp_hd79ae1c4__0),128);
    __Vtemp_hd8e3ab57__0[0U] = (IData)((((QData)((IData)(
                                                         ((2U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 2U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           (((IData)(
                                                                     (0U 
                                                                      != vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)) 
                                                             << 0x1bU) 
                                                            | (0x7ffffffU 
                                                               & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                  >> 2U))))))));
    __Vtemp_hd8e3ab57__0[1U] = ((((4U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((2U 
                                                                          & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)) 
                                                                           << 0x1bU) 
                                                                          | (0x7ffffffU 
                                                                             & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 2U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)) 
                                                                            << 0x1bU) 
                                                                           | (0x7ffffffU 
                                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 2U))))))) 
                                                      >> 0x20U)));
    __Vtemp_hd8e3ab57__0[2U] = ((((8U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((4U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_hd8e3ab57__0[3U] = ((((0x10U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                 >> 2U)))) 
                                 << 0x10U) | (((8U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                         >> 2U)))) 
                                              >> 0xcU));
    __Vtemp_hd8e3ab57__0[4U] = ((((0x20U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                 >> 2U)))) 
                                 << 0xcU) | (((0x10U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                        >> 2U)))) 
                                             >> 0x10U));
    __Vtemp_hd8e3ab57__0[5U] = ((((0x40U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                 >> 2U)))) 
                                 << 8U) | (((0x20U 
                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                             ? 0U : 
                                            (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                   >> 2U)))) 
                                           >> 0x14U));
    __Vtemp_hd8e3ab57__0[6U] = ((((0x80U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                 >> 2U)))) 
                                 << 4U) | (((0x40U 
                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                             ? 0U : 
                                            (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                   >> 2U)))) 
                                           >> 0x18U));
    __Vtemp_hd8e3ab57__0[7U] = ((((0x200U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                 >> 2U)))) 
                                 << 0x1cU) | ((0x100U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o 
                                                        >> 2U)))));
    __Vtemp_hd8e3ab57__0[8U] = ((((0x400U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (((0x200U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                         >> 2U)))) 
                                              >> 4U));
    __Vtemp_hd8e3ab57__0[9U] = ((((0x800U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((0x400U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_hd8e3ab57__0[0xaU] = ((((0x1000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                   >> 2U)))) 
                                   << 0x10U) | (((0x800U 
                                                  & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                  ? 0U
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                        >> 2U)))) 
                                                >> 0xcU));
    __Vtemp_hd8e3ab57__0[0xbU] = ((((0x2000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                   >> 2U)))) 
                                   << 0xcU) | (((0x1000U 
                                                 & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                 ? 0U
                                                 : 
                                                (((IData)(
                                                          (0U 
                                                           != vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)) 
                                                  << 0x1bU) 
                                                 | (0x7ffffffU 
                                                    & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                       >> 2U)))) 
                                               >> 0x10U));
    __Vtemp_hd8e3ab57__0[0xcU] = ((((0x4000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                   >> 2U)))) 
                                   << 8U) | (((0x2000U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                        >> 2U)))) 
                                             >> 0x14U));
    __Vtemp_hd8e3ab57__0[0xdU] = ((((0x8000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                     ? 0U : (((IData)(
                                                      (0U 
                                                       != vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6)) 
                                              << 0x1bU) 
                                             | (0x7ffffffU 
                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o 
                                                   >> 2U)))) 
                                   << 4U) | (((0x4000U 
                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                               ? 0U
                                               : (((IData)(
                                                           (0U 
                                                            != vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                        >> 2U)))) 
                                             >> 0x18U));
    bufp->fullWData(oldp+838,(__Vtemp_hd8e3ab57__0),448);
    if (vlSelf->io_Isposit) {
        __Vtemp_hbf8b0890__0[0U] = VQvuTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hbf8b0890__0[1U] = VQvuTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hbf8b0890__0[2U] = VQvuTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hbf8b0890__0[3U] = VQvuTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hbf8b0890__0[4U] = VQvuTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hbf8b0890__0[5U] = VQvuTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hbf8b0890__0[6U] = VQvuTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hbf8b0890__0[7U] = VQvuTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hbf8b0890__0[8U] = VQvuTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hbf8b0890__0[9U] = VQvuTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hbf8b0890__0[0xaU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hbf8b0890__0[0xbU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hbf8b0890__0[0xcU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hbf8b0890__0[0xdU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hbf8b0890__0[0xeU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hbf8b0890__0[0xfU] = VQvuTop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else {
        __Vtemp_hbf8b0890__0[0U] = (IData)(vlSelf->io_float_i_0);
        __Vtemp_hbf8b0890__0[1U] = (IData)(vlSelf->io_float_i_1);
        __Vtemp_hbf8b0890__0[2U] = (IData)(vlSelf->io_float_i_2);
        __Vtemp_hbf8b0890__0[3U] = (IData)(vlSelf->io_float_i_3);
        __Vtemp_hbf8b0890__0[4U] = (IData)(vlSelf->io_float_i_4);
        __Vtemp_hbf8b0890__0[5U] = (IData)(vlSelf->io_float_i_5);
        __Vtemp_hbf8b0890__0[6U] = (IData)(vlSelf->io_float_i_6);
        __Vtemp_hbf8b0890__0[7U] = (IData)(vlSelf->io_float_i_7);
        __Vtemp_hbf8b0890__0[8U] = (IData)(vlSelf->io_float_i_8);
        __Vtemp_hbf8b0890__0[9U] = (IData)(vlSelf->io_float_i_9);
        __Vtemp_hbf8b0890__0[0xaU] = (IData)(vlSelf->io_float_i_10);
        __Vtemp_hbf8b0890__0[0xbU] = (IData)(vlSelf->io_float_i_11);
        __Vtemp_hbf8b0890__0[0xcU] = (IData)(vlSelf->io_float_i_12);
        __Vtemp_hbf8b0890__0[0xdU] = (IData)(vlSelf->io_float_i_13);
        __Vtemp_hbf8b0890__0[0xeU] = (IData)((((QData)((IData)(vlSelf->io_float_i_15)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->io_float_i_14))));
        __Vtemp_hbf8b0890__0[0xfU] = (IData)(((((QData)((IData)(vlSelf->io_float_i_15)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->io_float_i_14))) 
                                              >> 0x20U));
    }
    bufp->fullWData(oldp+852,(__Vtemp_hbf8b0890__0),512);
    bufp->fullSData(oldp+868,(((0x8000U & (((~ (IData)(vlSelf->io_Isposit)) 
                                            & (IData)(
                                                      (vlSelf->io_float_i_15 
                                                       >> 0x1fU))) 
                                           << 0xfU)) 
                               | ((0x4000U & (((~ (IData)(vlSelf->io_Isposit)) 
                                               & (IData)(
                                                         (vlSelf->io_float_i_14 
                                                          >> 0x1fU))) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((~ (IData)(vlSelf->io_Isposit)) 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_13 
                                                             >> 0x1fU))) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((~ (IData)(vlSelf->io_Isposit)) 
                                           & (IData)(
                                                     (vlSelf->io_float_i_12 
                                                      >> 0x1fU))) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((~ (IData)(vlSelf->io_Isposit)) 
                                                & (IData)(
                                                          (vlSelf->io_float_i_11 
                                                           >> 0x1fU))) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((~ (IData)(vlSelf->io_Isposit)) 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_10 
                                                              >> 0x1fU))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (((~ (IData)(vlSelf->io_Isposit)) 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_9 
                                                                 >> 0x1fU))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & (((~ (IData)(vlSelf->io_Isposit)) 
                                                         & (IData)(
                                                                   (vlSelf->io_float_i_8 
                                                                    >> 0x1fU))) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & (((~ (IData)(vlSelf->io_Isposit)) 
                                                            & (IData)(
                                                                      (vlSelf->io_float_i_7 
                                                                       >> 0x1fU))) 
                                                           << 7U)) 
                                                       | ((0x40U 
                                                           & (((~ (IData)(vlSelf->io_Isposit)) 
                                                               & (IData)(
                                                                         (vlSelf->io_float_i_6 
                                                                          >> 0x1fU))) 
                                                              << 6U)) 
                                                          | ((0x20U 
                                                              & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                  & (IData)(
                                                                            (vlSelf->io_float_i_5 
                                                                             >> 0x1fU))) 
                                                                 << 5U)) 
                                                             | ((0x10U 
                                                                 & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                     & (IData)(
                                                                               (vlSelf->io_float_i_4 
                                                                                >> 0x1fU))) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                        & (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 0x1fU))) 
                                                                       << 3U)) 
                                                                   | ((4U 
                                                                       & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                           & (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 0x1fU))) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((~ (IData)(vlSelf->io_Isposit)) 
                                                                              & (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 0x1fU))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((~ (IData)(vlSelf->io_Isposit)) 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x1fU)))))))))))))))))))),16);
    __Vtemp_h7fb1b112__0[0U] = (IData)((((QData)((IData)(
                                                         (VL_LTS_IQQ(33, 0x7fULL, 
                                                                     ((0ULL 
                                                                       == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                       ? 0ULL
                                                                       : 0x1ffffff9cULL))
                                                           ? 0x7fU
                                                           : 
                                                          (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                      ((0ULL 
                                                                        == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                        ? 0ULL
                                                                        : 0x1ffffff9cULL))
                                                            ? 0x80U
                                                            : 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                             ? 0U
                                                             : 0x9cU))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (VL_LTS_IQQ(33, 0x7fULL, 
                                                                        ((0ULL 
                                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                          ? 0ULL
                                                                          : 0x64ULL))
                                                              ? 0x7fU
                                                              : 
                                                             (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                         ((0ULL 
                                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                           ? 0ULL
                                                                           : 0x64ULL))
                                                               ? 0x80U
                                                               : 
                                                              ((0ULL 
                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                ? 0U
                                                                : 0x64U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (VL_LTS_IQQ(33, 0x7fULL, 
                                                                           ((0ULL 
                                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                             ? 0ULL
                                                                             : 0x1ffffffe0ULL))
                                                                 ? 0x7fU
                                                                 : 
                                                                (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                            ((0ULL 
                                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                              ? 0ULL
                                                                              : 0x1ffffffe0ULL))
                                                                  ? 0x80U
                                                                  : 
                                                                 ((0ULL 
                                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                   ? 0U
                                                                   : 0xe0U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                    ? 0x7fU
                                                                    : 
                                                                   (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                     ? 0x80U
                                                                     : 
                                                                    ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                     << 5U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                       ? 0x7fU
                                                                       : 
                                                                      (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                        ? 0x80U
                                                                        : 
                                                                       ((0ULL 
                                                                         == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                         ? 0U
                                                                         : 0xc0U))) 
                                                                     << 0x18U) 
                                                                    | (((VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                          ? 0x7fU
                                                                          : 
                                                                         (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                           ? 0x80U
                                                                           : 
                                                                          ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                           << 6U))) 
                                                                        << 0x10U) 
                                                                       | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                             ? 0x7fU
                                                                             : 
                                                                            (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                              ? 0x80U
                                                                              : 
                                                                             ((0ULL 
                                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                               ? 0U
                                                                               : 0x80U))) 
                                                                           << 8U) 
                                                                          | (VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                              ? 0x7fU
                                                                              : 
                                                                             (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                               ? 0x80U
                                                                               : 
                                                                              ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                ? 0U
                                                                                : 0x7fU)))))))))))));
    __Vtemp_h7fb1b112__0[1U] = (IData)(((((QData)((IData)(
                                                          (VL_LTS_IQQ(33, 0x7fULL, 
                                                                      ((0ULL 
                                                                        == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                        ? 0ULL
                                                                        : 0x1ffffff9cULL))
                                                            ? 0x7fU
                                                            : 
                                                           (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                       ((0ULL 
                                                                         == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                         ? 0ULL
                                                                         : 0x1ffffff9cULL))
                                                             ? 0x80U
                                                             : 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                              ? 0U
                                                              : 0x9cU))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (VL_LTS_IQQ(33, 0x7fULL, 
                                                                         ((0ULL 
                                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                           ? 0ULL
                                                                           : 0x64ULL))
                                                               ? 0x7fU
                                                               : 
                                                              (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                          ((0ULL 
                                                                            == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                            ? 0ULL
                                                                            : 0x64ULL))
                                                                ? 0x80U
                                                                : 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                                 ? 0U
                                                                 : 0x64U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (VL_LTS_IQQ(33, 0x7fULL, 
                                                                            ((0ULL 
                                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                              ? 0ULL
                                                                              : 0x1ffffffe0ULL))
                                                                  ? 0x7fU
                                                                  : 
                                                                 (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                             ((0ULL 
                                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                               ? 0ULL
                                                                               : 0x1ffffffe0ULL))
                                                                   ? 0x80U
                                                                   : 
                                                                  ((0ULL 
                                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                    ? 0U
                                                                    : 0xe0U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                     ? 0x7fU
                                                                     : 
                                                                    (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                                      ? 0x80U
                                                                      : 
                                                                     ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                      << 5U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                        ? 0x7fU
                                                                        : 
                                                                       (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffffc0ULL))
                                                                         ? 0x80U
                                                                         : 
                                                                        ((0ULL 
                                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                          ? 0U
                                                                          : 0xc0U))) 
                                                                      << 0x18U) 
                                                                     | (((VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                           ? 0x7fU
                                                                           : 
                                                                          (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                                            ? 0x80U
                                                                            : 
                                                                           ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                            << 6U))) 
                                                                         << 0x10U) 
                                                                        | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                              ? 0x7fU
                                                                              : 
                                                                             (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                 ? 0ULL
                                                                                 : 0x1ffffff80ULL))
                                                                               ? 0x80U
                                                                               : 
                                                                              ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                                ? 0U
                                                                                : 0x80U))) 
                                                                            << 8U) 
                                                                           | (VL_LTS_IQQ(33, 0x7fULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                               ? 0x7fU
                                                                               : 
                                                                              (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                                ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0ULL
                                                                                 : 0x7fULL))
                                                                                ? 0x80U
                                                                                : 
                                                                               ((0ULL 
                                                                                == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                                                 ? 0U
                                                                                 : 0x7fU)))))))))))) 
                                        >> 0x20U));
    __Vtemp_hf815a4b1__0[2U] = (((VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                          ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                           << 6U))))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))
                                               ? 0x80U
                                               : ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                  << 6U))) 
                                 << 0x10U) | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                             ? 0ULL
                                                             : 0x1ffffff80ULL))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                              ? 0ULL
                                                              : 0x1ffffff80ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                   ? 0U
                                                   : 0x80U))) 
                                               << 8U) 
                                              | (VL_LTS_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                              ? 0ULL
                                                              : 0x7fULL))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                               ? 0ULL
                                                               : 0x7fULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                    ? 0U
                                                    : 0x7fU)))));
    __Vtemp_h53a2d94e__0[3U] = (((VL_LTS_IQQ(33, 0x7fULL, 
                                             ((0ULL 
                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                               ? 0ULL
                                               : 0x64ULL))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                           ? 0ULL
                                                           : 0x64ULL))
                                               ? 0x80U
                                               : ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                   ? 0U
                                                   : 0x64U))) 
                                 << 0x10U) | (((VL_LTS_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                             ? 0ULL
                                                             : 0x1ffffffe0ULL))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                              ? 0ULL
                                                              : 0x1ffffffe0ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                   ? 0U
                                                   : 0xe0U))) 
                                               << 8U) 
                                              | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                                   ? 0x80U
                                                   : 
                                                  ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                   << 5U)))));
    __Vtemp_h2d4cfaee__0[0U] = __Vtemp_h7fb1b112__0[0U];
    __Vtemp_h2d4cfaee__0[1U] = __Vtemp_h7fb1b112__0[1U];
    __Vtemp_h2d4cfaee__0[2U] = (((VL_LTS_IQQ(33, 0x7fULL, 
                                             ((0ULL 
                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                               ? 0ULL
                                               : 0x1ffffffc0ULL))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                           ? 0ULL
                                                           : 0x1ffffffc0ULL))
                                               ? 0x80U
                                               : ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                   ? 0U
                                                   : 0xc0U))) 
                                 << 0x18U) | __Vtemp_hf815a4b1__0[2U]);
    __Vtemp_h2d4cfaee__0[3U] = (((VL_LTS_IQQ(33, 0x7fULL, 
                                             ((0ULL 
                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                               ? 0ULL
                                               : 0x1ffffff9cULL))
                                   ? 0x7fU : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                           ? 0ULL
                                                           : 0x1ffffff9cULL))
                                               ? 0x80U
                                               : ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                   ? 0U
                                                   : 0x9cU))) 
                                 << 0x18U) | __Vtemp_h53a2d94e__0[3U]);
    bufp->fullWData(oldp+869,(__Vtemp_h2d4cfaee__0),128);
    bufp->fullBit(oldp+873,(((0U == (IData)(vlSelf->QvuTop__DOT__resetCounter)) 
                             | (IData)(vlSelf->io_reset_window))));
    bufp->fullBit(oldp+874,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+875,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+876,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+877,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+878,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+879,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+880,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+881,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+882,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+883,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+884,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+885,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+886,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+887,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+888,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+889,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+890,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+891,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+892,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+893,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+894,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+895,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+896,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+897,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+898,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+899,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+900,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+901,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+902,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+903,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+904,((1U & (~ vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+905,(vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullIData(oldp+906,(0x1fU),32);
    bufp->fullBit(oldp+907,(1U));
    bufp->fullIData(oldp+908,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+909,(__Vtemp_hc5d9e20e__0),155);
}
