// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPvuTop.h for the primary calling header

#ifndef VERILATED_VPVUTOP_COMPRESSOR4TO2_H_
#define VERILATED_VPVUTOP_COMPRESSOR4TO2_H_  // guard

#include "verilated.h"

class VPvuTop__Syms;

class VPvuTop_Compressor4to2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT___counter_53_io_cout;
        CData/*0:0*/ __PVT___counter_52_io_cout;
        CData/*0:0*/ __PVT___counter_51_io_cout;
        CData/*0:0*/ __PVT___counter_50_io_cout;
        CData/*0:0*/ __PVT___counter_49_io_cout;
        CData/*0:0*/ __PVT___counter_48_io_cout;
        CData/*0:0*/ __PVT___counter_47_io_cout;
        CData/*0:0*/ __PVT___counter_46_io_cout;
        CData/*0:0*/ __PVT___counter_45_io_cout;
        CData/*0:0*/ __PVT___counter_44_io_cout;
        CData/*0:0*/ __PVT___counter_43_io_cout;
        CData/*0:0*/ __PVT___counter_42_io_cout;
        CData/*0:0*/ __PVT___counter_41_io_cout;
        CData/*0:0*/ __PVT___counter_40_io_cout;
        CData/*0:0*/ __PVT___counter_39_io_cout;
        CData/*0:0*/ __PVT___counter_38_io_cout;
        CData/*0:0*/ __PVT___counter_37_io_cout;
        CData/*0:0*/ __PVT___counter_36_io_cout;
        CData/*0:0*/ __PVT___counter_35_io_cout;
        CData/*0:0*/ __PVT___counter_34_io_cout;
        CData/*0:0*/ __PVT___counter_33_io_cout;
        CData/*0:0*/ __PVT___counter_32_io_cout;
        CData/*0:0*/ __PVT___counter_31_io_cout;
        CData/*0:0*/ __PVT___counter_30_io_cout;
        CData/*0:0*/ __PVT___counter_29_io_cout;
        CData/*0:0*/ __PVT___counter_28_io_cout;
        CData/*0:0*/ __PVT___counter_27_io_cout;
        CData/*0:0*/ __PVT___counter_26_io_cout;
        CData/*0:0*/ __PVT___counter_25_io_cout;
        CData/*0:0*/ __PVT___counter_24_io_cout;
        CData/*0:0*/ __PVT___counter_23_io_cout;
        CData/*0:0*/ __PVT___counter_22_io_cout;
        CData/*0:0*/ __PVT___counter_21_io_cout;
        CData/*0:0*/ __PVT___counter_20_io_cout;
        CData/*0:0*/ __PVT___counter_19_io_cout;
        CData/*0:0*/ __PVT___counter_18_io_cout;
        CData/*0:0*/ __PVT___counter_17_io_cout;
        CData/*0:0*/ __PVT___counter_16_io_cout;
        CData/*0:0*/ __PVT___counter_15_io_cout;
        CData/*0:0*/ __PVT___counter_14_io_cout;
        CData/*0:0*/ __PVT___counter_13_io_cout;
        CData/*0:0*/ __PVT___counter_12_io_cout;
        CData/*0:0*/ __PVT___counter_11_io_cout;
        CData/*0:0*/ __PVT___counter_10_io_cout;
        CData/*0:0*/ __PVT___counter_9_io_cout;
        CData/*0:0*/ __PVT___counter_8_io_cout;
        CData/*0:0*/ __PVT___counter_7_io_cout;
        CData/*0:0*/ __PVT___counter_6_io_cout;
        CData/*0:0*/ __PVT___counter_5_io_cout;
        CData/*0:0*/ __PVT___counter_4_io_cout;
        CData/*0:0*/ __PVT___counter_3_io_cout;
        CData/*0:0*/ __PVT___counter_2_io_cout;
        CData/*0:0*/ __PVT___counter_1_io_cout;
        CData/*0:0*/ __PVT___counter_io_cout;
        CData/*0:0*/ counter__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_1__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_1__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_2__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_2__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_3__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_3__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_4__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_4__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_5__DOT____VdfgTmp_hdcc6bc88__0;
    };
    struct {
        CData/*0:0*/ counter_5__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_6__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_6__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_7__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_7__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_8__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_8__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_9__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_9__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_10__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_10__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_11__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_11__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_12__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_12__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_13__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_13__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_14__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_14__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_15__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_15__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_16__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_16__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_17__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_17__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_18__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_18__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_19__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_19__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_20__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_20__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_21__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_21__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_22__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_22__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_23__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_23__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_24__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_24__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_25__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_25__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_26__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_26__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_27__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_27__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_28__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_28__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_29__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_29__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_30__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_30__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_31__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_31__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_32__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_32__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_33__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_33__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_34__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_34__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_35__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_35__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_36__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_36__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_37__DOT____VdfgTmp_hdcc6bc88__0;
    };
    struct {
        CData/*0:0*/ counter_37__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_38__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_38__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_39__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_39__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_40__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_40__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_41__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_41__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_42__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_42__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_43__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_43__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_44__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_44__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_45__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_45__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_46__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_46__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_47__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_47__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_48__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_48__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_49__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_49__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_50__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_50__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_51__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_51__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_52__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_52__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ counter_53__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_53__DOT____VdfgTmp_h31758f64__0;
        CData/*0:0*/ __PVT__counter_54__DOT___carryWire_T_4;
        CData/*0:0*/ counter_54__DOT____VdfgTmp_hdcc6bc88__0;
        CData/*0:0*/ counter_54__DOT____VdfgTmp_h31758f64__0;
        VL_INW(__PVT__io_operands_i,223,0,7);
        VL_OUT64(__PVT__io_sum_o,55,0);
        VL_OUT64(__PVT__io_carry_o,55,0);
    };

    // INTERNAL VARIABLES
    VPvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPvuTop_Compressor4to2(VPvuTop__Syms* symsp, const char* v__name);
    ~VPvuTop_Compressor4to2();
    VL_UNCOPYABLE(VPvuTop_Compressor4to2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
