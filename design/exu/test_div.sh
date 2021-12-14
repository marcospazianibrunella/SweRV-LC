#!/bin/bash

#verilator -cc ../lib/beh_lib.sv ../include/swerv_types.sv exu_div_ctl.sv -I../../snapshots/default/ -I../lib/ -I../include/ --top-module exu_div_ctl
printf "***** Building Testbench *****\n\n"
verilator --trace -cc ../lib/beh_lib.sv ../include/swerv_types.sv exu_div_ctl.sv -I../../snapshots/default/ -I../lib/ -I../include/ --top-module exu_div_ctl --exe tb_div64.cpp
make -C obj_dir/ -f Vexu_div_ctl.mk
printf "\n***** Running Testbench *****\n"
./obj_dir/Vexu_div_ctl
printf "\n***** Launching Waveform *****\n"
gtkwave waveform.vcd
