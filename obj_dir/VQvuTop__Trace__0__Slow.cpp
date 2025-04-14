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
    tracep->declBit(c+359,"clock", false,-1);
    tracep->declBit(c+360,"reset", false,-1);
    tracep->declBus(c+361,"io_posit_i1_0", false,-1, 31,0);
    tracep->declBus(c+362,"io_posit_i1_1", false,-1, 31,0);
    tracep->declBus(c+363,"io_posit_i1_2", false,-1, 31,0);
    tracep->declBus(c+364,"io_posit_i1_3", false,-1, 31,0);
    tracep->declBus(c+365,"io_posit_i2_0", false,-1, 31,0);
    tracep->declBus(c+366,"io_posit_i2_1", false,-1, 31,0);
    tracep->declBus(c+367,"io_posit_i2_2", false,-1, 31,0);
    tracep->declBus(c+368,"io_posit_i2_3", false,-1, 31,0);
    tracep->declBus(c+369,"io_op", false,-1, 3,0);
    tracep->declBit(c+370,"io_Isposit", false,-1);
    tracep->declBit(c+371,"io_Outposit", false,-1);
    tracep->declQuad(c+372,"io_float_i_0", false,-1, 63,0);
    tracep->declQuad(c+374,"io_float_i_1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_float_i_2", false,-1, 63,0);
    tracep->declQuad(c+378,"io_float_i_3", false,-1, 63,0);
    tracep->declQuad(c+380,"io_float_i2_0", false,-1, 63,0);
    tracep->declQuad(c+382,"io_float_i2_1", false,-1, 63,0);
    tracep->declQuad(c+384,"io_float_i2_2", false,-1, 63,0);
    tracep->declQuad(c+386,"io_float_i2_3", false,-1, 63,0);
    tracep->declBus(c+388,"io_float_mode", false,-1, 2,0);
    tracep->declBit(c+389,"io_float_posit", false,-1);
    tracep->declBus(c+390,"io_src_posit_width", false,-1, 5,0);
    tracep->declBus(c+391,"io_vector_size", false,-1, 2,0);
    tracep->declBus(c+392,"io_dst_posit_width", false,-1, 5,0);
    tracep->declQuad(c+393,"io_float_o_0", false,-1, 63,0);
    tracep->declQuad(c+395,"io_float_o_1", false,-1, 63,0);
    tracep->declQuad(c+397,"io_float_o_2", false,-1, 63,0);
    tracep->declQuad(c+399,"io_float_o_3", false,-1, 63,0);
    tracep->declQuad(c+401,"io_float_dot_o", false,-1, 63,0);
    tracep->declBus(c+403,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+404,"io_posit_o_1", false,-1, 31,0);
    tracep->declBus(c+405,"io_posit_o_2", false,-1, 31,0);
    tracep->declBus(c+406,"io_posit_o_3", false,-1, 31,0);
    tracep->declBus(c+407,"io_posit_dot_o", false,-1, 31,0);
    tracep->declBus(c+408,"io_int_o_0", false,-1, 31,0);
    tracep->declBus(c+409,"io_int_o_1", false,-1, 31,0);
    tracep->declBus(c+410,"io_int_o_2", false,-1, 31,0);
    tracep->declBus(c+411,"io_int_o_3", false,-1, 31,0);
    tracep->pushNamePrefix("QvuTop ");
    tracep->declBit(c+359,"clock", false,-1);
    tracep->declBit(c+360,"reset", false,-1);
    tracep->declBus(c+361,"io_posit_i1_0", false,-1, 31,0);
    tracep->declBus(c+362,"io_posit_i1_1", false,-1, 31,0);
    tracep->declBus(c+363,"io_posit_i1_2", false,-1, 31,0);
    tracep->declBus(c+364,"io_posit_i1_3", false,-1, 31,0);
    tracep->declBus(c+365,"io_posit_i2_0", false,-1, 31,0);
    tracep->declBus(c+366,"io_posit_i2_1", false,-1, 31,0);
    tracep->declBus(c+367,"io_posit_i2_2", false,-1, 31,0);
    tracep->declBus(c+368,"io_posit_i2_3", false,-1, 31,0);
    tracep->declBus(c+369,"io_op", false,-1, 3,0);
    tracep->declBit(c+370,"io_Isposit", false,-1);
    tracep->declBit(c+371,"io_Outposit", false,-1);
    tracep->declQuad(c+372,"io_float_i_0", false,-1, 63,0);
    tracep->declQuad(c+374,"io_float_i_1", false,-1, 63,0);
    tracep->declQuad(c+376,"io_float_i_2", false,-1, 63,0);
    tracep->declQuad(c+378,"io_float_i_3", false,-1, 63,0);
    tracep->declQuad(c+380,"io_float_i2_0", false,-1, 63,0);
    tracep->declQuad(c+382,"io_float_i2_1", false,-1, 63,0);
    tracep->declQuad(c+384,"io_float_i2_2", false,-1, 63,0);
    tracep->declQuad(c+386,"io_float_i2_3", false,-1, 63,0);
    tracep->declBus(c+388,"io_float_mode", false,-1, 2,0);
    tracep->declBit(c+389,"io_float_posit", false,-1);
    tracep->declBus(c+390,"io_src_posit_width", false,-1, 5,0);
    tracep->declBus(c+391,"io_vector_size", false,-1, 2,0);
    tracep->declBus(c+392,"io_dst_posit_width", false,-1, 5,0);
    tracep->declQuad(c+393,"io_float_o_0", false,-1, 63,0);
    tracep->declQuad(c+395,"io_float_o_1", false,-1, 63,0);
    tracep->declQuad(c+397,"io_float_o_2", false,-1, 63,0);
    tracep->declQuad(c+399,"io_float_o_3", false,-1, 63,0);
    tracep->declQuad(c+401,"io_float_dot_o", false,-1, 63,0);
    tracep->declBus(c+403,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+404,"io_posit_o_1", false,-1, 31,0);
    tracep->declBus(c+405,"io_posit_o_2", false,-1, 31,0);
    tracep->declBus(c+406,"io_posit_o_3", false,-1, 31,0);
    tracep->declBus(c+407,"io_posit_dot_o", false,-1, 31,0);
    tracep->declBus(c+408,"io_int_o_0", false,-1, 31,0);
    tracep->declBus(c+409,"io_int_o_1", false,-1, 31,0);
    tracep->declBus(c+410,"io_int_o_2", false,-1, 31,0);
    tracep->declBus(c+411,"io_int_o_3", false,-1, 31,0);
    tracep->declBus(c+1,"ACTUAL_VECTOR_SIZE", false,-1, 2,0);
    tracep->declArray(c+200,"pir_frac", false,-1, 131,0);
    tracep->pushNamePrefix("decode1 ");
    tracep->declArray(c+412,"io_posit", false,-1, 127,0);
    tracep->declBus(c+2,"io_Sign", false,-1, 3,0);
    tracep->declBus(c+416,"io_Exp", false,-1, 31,0);
    tracep->declArray(c+417,"io_Frac", false,-1, 111,0);
    tracep->declBus(c+3,"isNaR", false,-1, 3,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+4,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+109,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+110,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_1 ");
    tracep->declBus(c+5,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+101,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+102,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_2 ");
    tracep->declBus(c+6,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+93,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+94,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_3 ");
    tracep->declBus(c+7,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+85,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+86,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"in_i", false,-1, 30,0);
    tracep->declBus(c+111,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+421,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+422,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+112,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+9,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("lzcModule_1 ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"in_i", false,-1, 30,0);
    tracep->declBus(c+103,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+423,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+424,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+104,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+11,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("lzcModule_2 ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"in_i", false,-1, 30,0);
    tracep->declBus(c+95,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+425,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+426,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+96,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+13,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("lzcModule_3 ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"in_i", false,-1, 30,0);
    tracep->declBus(c+87,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+427,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+428,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+88,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+15,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("decode2 ");
    tracep->declArray(c+429,"io_posit", false,-1, 127,0);
    tracep->declBus(c+16,"io_Sign", false,-1, 3,0);
    tracep->declBus(c+433,"io_Exp", false,-1, 31,0);
    tracep->declArray(c+434,"io_Frac", false,-1, 111,0);
    tracep->declBus(c+17,"isNaR", false,-1, 3,0);
    tracep->pushNamePrefix("barrel_shifter ");
    tracep->declBus(c+18,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+77,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+78,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_1 ");
    tracep->declBus(c+19,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+69,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+70,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_2 ");
    tracep->declBus(c+20,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+61,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+62,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("barrel_shifter_3 ");
    tracep->declBus(c+21,"io_operand_i", false,-1, 30,0);
    tracep->declBus(c+53,"io_shift_amount", false,-1, 4,0);
    tracep->declBus(c+54,"io_result_o", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzcModule ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"in_i", false,-1, 30,0);
    tracep->declBus(c+79,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+438,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+439,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+80,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+23,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("lzcModule_1 ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"in_i", false,-1, 30,0);
    tracep->declBus(c+71,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+440,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+441,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+72,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+25,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("lzcModule_2 ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+26,"in_i", false,-1, 30,0);
    tracep->declBus(c+63,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+442,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+443,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+64,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+27,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("lzcModule_3 ");
    tracep->declBus(c+462,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+463,"MODE", false,-1);
    tracep->declBus(c+464,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"in_i", false,-1, 30,0);
    tracep->declBus(c+55,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+444,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+464,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+465,"index_lut", false,-1, 154,0);
    tracep->declBus(c+445,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+56,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+29,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
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
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("floatDecode1 ");
    tracep->declArray(c+446,"io_float", false,-1, 127,0);
    tracep->declBus(c+450,"io_Sign", false,-1, 3,0);
    tracep->declQuad(c+30,"io_Exp", false,-1, 35,0);
    tracep->declArray(c+32,"io_Frac", false,-1, 95,0);
    tracep->declBus(c+451,"io_isNaN", false,-1, 3,0);
    tracep->declBus(c+35,"io_isInf", false,-1, 3,0);
    tracep->declBus(c+36,"io_isZero", false,-1, 3,0);
    tracep->declBit(c+37,"isExpAllZeros", false,-1);
    tracep->declBit(c+38,"isExpAllZeros_1", false,-1);
    tracep->declBit(c+39,"isExpAllZeros_2", false,-1);
    tracep->declBit(c+40,"isExpAllZeros_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("floatDecode2 ");
    tracep->declArray(c+452,"io_float", false,-1, 127,0);
    tracep->declBus(c+456,"io_Sign", false,-1, 3,0);
    tracep->declQuad(c+41,"io_Exp", false,-1, 35,0);
    tracep->declArray(c+43,"io_Frac", false,-1, 95,0);
    tracep->declBus(c+457,"io_isNaN", false,-1, 3,0);
    tracep->declBus(c+46,"io_isInf", false,-1, 3,0);
    tracep->declBus(c+47,"io_isZero", false,-1, 3,0);
    tracep->declBit(c+48,"isExpAllZeros", false,-1);
    tracep->declBit(c+49,"isExpAllZeros_1", false,-1);
    tracep->declBit(c+50,"isExpAllZeros_2", false,-1);
    tracep->declBit(c+51,"isExpAllZeros_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantizeFP16 ");
    tracep->declBus(c+52,"io_pir_sign_i", false,-1, 3,0);
    tracep->declBus(c+117,"io_pir_exp_i", false,-1, 31,0);
    tracep->declArray(c+200,"io_pir_frac_i", false,-1, 131,0);
    tracep->declQuad(c+458,"io_fp16_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantizeFP4 ");
    tracep->declBit(c+359,"clock", false,-1);
    tracep->declBit(c+360,"reset", false,-1);
    tracep->declBus(c+52,"io_pir_sign_i", false,-1, 3,0);
    tracep->declBus(c+117,"io_pir_exp_i", false,-1, 31,0);
    tracep->declArray(c+200,"io_pir_frac_i", false,-1, 131,0);
    tracep->declBus(c+460,"io_fp4_o", false,-1, 15,0);
    tracep->declArray(c+205,"windowMax", false,-1, 263,0);
    tracep->declArray(c+214,"windowMin", false,-1, 263,0);
    tracep->declBus(c+223,"windowValid", false,-1, 7,0);
    tracep->declBus(c+224,"windowPtr", false,-1, 2,0);
    tracep->declQuad(c+225,"globalMax", false,-1, 32,0);
    tracep->declQuad(c+227,"globalMin", false,-1, 32,0);
    tracep->declQuad(c+229,"globalScale", false,-1, 32,0);
    tracep->declQuad(c+231,"batchMax", false,-1, 32,0);
    tracep->declQuad(c+233,"batchMin", false,-1, 32,0);
    tracep->declBit(c+235,"batchHasData", false,-1);
    tracep->declBus(c+236,"state", false,-1, 1,0);
    tracep->declQuad(c+126,"valueAbs", false,-1, 32,0);
    tracep->declBus(c+128,"quantIndex", false,-1, 2,0);
    tracep->declQuad(c+129,"valueAbs_1", false,-1, 32,0);
    tracep->declBus(c+131,"quantIndex_1", false,-1, 2,0);
    tracep->declQuad(c+132,"valueAbs_2", false,-1, 32,0);
    tracep->declBus(c+134,"quantIndex_2", false,-1, 2,0);
    tracep->declQuad(c+135,"valueAbs_3", false,-1, 32,0);
    tracep->declBus(c+137,"quantIndex_3", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declQuad(c+237,"effectiveMax_leftMax_leftMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+239,"effectiveMax_leftMax_leftMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+241,"effectiveMax_leftMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+243,"effectiveMax_leftMax_rightMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+245,"effectiveMax_leftMax_rightMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+247,"effectiveMax_leftMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+249,"effectiveMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+251,"effectiveMax_rightMax_leftMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+253,"effectiveMax_rightMax_leftMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+255,"effectiveMax_rightMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+257,"effectiveMax_rightMax_rightMax_leftMax", false,-1, 32,0);
    tracep->declQuad(c+259,"effectiveMax_rightMax_rightMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+261,"effectiveMax_rightMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+263,"effectiveMax_rightMax", false,-1, 32,0);
    tracep->declQuad(c+265,"effectiveMax", false,-1, 32,0);
    tracep->declQuad(c+267,"effectiveMin_leftMin_leftMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+269,"effectiveMin_leftMin_leftMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+271,"effectiveMin_leftMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+273,"effectiveMin_leftMin_rightMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+275,"effectiveMin_leftMin_rightMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+277,"effectiveMin_leftMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+279,"effectiveMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+281,"effectiveMin_rightMin_leftMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+283,"effectiveMin_rightMin_leftMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+285,"effectiveMin_rightMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+287,"effectiveMin_rightMin_rightMin_leftMin", false,-1, 32,0);
    tracep->declQuad(c+289,"effectiveMin_rightMin_rightMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+291,"effectiveMin_rightMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+293,"effectiveMin_rightMin", false,-1, 32,0);
    tracep->declQuad(c+295,"effectiveMin", false,-1, 32,0);
    tracep->declQuad(c+297,"dataRange", false,-1, 32,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("quantizeFP8 ");
    tracep->declBus(c+52,"io_pir_sign_i", false,-1, 3,0);
    tracep->declBus(c+117,"io_pir_exp_i", false,-1, 31,0);
    tracep->declArray(c+200,"io_pir_frac_i", false,-1, 131,0);
    tracep->declBus(c+461,"io_fp8_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantizeInt4 ");
    tracep->declBit(c+359,"clock", false,-1);
    tracep->declBit(c+360,"reset", false,-1);
    tracep->declBus(c+52,"io_pir_sign_i", false,-1, 3,0);
    tracep->declBus(c+117,"io_pir_exp_i", false,-1, 31,0);
    tracep->declArray(c+200,"io_pir_frac_i", false,-1, 131,0);
    tracep->declBus(c+138,"io_int4_o", false,-1, 15,0);
    tracep->declQuad(c+299,"globalMax", false,-1, 32,0);
    tracep->declQuad(c+301,"globalMin", false,-1, 32,0);
    tracep->declQuad(c+303,"globalScale", false,-1, 32,0);
    tracep->declQuad(c+305,"globalOffset", false,-1, 32,0);
    tracep->declQuad(c+307,"batchMax", false,-1, 32,0);
    tracep->declQuad(c+309,"batchMin", false,-1, 32,0);
    tracep->declBit(c+311,"batchHasData", false,-1);
    tracep->declBus(c+312,"state", false,-1, 1,0);
    tracep->declArray(c+313,"histogram", false,-1, 127,0);
    tracep->declBus(c+317,"histogramTotal", false,-1, 19,0);
    tracep->declBus(c+118,"shiftVal", false,-1, 5,0);
    tracep->declBus(c+119,"shiftedFrac", false,-1, 31,0);
    tracep->declBus(c+120,"shiftVal_1", false,-1, 5,0);
    tracep->declBus(c+121,"shiftedFrac_1", false,-1, 31,0);
    tracep->declBus(c+122,"shiftVal_2", false,-1, 5,0);
    tracep->declBus(c+123,"shiftedFrac_2", false,-1, 31,0);
    tracep->declBus(c+124,"shiftVal_3", false,-1, 5,0);
    tracep->declBus(c+125,"shiftedFrac_3", false,-1, 31,0);
    tracep->declQuad(c+139,"scaledValue", false,-1, 33,0);
    tracep->declQuad(c+141,"remainder", false,-1, 32,0);
    tracep->declQuad(c+143,"tempIdx", false,-1, 33,0);
    tracep->declBit(c+145,"needRounding", false,-1);
    tracep->declBus(c+146,"roundingDirection", false,-1, 1,0);
    tracep->declQuad(c+147,"quantizedValue", false,-1, 32,0);
    tracep->declQuad(c+149,"scaledValue_1", false,-1, 33,0);
    tracep->declQuad(c+151,"remainder_1", false,-1, 32,0);
    tracep->declQuad(c+153,"tempIdx_1", false,-1, 33,0);
    tracep->declBit(c+155,"needRounding_1", false,-1);
    tracep->declBus(c+156,"roundingDirection_1", false,-1, 1,0);
    tracep->declQuad(c+157,"quantizedValue_1", false,-1, 32,0);
    tracep->declQuad(c+159,"scaledValue_2", false,-1, 33,0);
    tracep->declQuad(c+161,"remainder_2", false,-1, 32,0);
    tracep->declQuad(c+163,"tempIdx_2", false,-1, 33,0);
    tracep->declBit(c+165,"needRounding_2", false,-1);
    tracep->declBus(c+166,"roundingDirection_2", false,-1, 1,0);
    tracep->declQuad(c+167,"quantizedValue_2", false,-1, 32,0);
    tracep->declQuad(c+169,"scaledValue_3", false,-1, 33,0);
    tracep->declQuad(c+171,"remainder_3", false,-1, 32,0);
    tracep->declQuad(c+173,"tempIdx_3", false,-1, 33,0);
    tracep->declBit(c+175,"needRounding_3", false,-1);
    tracep->declBus(c+176,"roundingDirection_3", false,-1, 1,0);
    tracep->declQuad(c+177,"quantizedValue_3", false,-1, 32,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+318,"lowerThreshold", false,-1, 22,0);
    tracep->declQuad(c+319,"binWidth_4", false,-1, 32,0);
    tracep->declQuad(c+321,"effectiveMin", false,-1, 32,0);
    tracep->declQuad(c+323,"effectiveMax", false,-1, 32,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declQuad(c+325,"binWidth", false,-1, 32,0);
    tracep->declQuad(c+327,"tempIndex", false,-1, 32,0);
    tracep->declBus(c+329,"safeIndex", false,-1, 2,0);
    tracep->declQuad(c+330,"binWidth_1", false,-1, 32,0);
    tracep->declQuad(c+332,"tempIndex_1", false,-1, 32,0);
    tracep->declBus(c+334,"safeIndex_1", false,-1, 2,0);
    tracep->declQuad(c+335,"binWidth_2", false,-1, 32,0);
    tracep->declQuad(c+337,"tempIndex_2", false,-1, 32,0);
    tracep->declBus(c+339,"safeIndex_2", false,-1, 2,0);
    tracep->declQuad(c+340,"binWidth_3", false,-1, 32,0);
    tracep->declQuad(c+342,"tempIndex_3", false,-1, 32,0);
    tracep->declBus(c+344,"safeIndex_3", false,-1, 2,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("quantizeInt8 ");
    tracep->declBit(c+359,"clock", false,-1);
    tracep->declBit(c+360,"reset", false,-1);
    tracep->declBus(c+52,"io_pir_sign_i", false,-1, 3,0);
    tracep->declBus(c+117,"io_pir_exp_i", false,-1, 31,0);
    tracep->declArray(c+200,"io_pir_frac_i", false,-1, 131,0);
    tracep->declBus(c+179,"io_int8_o", false,-1, 31,0);
    tracep->declQuad(c+345,"globalMax", false,-1, 32,0);
    tracep->declQuad(c+347,"globalMin", false,-1, 32,0);
    tracep->declQuad(c+349,"globalScale", false,-1, 32,0);
    tracep->declQuad(c+351,"globalOffset", false,-1, 32,0);
    tracep->declQuad(c+353,"batchMax", false,-1, 32,0);
    tracep->declQuad(c+355,"batchMin", false,-1, 32,0);
    tracep->declBit(c+357,"batchHasData", false,-1);
    tracep->declBus(c+358,"state", false,-1, 1,0);
    tracep->declBus(c+118,"shiftVal", false,-1, 5,0);
    tracep->declBus(c+119,"shiftedFrac", false,-1, 31,0);
    tracep->declBus(c+120,"shiftVal_1", false,-1, 5,0);
    tracep->declBus(c+121,"shiftedFrac_1", false,-1, 31,0);
    tracep->declBus(c+122,"shiftVal_2", false,-1, 5,0);
    tracep->declBus(c+123,"shiftedFrac_2", false,-1, 31,0);
    tracep->declBus(c+124,"shiftVal_3", false,-1, 5,0);
    tracep->declBus(c+125,"shiftedFrac_3", false,-1, 31,0);
    tracep->declQuad(c+180,"scaledValue", false,-1, 33,0);
    tracep->declQuad(c+182,"remainder", false,-1, 32,0);
    tracep->declBit(c+184,"needRounding", false,-1);
    tracep->declQuad(c+185,"scaledValue_1", false,-1, 33,0);
    tracep->declQuad(c+187,"remainder_1", false,-1, 32,0);
    tracep->declBit(c+189,"needRounding_1", false,-1);
    tracep->declQuad(c+190,"scaledValue_2", false,-1, 33,0);
    tracep->declQuad(c+192,"remainder_2", false,-1, 32,0);
    tracep->declBit(c+194,"needRounding_2", false,-1);
    tracep->declQuad(c+195,"scaledValue_3", false,-1, 33,0);
    tracep->declQuad(c+197,"remainder_3", false,-1, 32,0);
    tracep->declBit(c+199,"needRounding_3", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQvuTop___024root__trace_init_top(VQvuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_init_top\n"); );
    // Body
    VQvuTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
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

VL_ATTR_COLD void VQvuTop___024root__trace_full_sub_0(VQvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h829b5439__0;
    VlWide<3>/*95:0*/ __Vtemp_h32f0c7c3__0;
    VlWide<4>/*127:0*/ __Vtemp_h1b06671e__0;
    VlWide<4>/*127:0*/ __Vtemp_h6dabf4ce__0;
    VlWide<4>/*127:0*/ __Vtemp_ha81f68f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hf607cc56__0;
    VlWide<4>/*127:0*/ __Vtemp_h4bbae0a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc5c8910__0;
    VlWide<5>/*159:0*/ __Vtemp_hc5d9e20e__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE),3);
    bufp->fullCData(oldp+2,((((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h21c2c097__0) 
                              << 3U) | (((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h217d4d15__0) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h24cba9c4__0) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->QvuTop__DOT__decode1__DOT____VdfgTmp_h244a7236__0))))),4);
    bufp->fullCData(oldp+3,(vlSelf->QvuTop__DOT__decode1__DOT__isNaR),4);
    bufp->fullIData(oldp+4,(vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6),31);
    bufp->fullIData(oldp+5,(vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6),31);
    bufp->fullIData(oldp+6,(vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6),31);
    bufp->fullIData(oldp+7,(vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6),31);
    bufp->fullIData(oldp+8,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule__in_i),31);
    bufp->fullIData(oldp+9,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+10,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_1__in_i),31);
    bufp->fullIData(oldp+11,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+12,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_2__in_i),31);
    bufp->fullIData(oldp+13,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+14,(vlSelf->QvuTop__DOT__decode1__DOT____Vcellinp__lzcModule_3__in_i),31);
    bufp->fullIData(oldp+15,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullCData(oldp+16,((((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h21c2c097__0) 
                               << 3U) | (((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h217d4d15__0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h24cba9c4__0) 
                                           << 1U) | (IData)(vlSelf->QvuTop__DOT__decode2__DOT____VdfgTmp_h244a7236__0))))),4);
    bufp->fullCData(oldp+17,(vlSelf->QvuTop__DOT__decode2__DOT__isNaR),4);
    bufp->fullIData(oldp+18,(vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6),31);
    bufp->fullIData(oldp+19,(vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6),31);
    bufp->fullIData(oldp+20,(vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6),31);
    bufp->fullIData(oldp+21,(vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6),31);
    bufp->fullIData(oldp+22,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule__in_i),31);
    bufp->fullIData(oldp+23,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+24,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_1__in_i),31);
    bufp->fullIData(oldp+25,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+26,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_2__in_i),31);
    bufp->fullIData(oldp+27,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullIData(oldp+28,(vlSelf->QvuTop__DOT__decode2__DOT____Vcellinp__lzcModule_3__in_i),31);
    bufp->fullIData(oldp+29,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp),31);
    bufp->fullQData(oldp+30,((((QData)((IData)(((0U 
                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                                                 ? 0x182U
                                                 : 
                                                ((0xffU 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))
                                                  ? 0U
                                                  : 
                                                 ((0x100U 
                                                   & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0) 
                                                       - (IData)(0x7fU)) 
                                                      << 1U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0) 
                                                        - (IData)(0x7fU)))))))) 
                               << 0x1bU) | (QData)((IData)(
                                                           ((((0U 
                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                                               ? 0x182U
                                                               : 
                                                              ((0xffU 
                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))
                                                                ? 0U
                                                                : 
                                                               ((0x100U 
                                                                 & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0) 
                                                                     - (IData)(0x7fU)) 
                                                                    << 1U)) 
                                                                | (0xffU 
                                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0) 
                                                                      - (IData)(0x7fU)))))) 
                                                             << 0x12U) 
                                                            | ((((0U 
                                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                                                  ? 0x182U
                                                                  : 
                                                                 ((0xffU 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x100U 
                                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0) 
                                                                        - (IData)(0x7fU)) 
                                                                       << 1U)) 
                                                                   | (0xffU 
                                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0) 
                                                                         - (IData)(0x7fU)))))) 
                                                                << 9U) 
                                                               | ((0U 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                                                   ? 0x182U
                                                                   : 
                                                                  ((0xffU 
                                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x100U 
                                                                     & (((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0) 
                                                                         - (IData)(0x7fU)) 
                                                                        << 1U)) 
                                                                    | (0xffU 
                                                                       & ((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0) 
                                                                          - (IData)(0x7fU)))))))))))),36);
    __Vtemp_h829b5439__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((0U 
                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0)) 
                                                              | (0xffU 
                                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0)) 
                                            << 0x18U) 
                                           | (QData)((IData)(
                                                             ((0x800000U 
                                                               & ((~ 
                                                                   ((0U 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)) 
                                                                    | (0xffU 
                                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                  << 0x17U)) 
                                                              | vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0))))));
    __Vtemp_h829b5439__0[1U] = ((vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 
                                 << 0x10U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((0U 
                                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                             | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0)) 
                                                           << 0x18U) 
                                                          | (QData)((IData)(
                                                                            ((0x800000U 
                                                                              & ((~ 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)) 
                                                                                | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                                << 0x17U)) 
                                                                             | vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0))))) 
                                                      >> 0x20U)));
    __Vtemp_h829b5439__0[2U] = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0)) 
                                     | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0)))) 
                                 << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0 
                                               << 8U) 
                                              | ((0x80U 
                                                  & ((~ 
                                                      ((0U 
                                                        == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0)) 
                                                       | (0xffU 
                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0)))) 
                                                     << 7U)) 
                                                 | (vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0 
                                                    >> 0x10U))));
    bufp->fullWData(oldp+32,(__Vtemp_h829b5439__0),96);
    bufp->fullCData(oldp+35,(((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN) 
                              & (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN_0))),4);
    bufp->fullCData(oldp+36,(((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0)) 
                                << 3U) | (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0)) 
                                           << 2U) | 
                                          (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))))) 
                              & (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN_0))),4);
    bufp->fullBit(oldp+37,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8929cb16__0))));
    bufp->fullBit(oldp+38,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h89ab41bc__0))));
    bufp->fullBit(oldp+39,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a58f023__0))));
    bufp->fullBit(oldp+40,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8aa26e89__0))));
    bufp->fullQData(oldp+41,((((QData)((IData)(((0U 
                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))
                                                 ? 0x182U
                                                 : 
                                                ((0xffU 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))
                                                  ? 0U
                                                  : 
                                                 ((0x100U 
                                                   & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0) 
                                                       - (IData)(0x7fU)) 
                                                      << 1U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0) 
                                                        - (IData)(0x7fU)))))))) 
                               << 0x1bU) | (QData)((IData)(
                                                           ((((0U 
                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))
                                                               ? 0x182U
                                                               : 
                                                              ((0xffU 
                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))
                                                                ? 0U
                                                                : 
                                                               ((0x100U 
                                                                 & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0) 
                                                                     - (IData)(0x7fU)) 
                                                                    << 1U)) 
                                                                | (0xffU 
                                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0) 
                                                                      - (IData)(0x7fU)))))) 
                                                             << 0x12U) 
                                                            | ((((0U 
                                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))
                                                                  ? 0x182U
                                                                  : 
                                                                 ((0xffU 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x100U 
                                                                    & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0) 
                                                                        - (IData)(0x7fU)) 
                                                                       << 1U)) 
                                                                   | (0xffU 
                                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0) 
                                                                         - (IData)(0x7fU)))))) 
                                                                << 9U) 
                                                               | ((0U 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))
                                                                   ? 0x182U
                                                                   : 
                                                                  ((0xffU 
                                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x100U 
                                                                     & (((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0) 
                                                                         - (IData)(0x7fU)) 
                                                                        << 1U)) 
                                                                    | (0xffU 
                                                                       & ((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0) 
                                                                          - (IData)(0x7fU)))))))))))),36);
    __Vtemp_h32f0c7c3__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((0U 
                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0)) 
                                                              | (0xffU 
                                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0)) 
                                            << 0x18U) 
                                           | (QData)((IData)(
                                                             ((0x800000U 
                                                               & ((~ 
                                                                   ((0U 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)) 
                                                                    | (0xffU 
                                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                  << 0x17U)) 
                                                              | vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0))))));
    __Vtemp_h32f0c7c3__0[1U] = ((vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 
                                 << 0x10U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((0U 
                                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0)) 
                                                                             | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))))))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0)) 
                                                           << 0x18U) 
                                                          | (QData)((IData)(
                                                                            ((0x800000U 
                                                                              & ((~ 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)) 
                                                                                | (0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0)))) 
                                                                                << 0x17U)) 
                                                                             | vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0))))) 
                                                      >> 0x20U)));
    __Vtemp_h32f0c7c3__0[2U] = (((~ ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0)) 
                                     | (0xffU == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0)))) 
                                 << 0x1fU) | ((vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0 
                                               << 8U) 
                                              | ((0x80U 
                                                  & ((~ 
                                                      ((0U 
                                                        == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0)) 
                                                       | (0xffU 
                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0)))) 
                                                     << 7U)) 
                                                 | (vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0 
                                                    >> 0x10U))));
    bufp->fullWData(oldp+43,(__Vtemp_h32f0c7c3__0),96);
    bufp->fullCData(oldp+46,(((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN) 
                              & (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN_0))),4);
    bufp->fullCData(oldp+47,(((((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0)) 
                                << 3U) | (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0)) 
                                           << 2U) | 
                                          (((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))))) 
                              & (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN_0))),4);
    bufp->fullBit(oldp+48,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))));
    bufp->fullBit(oldp+49,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))));
    bufp->fullBit(oldp+50,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))));
    bufp->fullBit(oldp+51,((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))));
    bufp->fullCData(oldp+52,(vlSelf->QvuTop__DOT___GEN_6),4);
    bufp->fullCData(oldp+53,((0x1fU & ((IData)(1U) 
                                       + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+54,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullCData(oldp+55,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+56,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+61,((0x1fU & ((IData)(1U) 
                                       + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+62,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullCData(oldp+63,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+64,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+69,((0x1fU & ((IData)(1U) 
                                       + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+70,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullCData(oldp+71,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+72,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+77,((0x1fU & ((IData)(1U) 
                                       + vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+78,(vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o),31);
    bufp->fullCData(oldp+79,((0x1fU & vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+80,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+85,((0x1fU & ((IData)(1U) 
                                       + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+86,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o),31);
    bufp->fullCData(oldp+87,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+88,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+93,((0x1fU & ((IData)(1U) 
                                       + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+94,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o),31);
    bufp->fullCData(oldp+95,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+96,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+101,((0x1fU & ((IData)(1U) 
                                        + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+102,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o),31);
    bufp->fullCData(oldp+103,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+104,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullCData(oldp+109,((0x1fU & ((IData)(1U) 
                                        + vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))),5);
    bufp->fullIData(oldp+110,(vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o),31);
    bufp->fullCData(oldp+111,((0x1fU & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+112,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes),160);
    bufp->fullIData(oldp+117,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i),32);
    bufp->fullCData(oldp+118,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal),6);
    bufp->fullIData(oldp+119,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac),32);
    bufp->fullCData(oldp+120,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_1),6);
    bufp->fullIData(oldp+121,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_1),32);
    bufp->fullCData(oldp+122,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_2),6);
    bufp->fullIData(oldp+123,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_2),32);
    bufp->fullCData(oldp+124,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftVal_3),6);
    bufp->fullIData(oldp+125,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__shiftedFrac_3),32);
    bufp->fullQData(oldp+126,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs),33);
    bufp->fullCData(oldp+128,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex),3);
    bufp->fullQData(oldp+129,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1),33);
    bufp->fullCData(oldp+131,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1),3);
    bufp->fullQData(oldp+132,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2),33);
    bufp->fullCData(oldp+134,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2),3);
    bufp->fullQData(oldp+135,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3),33);
    bufp->fullCData(oldp+137,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3),3);
    bufp->fullSData(oldp+138,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                  ? 0U : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                           ? 7U : (
                                                   VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0)))))) 
                                << 0xcU) | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
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
                                            | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
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
                                               | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
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
                                                      & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0)))))))))),16);
    bufp->fullQData(oldp+139,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue),34);
    bufp->fullQData(oldp+141,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder),33);
    bufp->fullQData(oldp+143,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx),34);
    bufp->fullBit(oldp+145,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding));
    bufp->fullCData(oldp+146,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection),2);
    bufp->fullQData(oldp+147,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue),33);
    bufp->fullQData(oldp+149,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1),34);
    bufp->fullQData(oldp+151,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1),33);
    bufp->fullQData(oldp+153,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1),34);
    bufp->fullBit(oldp+155,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1));
    bufp->fullCData(oldp+156,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1),2);
    bufp->fullQData(oldp+157,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1),33);
    bufp->fullQData(oldp+159,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2),34);
    bufp->fullQData(oldp+161,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2),33);
    bufp->fullQData(oldp+163,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2),34);
    bufp->fullBit(oldp+165,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2));
    bufp->fullCData(oldp+166,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2),2);
    bufp->fullQData(oldp+167,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2),33);
    bufp->fullQData(oldp+169,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3),34);
    bufp->fullQData(oldp+171,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3),33);
    bufp->fullQData(oldp+173,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3),34);
    bufp->fullBit(oldp+175,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3));
    bufp->fullCData(oldp+176,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3),2);
    bufp->fullQData(oldp+177,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3),33);
    bufp->fullIData(oldp+179,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                  ? 0U : (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                           ? 0x7fU : 
                                          (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                            ? 0x80U
                                            : (0xffU 
                                               & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22))))) 
                                << 0x18U) | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                                ? 0U
                                                : (
                                                   VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                    ? 0x7fU
                                                    : 
                                                   (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                     ? 0x80U
                                                     : 
                                                    (0xffU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16))))) 
                                              << 0x10U) 
                                             | ((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                                   ? 0U
                                                   : 
                                                  (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                    ? 0x7fU
                                                    : 
                                                   (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                     ? 0x80U
                                                     : 
                                                    (0xffU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10))))) 
                                                 << 8U) 
                                                | ((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_IQQ(34, 0x7fULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                     ? 0x7fU
                                                     : 
                                                    (VL_GTS_IQQ(34, 0x3ffffff80ULL, vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                      ? 0x80U
                                                      : 
                                                     (0xffU 
                                                      & (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4))))))))),32);
    bufp->fullQData(oldp+180,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+182,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder),33);
    bufp->fullBit(oldp+184,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding));
    bufp->fullQData(oldp+185,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+187,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1),33);
    bufp->fullBit(oldp+189,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1));
    bufp->fullQData(oldp+190,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+192,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2),33);
    bufp->fullBit(oldp+194,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2));
    bufp->fullQData(oldp+195,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+197,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3),33);
    bufp->fullBit(oldp+199,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3));
    bufp->fullWData(oldp+200,(vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_frac_i),132);
    bufp->fullWData(oldp+205,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMax),264);
    bufp->fullWData(oldp+214,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowMin),264);
    bufp->fullCData(oldp+223,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowValid),8);
    bufp->fullCData(oldp+224,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__windowPtr),3);
    bufp->fullQData(oldp+225,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMax),33);
    bufp->fullQData(oldp+227,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin),33);
    bufp->fullQData(oldp+229,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale),33);
    bufp->fullQData(oldp+231,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMax),33);
    bufp->fullQData(oldp+233,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchMin),33);
    bufp->fullBit(oldp+235,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__batchHasData));
    bufp->fullCData(oldp+236,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__state),2);
    bufp->fullQData(oldp+237,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_leftMax),33);
    bufp->fullQData(oldp+239,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax_rightMax),33);
    bufp->fullQData(oldp+241,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_leftMax),33);
    bufp->fullQData(oldp+243,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_leftMax),33);
    bufp->fullQData(oldp+245,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax_rightMax),33);
    bufp->fullQData(oldp+247,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax_rightMax),33);
    bufp->fullQData(oldp+249,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_leftMax),33);
    bufp->fullQData(oldp+251,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_leftMax),33);
    bufp->fullQData(oldp+253,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax_rightMax),33);
    bufp->fullQData(oldp+255,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_leftMax),33);
    bufp->fullQData(oldp+257,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_leftMax),33);
    bufp->fullQData(oldp+259,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax_rightMax),33);
    bufp->fullQData(oldp+261,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax_rightMax),33);
    bufp->fullQData(oldp+263,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax_rightMax),33);
    bufp->fullQData(oldp+265,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMax),33);
    bufp->fullQData(oldp+267,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_leftMin),33);
    bufp->fullQData(oldp+269,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin_rightMin),33);
    bufp->fullQData(oldp+271,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_leftMin),33);
    bufp->fullQData(oldp+273,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_leftMin),33);
    bufp->fullQData(oldp+275,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin_rightMin),33);
    bufp->fullQData(oldp+277,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin_rightMin),33);
    bufp->fullQData(oldp+279,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_leftMin),33);
    bufp->fullQData(oldp+281,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_leftMin),33);
    bufp->fullQData(oldp+283,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin_rightMin),33);
    bufp->fullQData(oldp+285,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_leftMin),33);
    bufp->fullQData(oldp+287,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_leftMin),33);
    bufp->fullQData(oldp+289,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin_rightMin),33);
    bufp->fullQData(oldp+291,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin_rightMin),33);
    bufp->fullQData(oldp+293,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin_rightMin),33);
    bufp->fullQData(oldp+295,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__effectiveMin),33);
    bufp->fullQData(oldp+297,(vlSelf->QvuTop__DOT__quantizeFP4__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dataRange),33);
    bufp->fullQData(oldp+299,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax),33);
    bufp->fullQData(oldp+301,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin),33);
    bufp->fullQData(oldp+303,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale),33);
    bufp->fullQData(oldp+305,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset),33);
    bufp->fullQData(oldp+307,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax),33);
    bufp->fullQData(oldp+309,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin),33);
    bufp->fullBit(oldp+311,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData));
    bufp->fullCData(oldp+312,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state),2);
    bufp->fullWData(oldp+313,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram),128);
    bufp->fullIData(oldp+317,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal),20);
    bufp->fullIData(oldp+318,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold),23);
    bufp->fullQData(oldp+319,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_4),33);
    bufp->fullQData(oldp+321,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin),33);
    bufp->fullQData(oldp+323,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax),33);
    bufp->fullQData(oldp+325,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth),33);
    bufp->fullQData(oldp+327,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex),33);
    bufp->fullCData(oldp+329,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex),3);
    bufp->fullQData(oldp+330,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1),33);
    bufp->fullQData(oldp+332,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1),33);
    bufp->fullCData(oldp+334,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1),3);
    bufp->fullQData(oldp+335,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2),33);
    bufp->fullQData(oldp+337,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2),33);
    bufp->fullCData(oldp+339,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2),3);
    bufp->fullQData(oldp+340,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3),33);
    bufp->fullQData(oldp+342,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3),33);
    bufp->fullCData(oldp+344,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3),3);
    bufp->fullQData(oldp+345,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax),33);
    bufp->fullQData(oldp+347,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin),33);
    bufp->fullQData(oldp+349,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale),33);
    bufp->fullQData(oldp+351,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset),33);
    bufp->fullQData(oldp+353,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax),33);
    bufp->fullQData(oldp+355,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin),33);
    bufp->fullBit(oldp+357,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData));
    bufp->fullCData(oldp+358,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state),2);
    bufp->fullBit(oldp+359,(vlSelf->clock));
    bufp->fullBit(oldp+360,(vlSelf->reset));
    bufp->fullIData(oldp+361,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+362,(vlSelf->io_posit_i1_1),32);
    bufp->fullIData(oldp+363,(vlSelf->io_posit_i1_2),32);
    bufp->fullIData(oldp+364,(vlSelf->io_posit_i1_3),32);
    bufp->fullIData(oldp+365,(vlSelf->io_posit_i2_0),32);
    bufp->fullIData(oldp+366,(vlSelf->io_posit_i2_1),32);
    bufp->fullIData(oldp+367,(vlSelf->io_posit_i2_2),32);
    bufp->fullIData(oldp+368,(vlSelf->io_posit_i2_3),32);
    bufp->fullCData(oldp+369,(vlSelf->io_op),4);
    bufp->fullBit(oldp+370,(vlSelf->io_Isposit));
    bufp->fullBit(oldp+371,(vlSelf->io_Outposit));
    bufp->fullQData(oldp+372,(vlSelf->io_float_i_0),64);
    bufp->fullQData(oldp+374,(vlSelf->io_float_i_1),64);
    bufp->fullQData(oldp+376,(vlSelf->io_float_i_2),64);
    bufp->fullQData(oldp+378,(vlSelf->io_float_i_3),64);
    bufp->fullQData(oldp+380,(vlSelf->io_float_i2_0),64);
    bufp->fullQData(oldp+382,(vlSelf->io_float_i2_1),64);
    bufp->fullQData(oldp+384,(vlSelf->io_float_i2_2),64);
    bufp->fullQData(oldp+386,(vlSelf->io_float_i2_3),64);
    bufp->fullCData(oldp+388,(vlSelf->io_float_mode),3);
    bufp->fullBit(oldp+389,(vlSelf->io_float_posit));
    bufp->fullCData(oldp+390,(vlSelf->io_src_posit_width),6);
    bufp->fullCData(oldp+391,(vlSelf->io_vector_size),3);
    bufp->fullCData(oldp+392,(vlSelf->io_dst_posit_width),6);
    bufp->fullQData(oldp+393,(vlSelf->io_float_o_0),64);
    bufp->fullQData(oldp+395,(vlSelf->io_float_o_1),64);
    bufp->fullQData(oldp+397,(vlSelf->io_float_o_2),64);
    bufp->fullQData(oldp+399,(vlSelf->io_float_o_3),64);
    bufp->fullQData(oldp+401,(vlSelf->io_float_dot_o),64);
    bufp->fullIData(oldp+403,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+404,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+405,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+406,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+407,(vlSelf->io_posit_dot_o),32);
    bufp->fullIData(oldp+408,(vlSelf->io_int_o_0),32);
    bufp->fullIData(oldp+409,(vlSelf->io_int_o_1),32);
    bufp->fullIData(oldp+410,(vlSelf->io_int_o_2),32);
    bufp->fullIData(oldp+411,(vlSelf->io_int_o_3),32);
    if (vlSelf->io_Isposit) {
        __Vtemp_h1b06671e__0[0U] = vlSelf->io_posit_i1_0;
        __Vtemp_h1b06671e__0[1U] = vlSelf->io_posit_i1_1;
        __Vtemp_h1b06671e__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_posit_i1_2))));
        __Vtemp_h1b06671e__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i1_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_posit_i1_2))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h1b06671e__0[0U] = 0U;
        __Vtemp_h1b06671e__0[1U] = 0U;
        __Vtemp_h1b06671e__0[2U] = 0U;
        __Vtemp_h1b06671e__0[3U] = 0U;
    }
    bufp->fullWData(oldp+412,(__Vtemp_h1b06671e__0),128);
    bufp->fullIData(oldp+416,(((((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                  ? 0U : ((((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((0x40000000U 
                                                 & vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    - (IData)(1U)))
                                                 : 
                                                (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ 
                                                        vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                             : 0U) 
                                           << 2U) | 
                                          ((1U & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                            ? (3U & 
                                               (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                >> 0x1dU))
                                            : 0U))) 
                                << 0x18U) | ((((4U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   (((1U 
                                                      & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6)
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                          - (IData)(1U)))
                                                       : 
                                                      (0x20U 
                                                       | (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ 
                                                              vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                      : 0U) 
                                                    << 2U) 
                                                   | ((1U 
                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      (3U 
                                                       & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                          >> 0x1dU))
                                                       : 0U))) 
                                              << 0x10U) 
                                             | ((((2U 
                                                   & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                   ? 0U
                                                   : 
                                                  ((((1U 
                                                      & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6)
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                          - (IData)(1U)))
                                                       : 
                                                      (0x20U 
                                                       | (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ 
                                                              vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                      : 0U) 
                                                    << 2U) 
                                                   | ((1U 
                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      (3U 
                                                       & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                          >> 0x1dU))
                                                       : 0U))) 
                                                 << 8U) 
                                                | ((1U 
                                                    & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                    ? 0U
                                                    : 
                                                   ((((1U 
                                                       & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                           - (IData)(1U)))
                                                        : 
                                                       (0x20U 
                                                        | (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (~ 
                                                               vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                       : 0U) 
                                                     << 2U) 
                                                    | ((1U 
                                                        & vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       (3U 
                                                        & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                                           >> 0x1dU))
                                                        : 0U))))))),32);
    __Vtemp_h6dabf4ce__0[0U] = (IData)((((QData)((IData)(
                                                         ((2U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 2U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           (((IData)(
                                                                     (0U 
                                                                      != vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6)) 
                                                             << 0x1bU) 
                                                            | (0x7ffffffU 
                                                               & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                                                  >> 2U))))))));
    __Vtemp_h6dabf4ce__0[1U] = ((((4U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((2U 
                                                                          & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode1__DOT___operand_1_T_6)) 
                                                                           << 0x1bU) 
                                                                          | (0x7ffffffU 
                                                                             & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 2U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode1__DOT___operand_0_T_6)) 
                                                                            << 0x1bU) 
                                                                           | (0x7ffffffU 
                                                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_io_result_o 
                                                                                >> 2U))))))) 
                                                      >> 0x20U)));
    __Vtemp_h6dabf4ce__0[2U] = ((((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((4U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode1__DOT___operand_2_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_2_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_h6dabf4ce__0[3U] = (((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
                                  ? 0U : (((IData)(
                                                   (0U 
                                                    != vlSelf->QvuTop__DOT__decode1__DOT___operand_3_T_6)) 
                                           << 0x1bU) 
                                          | (0x7ffffffU 
                                             & (vlSelf->QvuTop__DOT__decode1__DOT___barrel_shifter_3_io_result_o 
                                                >> 2U)))) 
                                >> 0xcU);
    bufp->fullWData(oldp+417,(__Vtemp_h6dabf4ce__0),112);
    bufp->fullBit(oldp+421,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+422,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+423,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+424,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+425,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+426,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+427,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+428,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    if (vlSelf->io_Isposit) {
        __Vtemp_ha81f68f6__0[0U] = vlSelf->io_posit_i2_0;
        __Vtemp_ha81f68f6__0[1U] = vlSelf->io_posit_i2_1;
        __Vtemp_ha81f68f6__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_posit_i2_2))));
        __Vtemp_ha81f68f6__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                            >> 0x20U));
    } else {
        __Vtemp_ha81f68f6__0[0U] = 0U;
        __Vtemp_ha81f68f6__0[1U] = 0U;
        __Vtemp_ha81f68f6__0[2U] = 0U;
        __Vtemp_ha81f68f6__0[3U] = 0U;
    }
    bufp->fullWData(oldp+429,(__Vtemp_ha81f68f6__0),128);
    bufp->fullIData(oldp+433,(vlSelf->QvuTop__DOT__decode2__DOT__io_Exp),32);
    __Vtemp_hf607cc56__0[0U] = (IData)((((QData)((IData)(
                                                         ((2U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 2U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           (((IData)(
                                                                     (0U 
                                                                      != vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6)) 
                                                             << 0x1bU) 
                                                            | (0x7ffffffU 
                                                               & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                  >> 2U))))))));
    __Vtemp_hf607cc56__0[1U] = ((((4U & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                 >> 2U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((2U 
                                                                          & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode2__DOT___operand_1_T_6)) 
                                                                           << 0x1bU) 
                                                                          | (0x7ffffffU 
                                                                             & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 2U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(
                                                                                (0U 
                                                                                != vlSelf->QvuTop__DOT__decode2__DOT___operand_0_T_6)) 
                                                                            << 0x1bU) 
                                                                           | (0x7ffffffU 
                                                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_io_result_o 
                                                                                >> 2U))))))) 
                                                      >> 0x20U)));
    __Vtemp_hf607cc56__0[2U] = ((((8U & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                 >> 2U)))) 
                                 << 0x14U) | (((4U 
                                                & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                                ? 0U
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != vlSelf->QvuTop__DOT__decode2__DOT___operand_2_T_6)) 
                                                    << 0x1bU) 
                                                   | (0x7ffffffU 
                                                      & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_2_io_result_o 
                                                         >> 2U)))) 
                                              >> 8U));
    __Vtemp_hf607cc56__0[3U] = (((8U & (IData)(vlSelf->QvuTop__DOT__decode2__DOT__isNaR))
                                  ? 0U : (((IData)(
                                                   (0U 
                                                    != vlSelf->QvuTop__DOT__decode2__DOT___operand_3_T_6)) 
                                           << 0x1bU) 
                                          | (0x7ffffffU 
                                             & (vlSelf->QvuTop__DOT__decode2__DOT___barrel_shifter_3_io_result_o 
                                                >> 2U)))) 
                                >> 0xcU);
    bufp->fullWData(oldp+434,(__Vtemp_hf607cc56__0),112);
    bufp->fullBit(oldp+438,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+439,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+440,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+441,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+442,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+443,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+444,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+445,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    if (vlSelf->io_Isposit) {
        __Vtemp_h4bbae0a6__0[0U] = 0U;
        __Vtemp_h4bbae0a6__0[1U] = 0U;
        __Vtemp_h4bbae0a6__0[2U] = 0U;
        __Vtemp_h4bbae0a6__0[3U] = 0U;
    } else {
        __Vtemp_h4bbae0a6__0[0U] = (IData)(vlSelf->io_float_i_0);
        __Vtemp_h4bbae0a6__0[1U] = (IData)(vlSelf->io_float_i_1);
        __Vtemp_h4bbae0a6__0[2U] = (IData)((((QData)((IData)(vlSelf->io_float_i_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_float_i_2))));
        __Vtemp_h4bbae0a6__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_float_i_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_float_i_2))) 
                                            >> 0x20U));
    }
    bufp->fullWData(oldp+446,(__Vtemp_h4bbae0a6__0),128);
    bufp->fullCData(oldp+450,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
                                       & (IData)((vlSelf->io_float_i_3 
                                                  >> 0x1fU))) 
                                      << 3U)) | ((4U 
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
                                                                     >> 0x1fU)))))))),4);
    bufp->fullCData(oldp+451,(((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN) 
                               & ((((~ (IData)(vlSelf->io_Isposit)) 
                                    & (0U != (0x7fffffU 
                                              & (IData)(vlSelf->io_float_i_3)))) 
                                   << 3U) | ((((~ (IData)(vlSelf->io_Isposit)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(vlSelf->io_float_i_2)))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & (IData)(vlSelf->io_float_i_1)))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlSelf->io_Isposit)) 
                                                   & (0U 
                                                      != 
                                                      (0x7fffffU 
                                                       & (IData)(vlSelf->io_float_i_0))))))))),4);
    if (vlSelf->io_Isposit) {
        __Vtemp_hbc5c8910__0[0U] = 0U;
        __Vtemp_hbc5c8910__0[1U] = 0U;
        __Vtemp_hbc5c8910__0[2U] = 0U;
        __Vtemp_hbc5c8910__0[3U] = 0U;
    } else {
        __Vtemp_hbc5c8910__0[0U] = (IData)(vlSelf->io_float_i2_0);
        __Vtemp_hbc5c8910__0[1U] = (IData)(vlSelf->io_float_i2_1);
        __Vtemp_hbc5c8910__0[2U] = (IData)((((QData)((IData)(vlSelf->io_float_i2_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_float_i2_2))));
        __Vtemp_hbc5c8910__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_float_i2_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_float_i2_2))) 
                                            >> 0x20U));
    }
    bufp->fullWData(oldp+452,(__Vtemp_hbc5c8910__0),128);
    bufp->fullCData(oldp+456,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
                                       & (IData)((vlSelf->io_float_i2_3 
                                                  >> 0x1fU))) 
                                      << 3U)) | ((4U 
                                                  & (((~ (IData)(vlSelf->io_Isposit)) 
                                                      & (IData)(
                                                                (vlSelf->io_float_i2_2 
                                                                 >> 0x1fU))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((~ (IData)(vlSelf->io_Isposit)) 
                                                         & (IData)(
                                                                   (vlSelf->io_float_i2_1 
                                                                    >> 0x1fU))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSelf->io_Isposit)) 
                                                          & (IData)(
                                                                    (vlSelf->io_float_i2_0 
                                                                     >> 0x1fU)))))))),4);
    bufp->fullCData(oldp+457,(((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN) 
                               & ((((~ (IData)(vlSelf->io_Isposit)) 
                                    & (0U != (0x7fffffU 
                                              & (IData)(vlSelf->io_float_i2_3)))) 
                                   << 3U) | ((((~ (IData)(vlSelf->io_Isposit)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(vlSelf->io_float_i2_2)))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlSelf->io_Isposit)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & (IData)(vlSelf->io_float_i2_1)))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlSelf->io_Isposit)) 
                                                   & (0U 
                                                      != 
                                                      (0x7fffffU 
                                                       & (IData)(vlSelf->io_float_i2_0))))))))),4);
    bufp->fullQData(oldp+458,((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                    >> 3U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0) 
                                                                | VL_GTS_III(8, 0xf1U, 
                                                                             (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                              >> 0x18U)))
                                                                ? 0U
                                                                : 
                                                               ((VL_LTS_III(8, 0x10U, 
                                                                            (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                             >> 0x18U)) 
                                                                 | VL_LTS_III(8, 0x1eU, 
                                                                              (0xffU 
                                                                               & ((IData)(0xfU) 
                                                                                + 
                                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                                >> 0x18U)))))
                                                                 ? 0x7c00U
                                                                 : 
                                                                (((VL_GTS_III(8, 0U, 
                                                                              (0xffU 
                                                                               & ((IData)(0xfU) 
                                                                                + 
                                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                                >> 0x18U))))
                                                                    ? 0U
                                                                    : 
                                                                   (VL_LTS_III(8, 0x1eU, 
                                                                               (0xffU 
                                                                                & ((IData)(0xfU) 
                                                                                + 
                                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                                >> 0x18U))))
                                                                     ? 0x1eU
                                                                     : 
                                                                    (0x1fU 
                                                                     & ((IData)(0xfU) 
                                                                        + 
                                                                        (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                         >> 0x18U))))) 
                                                                  << 0xaU) 
                                                                 | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                                     ? 
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlSelf->__VdfgTmp_h9c9ab370__0 
                                                                                >> 0x17U)))
                                                                     : 0U)))))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                                     >> 2U)))) 
                                                 << 0x2fU) 
                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h6db38b42__0)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x80000000U 
                                                                       & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                                          << 0x1eU)) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_h9981df73__0) 
                                                                          << 0x10U) 
                                                                         | (IData)(vlSelf->__VdfgTmp_h92081510__0)))))))))),64);
    bufp->fullSData(oldp+460,(((((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0)
                                  ? ((0xfffffff8U & 
                                      ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                       & (((0x27fffffULL 
                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                           | ((0x1bfffffULL 
                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                              | ((0x13fffffULL 
                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                 | ((0xdfffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                    | ((0x9fffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                       | (IData)(
                                                                 ((0ULL 
                                                                   != 
                                                                   (0x1ffe00000ULL 
                                                                    & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)) 
                                                                  | (0x5fffffULL 
                                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)))))))) 
                                          << 3U))) 
                                     | ((0x27fffffULL 
                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                         ? 7U : ((6U 
                                                  == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                  ? 6U
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3)))))))))
                                  : 0U) << 0xcU) | 
                               ((((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0)
                                   ? ((0xfffffff8U 
                                       & (((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                           << 1U) & 
                                          (((0x27fffffULL 
                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                            | ((0x1bfffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                               | ((0x13fffffULL 
                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                  | ((0xdfffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                     | ((0x9fffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                        | (IData)(
                                                                  ((0ULL 
                                                                    != 
                                                                    (0x1ffe00000ULL 
                                                                     & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)) 
                                                                   | (0x5fffffULL 
                                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)))))))) 
                                           << 3U))) 
                                      | ((0x27fffffULL 
                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                          ? 7U : ((6U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                   ? 6U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                    ? 5U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2)))))))))
                                   : 0U) << 8U) | (
                                                   (((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0)
                                                      ? 
                                                     ((0xfffffff8U 
                                                       & (((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                           << 2U) 
                                                          & (((0x27fffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                              | ((0x1bfffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                                 | ((0x13fffffULL 
                                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                                    | ((0xdfffffULL 
                                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                                       | ((0x9fffffULL 
                                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                                          | (IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1ffe00000ULL 
                                                                                & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)) 
                                                                                | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)))))))) 
                                                             << 3U))) 
                                                      | ((0x27fffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                                          ? 7U
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                           ? 6U
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                            ? 5U
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                             ? 4U
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                              ? 3U
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                               ? 2U
                                                               : 
                                                              (1U 
                                                               == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1)))))))))
                                                      : 0U) 
                                                    << 4U) 
                                                   | ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0)
                                                       ? 
                                                      ((((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                         & ((0x27fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                            | ((0x1bfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                               | ((0x13fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                                  | ((0xdfffffULL 
                                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                                     | ((0x9fffffULL 
                                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                                        | (IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1ffe00000ULL 
                                                                                & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)) 
                                                                                | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs))))))))) 
                                                        << 3U) 
                                                       | ((0x27fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                                           ? 7U
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                            ? 6U
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                             ? 5U
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                              ? 4U
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                               ? 3U
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                                ? 2U
                                                                : 
                                                               (1U 
                                                                == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex)))))))))
                                                       : 0U))))),16);
    bufp->fullIData(oldp+461,(((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                               << 0x1cU)) 
                               | (((((0ULL == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0) 
                                     | VL_GTS_III(8, 0xf9U, 
                                                  (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                   >> 0x18U)))
                                     ? 0U : ((VL_LTS_III(8, 8U, 
                                                         (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                          >> 0x18U)) 
                                              | VL_LTS_III(8, 0xeU, 
                                                           (0xffU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                >> 0x18U)))))
                                              ? 0x78U
                                              : (((
                                                   VL_GTS_III(8, 0U, 
                                                              (0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                   >> 0x18U))))
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(8, 0xeU, 
                                                               (0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                    >> 0x18U))))
                                                     ? 0xeU
                                                     : 
                                                    (0xfU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                         >> 0x18U))))) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                     ? 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__VdfgTmp_h9c9ab370__0 
                                                                >> 0x1eU)))
                                                     : 0U)))) 
                                   << 0x18U) | ((0x800000U 
                                                 & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                    << 0x15U)) 
                                                | (((((0ULL 
                                                       == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0) 
                                                      | VL_GTS_III(8, 0xf9U, 
                                                                   (0xffU 
                                                                    & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                       >> 0x10U))))
                                                      ? 0U
                                                      : 
                                                     ((VL_LTS_III(8, 8U, 
                                                                  (0xffU 
                                                                   & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                      >> 0x10U))) 
                                                       | VL_LTS_III(8, 0xeU, 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                         >> 0x10U)))))
                                                       ? 0x78U
                                                       : 
                                                      (((VL_GTS_III(8, 0U, 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                         >> 0x10U))))
                                                          ? 0U
                                                          : 
                                                         (VL_LTS_III(8, 0xeU, 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                          >> 0x10U))))
                                                           ? 0xeU
                                                           : 
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              + 
                                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                               >> 0x10U))))) 
                                                        << 3U) 
                                                       | ((2U 
                                                           < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                           ? 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->__VdfgTmp_haed5c1a2__0 
                                                                      >> 0x1eU)))
                                                           : 0U)))) 
                                                    << 0x10U) 
                                                   | ((0x8000U 
                                                       & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                          << 0xeU)) 
                                                      | (((((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0) 
                                                            | VL_GTS_III(8, 0xf9U, 
                                                                         (0xffU 
                                                                          & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                             >> 8U))))
                                                            ? 0U
                                                            : 
                                                           ((VL_LTS_III(8, 8U, 
                                                                        (0xffU 
                                                                         & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                            >> 8U))) 
                                                             | VL_LTS_III(8, 0xeU, 
                                                                          (0xffU 
                                                                           & ((IData)(7U) 
                                                                              + 
                                                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                               >> 8U)))))
                                                             ? 0x78U
                                                             : 
                                                            (((VL_GTS_III(8, 0U, 
                                                                          (0xffU 
                                                                           & ((IData)(7U) 
                                                                              + 
                                                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                               >> 8U))))
                                                                ? 0U
                                                                : 
                                                               (VL_LTS_III(8, 0xeU, 
                                                                           (0xffU 
                                                                            & ((IData)(7U) 
                                                                               + 
                                                                               (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                                >> 8U))))
                                                                 ? 0xeU
                                                                 : 
                                                                (0xfU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i 
                                                                     >> 8U))))) 
                                                              << 3U) 
                                                             | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                 ? 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__VdfgTmp_h43a98faf__0 
                                                                            >> 0x1eU)))
                                                                 : 0U)))) 
                                                          << 8U) 
                                                         | ((0x80U 
                                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_6) 
                                                                << 7U)) 
                                                            | (((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0) 
                                                                | VL_GTS_III(8, 0xf9U, 
                                                                             (0xffU 
                                                                              & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                                ? 0U
                                                                : 
                                                               ((VL_LTS_III(8, 8U, 
                                                                            (0xffU 
                                                                             & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)) 
                                                                 | VL_LTS_III(8, 0xeU, 
                                                                              (0xffU 
                                                                               & ((IData)(7U) 
                                                                                + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i))))
                                                                 ? 0x78U
                                                                 : 
                                                                (((VL_GTS_III(8, 0U, 
                                                                              (0xffU 
                                                                               & ((IData)(7U) 
                                                                                + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                                    ? 0U
                                                                    : 
                                                                   (VL_LTS_III(8, 0xeU, 
                                                                               (0xffU 
                                                                                & ((IData)(7U) 
                                                                                + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))
                                                                     ? 0xeU
                                                                     : 
                                                                    (0xfU 
                                                                     & ((IData)(7U) 
                                                                        + vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i)))) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                     ? 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__VdfgTmp_h46be9c78__0 
                                                                                >> 0x1eU)))
                                                                     : 0U)))))))))))),32);
    bufp->fullIData(oldp+462,(0x1fU),32);
    bufp->fullBit(oldp+463,(1U));
    bufp->fullIData(oldp+464,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+465,(__Vtemp_hc5d9e20e__0),155);
}
