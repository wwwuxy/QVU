# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VQvuTop.mk

default: VQvuTop

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VQvuTop
# Module prefix (from --prefix)
VM_MODPREFIX = VQvuTop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	main_alexnet_fp16 \
	main_alexnet_int4 \
	main_alexnet_int8 \
	main_convnext_fp16 \
	main_convnext_int4 \
	main_convnext_int8 \
	main_efficientnet_fp16 \
	main_efficientnet_int4 \
	main_efficientnet_int8 \
	main_lenet_fp16 \
	main_lenet_int4 \
	main_lenet_int8 \
	main_mobilenet_fp16 \
	main_mobilenet_int4 \
	main_mobilenet_int8 \
	main_regnet_fp16 \
	main_regnet_int4 \
	main_regnet_int8 \
	main_resnet_fp16 \
	main_resnet_int4 \
	main_resnet_int8 \
	main_shufflenetv2_fp16 \
	main_shufflenetv2_int4 \
	main_shufflenetv2_int8 \
	main_squeezenet_fp16 \
	main_squeezenet_int4 \
	main_squeezenet_int8 \
	main_vgg_fp16 \
	main_vgg_int4 \
	main_vgg_int8 \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/wuxy/QVU/csrc \


### Default rules...
# Include list of all generated classes
include VQvuTop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

main_alexnet_fp16.o: /home/wuxy/QVU/csrc/main_alexnet_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_int4.o: /home/wuxy/QVU/csrc/main_alexnet_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_alexnet_int8.o: /home/wuxy/QVU/csrc/main_alexnet_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_fp16.o: /home/wuxy/QVU/csrc/main_convnext_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_int4.o: /home/wuxy/QVU/csrc/main_convnext_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_convnext_int8.o: /home/wuxy/QVU/csrc/main_convnext_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_fp16.o: /home/wuxy/QVU/csrc/main_efficientnet_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_int4.o: /home/wuxy/QVU/csrc/main_efficientnet_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_efficientnet_int8.o: /home/wuxy/QVU/csrc/main_efficientnet_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_fp16.o: /home/wuxy/QVU/csrc/main_lenet_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_int4.o: /home/wuxy/QVU/csrc/main_lenet_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_lenet_int8.o: /home/wuxy/QVU/csrc/main_lenet_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_fp16.o: /home/wuxy/QVU/csrc/main_mobilenet_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_int4.o: /home/wuxy/QVU/csrc/main_mobilenet_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_mobilenet_int8.o: /home/wuxy/QVU/csrc/main_mobilenet_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_fp16.o: /home/wuxy/QVU/csrc/main_regnet_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_int4.o: /home/wuxy/QVU/csrc/main_regnet_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_regnet_int8.o: /home/wuxy/QVU/csrc/main_regnet_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_fp16.o: /home/wuxy/QVU/csrc/main_resnet_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_int4.o: /home/wuxy/QVU/csrc/main_resnet_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_resnet_int8.o: /home/wuxy/QVU/csrc/main_resnet_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_fp16.o: /home/wuxy/QVU/csrc/main_shufflenetv2_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_int4.o: /home/wuxy/QVU/csrc/main_shufflenetv2_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_shufflenetv2_int8.o: /home/wuxy/QVU/csrc/main_shufflenetv2_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_fp16.o: /home/wuxy/QVU/csrc/main_squeezenet_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_int4.o: /home/wuxy/QVU/csrc/main_squeezenet_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_squeezenet_int8.o: /home/wuxy/QVU/csrc/main_squeezenet_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_fp16.o: /home/wuxy/QVU/csrc/main_vgg_fp16.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_int4.o: /home/wuxy/QVU/csrc/main_vgg_int4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main_vgg_int8.o: /home/wuxy/QVU/csrc/main_vgg_int8.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VQvuTop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
