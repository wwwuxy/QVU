// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_POSITDECODE_H_
#define VERILATED_VPVUTOP_POSITDECODE_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;

class VPvuTop_PositDecode final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(io_Sign,3,0);
    VL_OUT(io_Exp,31,0);
    CData/*3:0*/ __PVT__isNaR;
    VlWide<5>/*159:0*/ __PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes;
    VlWide<5>/*159:0*/ __PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes;
    VlWide<5>/*159:0*/ __PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes;
    VlWide<5>/*159:0*/ __PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes;
    VL_INW(io_posit,127,0,4);
    VL_OUTW(io_Frac,111,0,4);
    IData/*30:0*/ __PVT___barrel_shifter_3_io_result_o;
    IData/*30:0*/ __PVT___barrel_shifter_2_io_result_o;
    IData/*30:0*/ __PVT___barrel_shifter_1_io_result_o;
    IData/*30:0*/ __PVT___barrel_shifter_io_result_o;
    IData/*30:0*/ __PVT___operand_0_T_6;
    IData/*30:0*/ __PVT___operand_1_T_6;
    IData/*30:0*/ __PVT___operand_2_T_6;
    IData/*30:0*/ __PVT___operand_3_T_6;
    IData/*30:0*/ __Vcellinp__lzcModule__in_i;
    IData/*30:0*/ __Vcellinp__lzcModule_1__in_i;
    IData/*30:0*/ __Vcellinp__lzcModule_2__in_i;
    IData/*30:0*/ __Vcellinp__lzcModule_3__in_i;
    IData/*31:0*/ __PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes;
    IData/*30:0*/ __PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp;
    IData/*31:0*/ __PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes;
    IData/*30:0*/ __PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp;
    IData/*31:0*/ __PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes;
    IData/*30:0*/ __PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp;
    IData/*31:0*/ __PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes;
    IData/*30:0*/ __PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp;

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_PositDecode(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_PositDecode();
    VL_UNCOPYABLE(VPvuTop_PositDecode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
