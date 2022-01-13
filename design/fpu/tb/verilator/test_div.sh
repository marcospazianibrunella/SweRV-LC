#!/bin/bash

rm ./waveform.vcd
rm -rf ./obj_dir
printf "***** Building Testbench *****\n\n"
verilator --trace -cc ../../src/fpu_div_sqrt_mvp/hdl/defs_div_sqrt_mvp.sv ../../src/common_cells/src/cf_math_pkg.sv ../../src/fpnew_pkg.sv ../../src/fpnew_top.sv  -I../../src/fpu_div_sqrt_mvp/hdl/ -I../../src -I../../src/common_cells/src -I../../src/common_cells/include/common_cells/ --top-module fpnew_top --exe ./tb_fpnew.cpp
make -C obj_dir/ -f Vfpnew_top.mk
printf "\n***** Running Testbench *****\n"
./obj_dir/Vfpnew_top
printf "\n***** Launching Waveform *****\n"
gtkwave waveform.vcd
