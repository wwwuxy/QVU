# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VPvuTop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VPvuTop \
	VPvuTop___024root__DepSet_h08eac463__0 \
	VPvuTop___024root__DepSet_h08eac463__1 \
	VPvuTop___024root__DepSet_h08eac463__2 \
	VPvuTop___024root__DepSet_h6498118e__0 \
	VPvuTop___024root__DepSet_h6498118e__1 \
	VPvuTop___024root__DepSet_h6498118e__2 \
	VPvuTop_PositDecode__DepSet_h56c1e779__0 \
	VPvuTop_PositDecode__DepSet_h2008ce25__0 \
	VPvuTop_IntDivider__DepSet_h84937774__0 \
	VPvuTop_IntDivider__DepSet_h7232fb6f__0 \
	VPvuTop_IntDivider__DepSet_h84266880__0 \
	VPvuTop_IntDivider__DepSet_h84266880__1 \
	VPvuTop_Radix4BoothMultiplier__DepSet_ha8b963b5__0 \
	VPvuTop_Radix4BoothMultiplier__DepSet_h2cb52d1d__0 \
	VPvuTop_LZC__M1_W44__DepSet_h7ba05883__0 \
	VPvuTop_LZC__M1_W44__DepSet_hcc3d509d__0 \
	VPvuTop_CsaTree_30__DepSet_h05a04879__0 \
	VPvuTop_CsaTree_30__DepSet_ha9891a1f__0 \
	VPvuTop_CsaTree_30__DepSet_ha9891a1f__1 \
	VPvuTop_CsaTree_30__DepSet_ha9891a1f__2 \
	VPvuTop_CsaTree_30__DepSet_ha9891a1f__3 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__0 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__1 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__2 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__3 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__4 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__5 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__6 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__7 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__8 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__9 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__10 \
	VPvuTop_Compressor4to2__DepSet_h621f074e__11 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__0 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__1 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__2 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__3 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__4 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__5 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__6 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__7 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__8 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__9 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__10 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__11 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__12 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__13 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__14 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__15 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__16 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__17 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__18 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__19 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__20 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__21 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__22 \
	VPvuTop_Compressor4to2_24__DepSet_hb5a704c3__23 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VPvuTop__ConstPool_0 \
	VPvuTop___024root__Slow \
	VPvuTop___024root__DepSet_h08eac463__0__Slow \
	VPvuTop___024root__DepSet_h6498118e__0__Slow \
	VPvuTop_PositDecode__Slow \
	VPvuTop_PositDecode__DepSet_h56c1e779__0__Slow \
	VPvuTop_IntDivider__Slow \
	VPvuTop_IntDivider__DepSet_hc192c4a7__0__Slow \
	VPvuTop_Radix4BoothMultiplier__Slow \
	VPvuTop_Radix4BoothMultiplier__DepSet_h65fcae19__0__Slow \
	VPvuTop_LZC__M1_W44__Slow \
	VPvuTop_LZC__M1_W44__DepSet_h7ba05883__0__Slow \
	VPvuTop_CsaTree_30__Slow \
	VPvuTop_CsaTree_30__DepSet_h40a185b4__0__Slow \
	VPvuTop_Compressor4to2__Slow \
	VPvuTop_Compressor4to2__DepSet_h49a2d95a__0__Slow \
	VPvuTop_Compressor4to2_24__Slow \
	VPvuTop_Compressor4to2_24__DepSet_he9c548a4__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VPvuTop__Trace__0 \
	VPvuTop__Trace__1 \
	VPvuTop__Trace__2 \
	VPvuTop__Trace__3 \
	VPvuTop__Trace__4 \
	VPvuTop__Trace__5 \
	VPvuTop__Trace__6 \
	VPvuTop__Trace__7 \
	VPvuTop__Trace__8 \
	VPvuTop__Trace__9 \
	VPvuTop__Trace__10 \
	VPvuTop__Trace__11 \
	VPvuTop__Trace__12 \
	VPvuTop__Trace__13 \
	VPvuTop__Trace__14 \
	VPvuTop__Trace__15 \
	VPvuTop__Trace__16 \
	VPvuTop__Trace__17 \
	VPvuTop__Trace__18 \
	VPvuTop__Trace__19 \
	VPvuTop__Trace__20 \
	VPvuTop__Trace__21 \
	VPvuTop__Trace__22 \
	VPvuTop__Trace__23 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VPvuTop__Syms \
	VPvuTop__Trace__0__Slow \
	VPvuTop__Trace__1__Slow \
	VPvuTop__Trace__2__Slow \
	VPvuTop__Trace__3__Slow \
	VPvuTop__Trace__4__Slow \
	VPvuTop__Trace__5__Slow \
	VPvuTop__Trace__6__Slow \
	VPvuTop__Trace__7__Slow \
	VPvuTop__Trace__8__Slow \
	VPvuTop__Trace__9__Slow \
	VPvuTop__Trace__10__Slow \
	VPvuTop__Trace__11__Slow \
	VPvuTop__Trace__12__Slow \
	VPvuTop__Trace__13__Slow \
	VPvuTop__Trace__14__Slow \
	VPvuTop__Trace__15__Slow \
	VPvuTop__Trace__16__Slow \
	VPvuTop__Trace__17__Slow \
	VPvuTop__Trace__18__Slow \
	VPvuTop__Trace__19__Slow \
	VPvuTop__Trace__20__Slow \
	VPvuTop__Trace__21__Slow \
	VPvuTop__Trace__22__Slow \
	VPvuTop__Trace__23__Slow \
	VPvuTop__Trace__24__Slow \
	VPvuTop__Trace__25__Slow \
	VPvuTop__Trace__26__Slow \
	VPvuTop__Trace__27__Slow \
	VPvuTop__Trace__28__Slow \
	VPvuTop__Trace__29__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
