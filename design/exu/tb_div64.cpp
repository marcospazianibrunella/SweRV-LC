#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vexu_div_ctl.h"
#include "Vexu_div_ctl___024unit.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;

int main(int argc, char **argv, char **env)
{
    Vexu_div_ctl *dut = new Vexu_div_ctl;

    int print_on_next_cycle = 0;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    dut->flush_lower = 1;

    while (sim_time < MAX_SIM_TIME)
    {
        dut->clk ^= 1;
        dut->active_clk = dut->clk;

        dut->dividend = 2000;
        dut->divisor = 3;

        if (sim_time == 6)
        {
            dut->flush_lower = 0;
            dut->rst_l = 1;
        }

        if (sim_time >= 8 && sim_time < 10)
        {
            dut->dp = 1 << 2; /* Valid */
        }
        else
        {
            dut->dp = 0;
        }

        dut->eval();

        m_trace->dump(sim_time);
        /* Log to console */
        if (print_on_next_cycle && dut->clk) {
            printf("Div Result --> 0x%lX", dut->out);
            print_on_next_cycle = 0;
        }
        if (dut->finish && dut->clk)
            print_on_next_cycle = 1;


        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
