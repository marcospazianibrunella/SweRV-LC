#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vfpnew_top.h"
#include "Vfpnew_top___024unit.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;

int main(int argc, char **argv, char **env)
{
    Vfpnew_top *dut = new Vfpnew_top;

    int print_on_next_cycle = 0;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    dut->op_i = 0xA;
    dut->operands_i[0] = 0x3F800000 ;
    dut->operands_i[1] = 0x3F800000 ;
    dut->operands_i[2] = 0x3F800000 ;

    while (sim_time < MAX_SIM_TIME)
    {
        dut->clk_i ^= 1;
        if (sim_time >= 10) {
            dut->rst_ni = 1;
            dut->out_ready_i = 1;
        }

        if (sim_time >= 14 && sim_time <= 21) {
            dut->flush_i = 1;
        }
        else
            dut->flush_i = 0;
        
        if (sim_time >= 28) {
            dut->in_valid_i = 1;
        }

        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
