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
    tracep->declBit(c+248,"clock", false,-1);
    tracep->declBit(c+249,"reset", false,-1);
    tracep->declBus(c+250,"io_posit_i1_0", false,-1, 31,0);
    tracep->declBus(c+251,"io_posit_i1_1", false,-1, 31,0);
    tracep->declBus(c+252,"io_posit_i1_2", false,-1, 31,0);
    tracep->declBus(c+253,"io_posit_i1_3", false,-1, 31,0);
    tracep->declBus(c+254,"io_posit_i2_0", false,-1, 31,0);
    tracep->declBus(c+255,"io_posit_i2_1", false,-1, 31,0);
    tracep->declBus(c+256,"io_posit_i2_2", false,-1, 31,0);
    tracep->declBus(c+257,"io_posit_i2_3", false,-1, 31,0);
    tracep->declBus(c+258,"io_op", false,-1, 3,0);
    tracep->declBit(c+259,"io_Isposit", false,-1);
    tracep->declBit(c+260,"io_Outposit", false,-1);
    tracep->declQuad(c+261,"io_float_i_0", false,-1, 63,0);
    tracep->declQuad(c+263,"io_float_i_1", false,-1, 63,0);
    tracep->declQuad(c+265,"io_float_i_2", false,-1, 63,0);
    tracep->declQuad(c+267,"io_float_i_3", false,-1, 63,0);
    tracep->declQuad(c+269,"io_float_i2_0", false,-1, 63,0);
    tracep->declQuad(c+271,"io_float_i2_1", false,-1, 63,0);
    tracep->declQuad(c+273,"io_float_i2_2", false,-1, 63,0);
    tracep->declQuad(c+275,"io_float_i2_3", false,-1, 63,0);
    tracep->declBus(c+277,"io_float_mode", false,-1, 2,0);
    tracep->declBit(c+278,"io_float_posit", false,-1);
    tracep->declBus(c+279,"io_src_posit_width", false,-1, 5,0);
    tracep->declBus(c+280,"io_vector_size", false,-1, 2,0);
    tracep->declBus(c+281,"io_dst_posit_width", false,-1, 5,0);
    tracep->declQuad(c+282,"io_float_o_0", false,-1, 63,0);
    tracep->declQuad(c+284,"io_float_o_1", false,-1, 63,0);
    tracep->declQuad(c+286,"io_float_o_2", false,-1, 63,0);
    tracep->declQuad(c+288,"io_float_o_3", false,-1, 63,0);
    tracep->declQuad(c+290,"io_float_dot_o", false,-1, 63,0);
    tracep->declBus(c+292,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+293,"io_posit_o_1", false,-1, 31,0);
    tracep->declBus(c+294,"io_posit_o_2", false,-1, 31,0);
    tracep->declBus(c+295,"io_posit_o_3", false,-1, 31,0);
    tracep->declBus(c+296,"io_posit_dot_o", false,-1, 31,0);
    tracep->declBus(c+297,"io_int_o_0", false,-1, 31,0);
    tracep->declBus(c+298,"io_int_o_1", false,-1, 31,0);
    tracep->declBus(c+299,"io_int_o_2", false,-1, 31,0);
    tracep->declBus(c+300,"io_int_o_3", false,-1, 31,0);
    tracep->pushNamePrefix("QvuTop ");
    tracep->declBit(c+248,"clock", false,-1);
    tracep->declBit(c+249,"reset", false,-1);
    tracep->declBus(c+250,"io_posit_i1_0", false,-1, 31,0);
    tracep->declBus(c+251,"io_posit_i1_1", false,-1, 31,0);
    tracep->declBus(c+252,"io_posit_i1_2", false,-1, 31,0);
    tracep->declBus(c+253,"io_posit_i1_3", false,-1, 31,0);
    tracep->declBus(c+254,"io_posit_i2_0", false,-1, 31,0);
    tracep->declBus(c+255,"io_posit_i2_1", false,-1, 31,0);
    tracep->declBus(c+256,"io_posit_i2_2", false,-1, 31,0);
    tracep->declBus(c+257,"io_posit_i2_3", false,-1, 31,0);
    tracep->declBus(c+258,"io_op", false,-1, 3,0);
    tracep->declBit(c+259,"io_Isposit", false,-1);
    tracep->declBit(c+260,"io_Outposit", false,-1);
    tracep->declQuad(c+261,"io_float_i_0", false,-1, 63,0);
    tracep->declQuad(c+263,"io_float_i_1", false,-1, 63,0);
    tracep->declQuad(c+265,"io_float_i_2", false,-1, 63,0);
    tracep->declQuad(c+267,"io_float_i_3", false,-1, 63,0);
    tracep->declQuad(c+269,"io_float_i2_0", false,-1, 63,0);
    tracep->declQuad(c+271,"io_float_i2_1", false,-1, 63,0);
    tracep->declQuad(c+273,"io_float_i2_2", false,-1, 63,0);
    tracep->declQuad(c+275,"io_float_i2_3", false,-1, 63,0);
    tracep->declBus(c+277,"io_float_mode", false,-1, 2,0);
    tracep->declBit(c+278,"io_float_posit", false,-1);
    tracep->declBus(c+279,"io_src_posit_width", false,-1, 5,0);
    tracep->declBus(c+280,"io_vector_size", false,-1, 2,0);
    tracep->declBus(c+281,"io_dst_posit_width", false,-1, 5,0);
    tracep->declQuad(c+282,"io_float_o_0", false,-1, 63,0);
    tracep->declQuad(c+284,"io_float_o_1", false,-1, 63,0);
    tracep->declQuad(c+286,"io_float_o_2", false,-1, 63,0);
    tracep->declQuad(c+288,"io_float_o_3", false,-1, 63,0);
    tracep->declQuad(c+290,"io_float_dot_o", false,-1, 63,0);
    tracep->declBus(c+292,"io_posit_o_0", false,-1, 31,0);
    tracep->declBus(c+293,"io_posit_o_1", false,-1, 31,0);
    tracep->declBus(c+294,"io_posit_o_2", false,-1, 31,0);
    tracep->declBus(c+295,"io_posit_o_3", false,-1, 31,0);
    tracep->declBus(c+296,"io_posit_dot_o", false,-1, 31,0);
    tracep->declBus(c+297,"io_int_o_0", false,-1, 31,0);
    tracep->declBus(c+298,"io_int_o_1", false,-1, 31,0);
    tracep->declBus(c+299,"io_int_o_2", false,-1, 31,0);
    tracep->declBus(c+300,"io_int_o_3", false,-1, 31,0);
    tracep->declBus(c+1,"ACTUAL_VECTOR_SIZE", false,-1, 2,0);
    tracep->declArray(c+301,"pir_frac", false,-1, 131,0);
    tracep->pushNamePrefix("decode1 ");
    tracep->declArray(c+306,"io_posit", false,-1, 127,0);
    tracep->declBus(c+2,"io_Sign", false,-1, 3,0);
    tracep->declBus(c+310,"io_Exp", false,-1, 31,0);
    tracep->declArray(c+311,"io_Frac", false,-1, 111,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"in_i", false,-1, 30,0);
    tracep->declBus(c+111,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+315,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+316,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+112,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+9,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"in_i", false,-1, 30,0);
    tracep->declBus(c+103,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+317,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+318,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+104,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+11,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"in_i", false,-1, 30,0);
    tracep->declBus(c+95,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+319,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+320,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+96,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+13,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"in_i", false,-1, 30,0);
    tracep->declBus(c+87,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+321,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+322,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+88,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+15,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declArray(c+323,"io_posit", false,-1, 127,0);
    tracep->declBus(c+16,"io_Sign", false,-1, 3,0);
    tracep->declBus(c+327,"io_Exp", false,-1, 31,0);
    tracep->declArray(c+328,"io_Frac", false,-1, 111,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"in_i", false,-1, 30,0);
    tracep->declBus(c+79,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+332,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+333,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+80,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+23,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"in_i", false,-1, 30,0);
    tracep->declBus(c+71,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+334,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+335,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+72,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+25,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+26,"in_i", false,-1, 30,0);
    tracep->declBus(c+63,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+336,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+337,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+64,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+27,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declBus(c+354,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+355,"MODE", false,-1);
    tracep->declBus(c+356,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"in_i", false,-1, 30,0);
    tracep->declBus(c+55,"cnt_o", false,-1, 4,0);
    tracep->declBit(c+338,"empty_o", false,-1);
    tracep->pushNamePrefix("gen_lzc ");
    tracep->declBus(c+356,"NumLevels", false,-1, 31,0);
    tracep->declArray(c+357,"index_lut", false,-1, 154,0);
    tracep->declBus(c+339,"sel_nodes", false,-1, 31,0);
    tracep->declArray(c+56,"index_nodes", false,-1, 159,0);
    tracep->declBus(c+29,"in_tmp", false,-1, 30,0);
    tracep->pushNamePrefix("flip_vector ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+354,"i", false,-1, 31,0);
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
    tracep->declArray(c+340,"io_float", false,-1, 127,0);
    tracep->declBus(c+344,"io_Sign", false,-1, 3,0);
    tracep->declQuad(c+30,"io_Exp", false,-1, 35,0);
    tracep->declArray(c+32,"io_Frac", false,-1, 95,0);
    tracep->declBus(c+345,"io_isNaN", false,-1, 3,0);
    tracep->declBus(c+35,"io_isInf", false,-1, 3,0);
    tracep->declBus(c+36,"io_isZero", false,-1, 3,0);
    tracep->declBit(c+37,"isExpAllZeros", false,-1);
    tracep->declBit(c+38,"isExpAllZeros_1", false,-1);
    tracep->declBit(c+39,"isExpAllZeros_2", false,-1);
    tracep->declBit(c+40,"isExpAllZeros_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("floatDecode2 ");
    tracep->declArray(c+346,"io_float", false,-1, 127,0);
    tracep->declBus(c+350,"io_Sign", false,-1, 3,0);
    tracep->declQuad(c+41,"io_Exp", false,-1, 35,0);
    tracep->declArray(c+43,"io_Frac", false,-1, 95,0);
    tracep->declBus(c+351,"io_isNaN", false,-1, 3,0);
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
    tracep->declArray(c+301,"io_pir_frac_i", false,-1, 131,0);
    tracep->declQuad(c+352,"io_fp16_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantizeInt4 ");
    tracep->declBit(c+248,"clock", false,-1);
    tracep->declBit(c+249,"reset", false,-1);
    tracep->declBus(c+52,"io_pir_sign_i", false,-1, 3,0);
    tracep->declBus(c+117,"io_pir_exp_i", false,-1, 31,0);
    tracep->declArray(c+301,"io_pir_frac_i", false,-1, 131,0);
    tracep->declBus(c+126,"io_int4_o", false,-1, 15,0);
    tracep->declQuad(c+188,"globalMax", false,-1, 32,0);
    tracep->declQuad(c+190,"globalMin", false,-1, 32,0);
    tracep->declQuad(c+192,"globalScale", false,-1, 32,0);
    tracep->declQuad(c+194,"globalOffset", false,-1, 32,0);
    tracep->declQuad(c+196,"batchMax", false,-1, 32,0);
    tracep->declQuad(c+198,"batchMin", false,-1, 32,0);
    tracep->declBit(c+200,"batchHasData", false,-1);
    tracep->declBus(c+201,"state", false,-1, 1,0);
    tracep->declArray(c+202,"histogram", false,-1, 127,0);
    tracep->declBus(c+206,"histogramTotal", false,-1, 19,0);
    tracep->declBus(c+118,"shiftVal", false,-1, 5,0);
    tracep->declBus(c+119,"shiftedFrac", false,-1, 31,0);
    tracep->declBus(c+120,"shiftVal_1", false,-1, 5,0);
    tracep->declBus(c+121,"shiftedFrac_1", false,-1, 31,0);
    tracep->declBus(c+122,"shiftVal_2", false,-1, 5,0);
    tracep->declBus(c+123,"shiftedFrac_2", false,-1, 31,0);
    tracep->declBus(c+124,"shiftVal_3", false,-1, 5,0);
    tracep->declBus(c+125,"shiftedFrac_3", false,-1, 31,0);
    tracep->declQuad(c+127,"scaledValue", false,-1, 33,0);
    tracep->declQuad(c+129,"remainder", false,-1, 32,0);
    tracep->declQuad(c+131,"tempIdx", false,-1, 33,0);
    tracep->declBit(c+133,"needRounding", false,-1);
    tracep->declBus(c+134,"roundingDirection", false,-1, 1,0);
    tracep->declQuad(c+135,"quantizedValue", false,-1, 32,0);
    tracep->declQuad(c+137,"scaledValue_1", false,-1, 33,0);
    tracep->declQuad(c+139,"remainder_1", false,-1, 32,0);
    tracep->declQuad(c+141,"tempIdx_1", false,-1, 33,0);
    tracep->declBit(c+143,"needRounding_1", false,-1);
    tracep->declBus(c+144,"roundingDirection_1", false,-1, 1,0);
    tracep->declQuad(c+145,"quantizedValue_1", false,-1, 32,0);
    tracep->declQuad(c+147,"scaledValue_2", false,-1, 33,0);
    tracep->declQuad(c+149,"remainder_2", false,-1, 32,0);
    tracep->declQuad(c+151,"tempIdx_2", false,-1, 33,0);
    tracep->declBit(c+153,"needRounding_2", false,-1);
    tracep->declBus(c+154,"roundingDirection_2", false,-1, 1,0);
    tracep->declQuad(c+155,"quantizedValue_2", false,-1, 32,0);
    tracep->declQuad(c+157,"scaledValue_3", false,-1, 33,0);
    tracep->declQuad(c+159,"remainder_3", false,-1, 32,0);
    tracep->declQuad(c+161,"tempIdx_3", false,-1, 33,0);
    tracep->declBit(c+163,"needRounding_3", false,-1);
    tracep->declBus(c+164,"roundingDirection_3", false,-1, 1,0);
    tracep->declQuad(c+165,"quantizedValue_3", false,-1, 32,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+207,"lowerThreshold", false,-1, 22,0);
    tracep->declQuad(c+208,"binWidth_4", false,-1, 32,0);
    tracep->declQuad(c+210,"effectiveMin", false,-1, 32,0);
    tracep->declQuad(c+212,"effectiveMax", false,-1, 32,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declQuad(c+214,"binWidth", false,-1, 32,0);
    tracep->declQuad(c+216,"tempIndex", false,-1, 32,0);
    tracep->declBus(c+218,"safeIndex", false,-1, 2,0);
    tracep->declQuad(c+219,"binWidth_1", false,-1, 32,0);
    tracep->declQuad(c+221,"tempIndex_1", false,-1, 32,0);
    tracep->declBus(c+223,"safeIndex_1", false,-1, 2,0);
    tracep->declQuad(c+224,"binWidth_2", false,-1, 32,0);
    tracep->declQuad(c+226,"tempIndex_2", false,-1, 32,0);
    tracep->declBus(c+228,"safeIndex_2", false,-1, 2,0);
    tracep->declQuad(c+229,"binWidth_3", false,-1, 32,0);
    tracep->declQuad(c+231,"tempIndex_3", false,-1, 32,0);
    tracep->declBus(c+233,"safeIndex_3", false,-1, 2,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("quantizeInt8 ");
    tracep->declBit(c+248,"clock", false,-1);
    tracep->declBit(c+249,"reset", false,-1);
    tracep->declBus(c+52,"io_pir_sign_i", false,-1, 3,0);
    tracep->declBus(c+117,"io_pir_exp_i", false,-1, 31,0);
    tracep->declArray(c+301,"io_pir_frac_i", false,-1, 131,0);
    tracep->declBus(c+167,"io_int8_o", false,-1, 31,0);
    tracep->declQuad(c+234,"globalMax", false,-1, 32,0);
    tracep->declQuad(c+236,"globalMin", false,-1, 32,0);
    tracep->declQuad(c+238,"globalScale", false,-1, 32,0);
    tracep->declQuad(c+240,"globalOffset", false,-1, 32,0);
    tracep->declQuad(c+242,"batchMax", false,-1, 32,0);
    tracep->declQuad(c+244,"batchMin", false,-1, 32,0);
    tracep->declBit(c+246,"batchHasData", false,-1);
    tracep->declBus(c+247,"state", false,-1, 1,0);
    tracep->declBus(c+118,"shiftVal", false,-1, 5,0);
    tracep->declBus(c+119,"shiftedFrac", false,-1, 31,0);
    tracep->declBus(c+120,"shiftVal_1", false,-1, 5,0);
    tracep->declBus(c+121,"shiftedFrac_1", false,-1, 31,0);
    tracep->declBus(c+122,"shiftVal_2", false,-1, 5,0);
    tracep->declBus(c+123,"shiftedFrac_2", false,-1, 31,0);
    tracep->declBus(c+124,"shiftVal_3", false,-1, 5,0);
    tracep->declBus(c+125,"shiftedFrac_3", false,-1, 31,0);
    tracep->declQuad(c+168,"scaledValue", false,-1, 33,0);
    tracep->declQuad(c+170,"remainder", false,-1, 32,0);
    tracep->declBit(c+172,"needRounding", false,-1);
    tracep->declQuad(c+173,"scaledValue_1", false,-1, 33,0);
    tracep->declQuad(c+175,"remainder_1", false,-1, 32,0);
    tracep->declBit(c+177,"needRounding_1", false,-1);
    tracep->declQuad(c+178,"scaledValue_2", false,-1, 33,0);
    tracep->declQuad(c+180,"remainder_2", false,-1, 32,0);
    tracep->declBit(c+182,"needRounding_2", false,-1);
    tracep->declQuad(c+183,"scaledValue_3", false,-1, 33,0);
    tracep->declQuad(c+185,"remainder_3", false,-1, 32,0);
    tracep->declBit(c+187,"needRounding_3", false,-1);
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
    VlWide<5>/*159:0*/ __Vtemp_h3fa4dffb__0;
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
    bufp->fullCData(oldp+52,(vlSelf->QvuTop__DOT___GEN_4),4);
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
    bufp->fullSData(oldp+126,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
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
    bufp->fullQData(oldp+127,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue),34);
    bufp->fullQData(oldp+129,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder),33);
    bufp->fullQData(oldp+131,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx),34);
    bufp->fullBit(oldp+133,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding));
    bufp->fullCData(oldp+134,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection),2);
    bufp->fullQData(oldp+135,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue),33);
    bufp->fullQData(oldp+137,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1),34);
    bufp->fullQData(oldp+139,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1),33);
    bufp->fullQData(oldp+141,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1),34);
    bufp->fullBit(oldp+143,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1));
    bufp->fullCData(oldp+144,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1),2);
    bufp->fullQData(oldp+145,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1),33);
    bufp->fullQData(oldp+147,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2),34);
    bufp->fullQData(oldp+149,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2),33);
    bufp->fullQData(oldp+151,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2),34);
    bufp->fullBit(oldp+153,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2));
    bufp->fullCData(oldp+154,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2),2);
    bufp->fullQData(oldp+155,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2),33);
    bufp->fullQData(oldp+157,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3),34);
    bufp->fullQData(oldp+159,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3),33);
    bufp->fullQData(oldp+161,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3),34);
    bufp->fullBit(oldp+163,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3));
    bufp->fullCData(oldp+164,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3),2);
    bufp->fullQData(oldp+165,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3),33);
    bufp->fullIData(oldp+167,(((((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT___GEN_9)
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
    bufp->fullQData(oldp+168,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8d89f6e8__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+170,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder),33);
    bufp->fullBit(oldp+172,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding));
    bufp->fullQData(oldp+173,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h421836e6__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+175,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_1),33);
    bufp->fullBit(oldp+177,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_1));
    bufp->fullQData(oldp+178,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h44fc25d8__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+180,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_2),33);
    bufp->fullBit(oldp+182,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_2));
    bufp->fullQData(oldp+183,(((0U != vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale)
                                ? vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h964749d0__0
                                : 0ULL)),34);
    bufp->fullQData(oldp+185,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__remainder_3),33);
    bufp->fullBit(oldp+187,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__needRounding_3));
    bufp->fullQData(oldp+188,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMax),33);
    bufp->fullQData(oldp+190,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalMin),33);
    bufp->fullQData(oldp+192,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale),33);
    bufp->fullQData(oldp+194,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset),33);
    bufp->fullQData(oldp+196,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMax),33);
    bufp->fullQData(oldp+198,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchMin),33);
    bufp->fullBit(oldp+200,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__batchHasData));
    bufp->fullCData(oldp+201,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__state),2);
    bufp->fullWData(oldp+202,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram),128);
    bufp->fullIData(oldp+206,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal),20);
    bufp->fullIData(oldp+207,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__lowerThreshold),23);
    bufp->fullQData(oldp+208,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__binWidth_4),33);
    bufp->fullQData(oldp+210,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMin),33);
    bufp->fullQData(oldp+212,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__effectiveMax),33);
    bufp->fullQData(oldp+214,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth),33);
    bufp->fullQData(oldp+216,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex),33);
    bufp->fullCData(oldp+218,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex),3);
    bufp->fullQData(oldp+219,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_1),33);
    bufp->fullQData(oldp+221,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_1),33);
    bufp->fullCData(oldp+223,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_1),3);
    bufp->fullQData(oldp+224,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_2),33);
    bufp->fullQData(oldp+226,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_2),33);
    bufp->fullCData(oldp+228,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_2),3);
    bufp->fullQData(oldp+229,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__binWidth_3),33);
    bufp->fullQData(oldp+231,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tempIndex_3),33);
    bufp->fullCData(oldp+233,(vlSelf->QvuTop__DOT__quantizeInt4__DOT__unnamedblk1__DOT__unnamedblk3__DOT__safeIndex_3),3);
    bufp->fullQData(oldp+234,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMax),33);
    bufp->fullQData(oldp+236,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalMin),33);
    bufp->fullQData(oldp+238,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalScale),33);
    bufp->fullQData(oldp+240,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__globalOffset),33);
    bufp->fullQData(oldp+242,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMax),33);
    bufp->fullQData(oldp+244,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchMin),33);
    bufp->fullBit(oldp+246,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__batchHasData));
    bufp->fullCData(oldp+247,(vlSelf->QvuTop__DOT__quantizeInt8__DOT__state),2);
    bufp->fullBit(oldp+248,(vlSelf->clock));
    bufp->fullBit(oldp+249,(vlSelf->reset));
    bufp->fullIData(oldp+250,(vlSelf->io_posit_i1_0),32);
    bufp->fullIData(oldp+251,(vlSelf->io_posit_i1_1),32);
    bufp->fullIData(oldp+252,(vlSelf->io_posit_i1_2),32);
    bufp->fullIData(oldp+253,(vlSelf->io_posit_i1_3),32);
    bufp->fullIData(oldp+254,(vlSelf->io_posit_i2_0),32);
    bufp->fullIData(oldp+255,(vlSelf->io_posit_i2_1),32);
    bufp->fullIData(oldp+256,(vlSelf->io_posit_i2_2),32);
    bufp->fullIData(oldp+257,(vlSelf->io_posit_i2_3),32);
    bufp->fullCData(oldp+258,(vlSelf->io_op),4);
    bufp->fullBit(oldp+259,(vlSelf->io_Isposit));
    bufp->fullBit(oldp+260,(vlSelf->io_Outposit));
    bufp->fullQData(oldp+261,(vlSelf->io_float_i_0),64);
    bufp->fullQData(oldp+263,(vlSelf->io_float_i_1),64);
    bufp->fullQData(oldp+265,(vlSelf->io_float_i_2),64);
    bufp->fullQData(oldp+267,(vlSelf->io_float_i_3),64);
    bufp->fullQData(oldp+269,(vlSelf->io_float_i2_0),64);
    bufp->fullQData(oldp+271,(vlSelf->io_float_i2_1),64);
    bufp->fullQData(oldp+273,(vlSelf->io_float_i2_2),64);
    bufp->fullQData(oldp+275,(vlSelf->io_float_i2_3),64);
    bufp->fullCData(oldp+277,(vlSelf->io_float_mode),3);
    bufp->fullBit(oldp+278,(vlSelf->io_float_posit));
    bufp->fullCData(oldp+279,(vlSelf->io_src_posit_width),6);
    bufp->fullCData(oldp+280,(vlSelf->io_vector_size),3);
    bufp->fullCData(oldp+281,(vlSelf->io_dst_posit_width),6);
    bufp->fullQData(oldp+282,(vlSelf->io_float_o_0),64);
    bufp->fullQData(oldp+284,(vlSelf->io_float_o_1),64);
    bufp->fullQData(oldp+286,(vlSelf->io_float_o_2),64);
    bufp->fullQData(oldp+288,(vlSelf->io_float_o_3),64);
    bufp->fullQData(oldp+290,(vlSelf->io_float_dot_o),64);
    bufp->fullIData(oldp+292,(vlSelf->io_posit_o_0),32);
    bufp->fullIData(oldp+293,(vlSelf->io_posit_o_1),32);
    bufp->fullIData(oldp+294,(vlSelf->io_posit_o_2),32);
    bufp->fullIData(oldp+295,(vlSelf->io_posit_o_3),32);
    bufp->fullIData(oldp+296,(vlSelf->io_posit_dot_o),32);
    bufp->fullIData(oldp+297,(vlSelf->io_int_o_0),32);
    bufp->fullIData(oldp+298,(vlSelf->io_int_o_1),32);
    bufp->fullIData(oldp+299,(vlSelf->io_int_o_2),32);
    bufp->fullIData(oldp+300,(vlSelf->io_int_o_3),32);
    __Vtemp_h3fa4dffb__0[0U] = (IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0);
    __Vtemp_h3fa4dffb__0[1U] = (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0) 
                                 << 1U) | (IData)((vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdf96a634__0 
                                                   >> 0x20U)));
    __Vtemp_h3fa4dffb__0[2U] = (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0) 
                                 << 2U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      (vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hdcaf4442__0 
                                                       >> 0x20U)) 
                                              << 1U)));
    __Vtemp_h3fa4dffb__0[3U] = (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0) 
                                 << 3U) | (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0) 
                                            >> 0x1eU) 
                                           | ((IData)(
                                                      (vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd95c8ec3__0 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_h3fa4dffb__0[4U] = (((IData)(vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0) 
                                 >> 0x1dU) | ((IData)(
                                                      (vlSelf->QvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd9d61d93__0 
                                                       >> 0x20U)) 
                                              << 3U));
    bufp->fullWData(oldp+301,(__Vtemp_h3fa4dffb__0),132);
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
    bufp->fullWData(oldp+306,(__Vtemp_h1b06671e__0),128);
    bufp->fullIData(oldp+310,(((((8U & (IData)(vlSelf->QvuTop__DOT__decode1__DOT__isNaR))
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
    bufp->fullWData(oldp+311,(__Vtemp_h6dabf4ce__0),112);
    bufp->fullBit(oldp+315,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+316,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+317,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+318,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+319,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+320,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+321,((1U & (~ vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+322,(vlSelf->QvuTop__DOT__decode1__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->fullWData(oldp+323,(__Vtemp_ha81f68f6__0),128);
    bufp->fullIData(oldp+327,(vlSelf->QvuTop__DOT__decode2__DOT__io_Exp),32);
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
    bufp->fullWData(oldp+328,(__Vtemp_hf607cc56__0),112);
    bufp->fullBit(oldp+332,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+333,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+334,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+335,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+336,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+337,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->fullBit(oldp+338,((1U & (~ vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->fullIData(oldp+339,(vlSelf->QvuTop__DOT__decode2__DOT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
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
    bufp->fullWData(oldp+340,(__Vtemp_h4bbae0a6__0),128);
    bufp->fullCData(oldp+344,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
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
    bufp->fullCData(oldp+345,(((IData)(vlSelf->QvuTop__DOT__floatDecode1__DOT___GEN) 
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
    bufp->fullWData(oldp+346,(__Vtemp_hbc5c8910__0),128);
    bufp->fullCData(oldp+350,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
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
    bufp->fullCData(oldp+351,(((IData)(vlSelf->QvuTop__DOT__floatDecode2__DOT___GEN) 
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
    bufp->fullQData(oldp+352,((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
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
                                                                  & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                                     >> 2U)))) 
                                                 << 0x2fU) 
                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h6db38b42__0)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x80000000U 
                                                                       & ((IData)(vlSelf->QvuTop__DOT___GEN_4) 
                                                                          << 0x1eU)) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_h9981df73__0) 
                                                                          << 0x10U) 
                                                                         | (IData)(vlSelf->__VdfgTmp_h92081510__0)))))))))),64);
    bufp->fullIData(oldp+354,(0x1fU),32);
    bufp->fullBit(oldp+355,(1U));
    bufp->fullIData(oldp+356,(5U),32);
    __Vtemp_hc5d9e20e__0[0U] = 0x8a418820U;
    __Vtemp_hc5d9e20e__0[1U] = 0xc5a92839U;
    __Vtemp_hc5d9e20e__0[2U] = 0xca307b9aU;
    __Vtemp_hc5d9e20e__0[3U] = 0x38bdab49U;
    __Vtemp_hc5d9e20e__0[4U] = 0x7bbcdebU;
    bufp->fullWData(oldp+357,(__Vtemp_hc5d9e20e__0),155);
}
