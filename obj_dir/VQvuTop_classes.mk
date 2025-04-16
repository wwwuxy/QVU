# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VQvuTop.mk for the caller.

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
	VQvuTop \
	VQvuTop___024root__DepSet_h7b55f315__0 \
	VQvuTop___024root__DepSet_h7b55f315__1 \
	VQvuTop___024root__DepSet_he854fd59__0 \
	VQvuTop___024root__DepSet_he854fd59__1 \
	VQvuTop_LZC__M1_W1f__DepSet_h96e4c966__0 \
	VQvuTop_LZC__M1_W1f__DepSet_hbd3f1770__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VQvuTop__ConstPool_0 \
	VQvuTop___024root__Slow \
	VQvuTop___024root__DepSet_h7b55f315__0__Slow \
	VQvuTop___024root__DepSet_he854fd59__0__Slow \
	VQvuTop_LZC__M1_W1f__Slow \
	VQvuTop_LZC__M1_W1f__DepSet_h96e4c966__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VQvuTop__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VQvuTop__Syms \
	VQvuTop__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
