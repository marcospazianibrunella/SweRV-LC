module tb_core
  import swerv_types::*;
;
  `include "global.svh"

  /* input */ logic clk = 0;
  /* input */ logic rst_l = 0;
  /* input */ logic dbg_rst_l = 0;
  /* input */ logic [31:1] rst_vec = 0;
  /* input */ logic nmi_int = 0;
  /* input */ logic [31:1] nmi_vec = 0;
  /* output */ logic core_rst_l;  // This is "rst_l | dbg_rst_l"

  /* output */ logic [63:0] trace_rv_i_insn_ip;
  /* output */ logic [63:0] trace_rv_i_address_ip;
  /* output */ logic [2:0] trace_rv_i_valid_ip;
  /* output */ logic [2:0] trace_rv_i_exception_ip;
  /* output */ logic [4:0] trace_rv_i_ecause_ip;
  /* output */ logic [2:0] trace_rv_i_interrupt_ip;
  /* output */ logic [31:0] trace_rv_i_tval_ip;


  /* output */ logic lsu_freeze_dc3;
  /* output */ logic dccm_clk_override;
  /* output */ logic icm_clk_override;
  /* output */ logic dec_tlu_core_ecc_disable;

  // external halt/run interface
  /* input */ logic i_cpu_halt_req = 0;  // Asynchronous Halt request to CPU
  /* input */ logic i_cpu_run_req = 0;  // Asynchronous Restart request to CPU
  /* output */ logic o_cpu_halt_ack;  // Core Acknowledge to Halt request
  /* output */ logic o_cpu_halt_status;  // 1'b1 indicates processor is halted
  /* output */ logic o_cpu_run_ack;  // Core Acknowledge to run request
  /* output */ logic o_debug_mode_status; // Core to the PMU that core is in debug mode. When core is in debug mode; the PMU should refrain from sendng a halt or run request

  // external MPC halt/run interface
  /* input */ logic mpc_debug_halt_req = 0;  // Async halt request
  /* input */ logic mpc_debug_run_req = 0;  // Async run request
  /* input */ logic mpc_reset_run_req = 0;  // Run/halt after reset
  /* output */ logic mpc_debug_halt_ack;  // Halt ack
  /* output */ logic mpc_debug_run_ack;  // Run ack
  /* output */ logic debug_brkpt_status;  // debug breakpoint

  /* output */ logic [1:0] dec_tlu_perfcnt0;  // toggles when perf counter 0 has an event inc
  /* output */ logic [1:0] dec_tlu_perfcnt1;
  /* output */ logic [1:0] dec_tlu_perfcnt2;
  /* output */ logic [1:0] dec_tlu_perfcnt3;

  // DCCM ports
  /* output */ logic dccm_wren;
  /* output */ logic dccm_rden;
  /* output */ logic [`RV_DCCM_BITS-1:0] dccm_wr_addr;
  /* output */ logic [`RV_DCCM_BITS-1:0] dccm_rd_addr_lo;
  /* output */ logic [`RV_DCCM_BITS-1:0] dccm_rd_addr_hi;
  /* output */ logic [DCCM_FDATA_WIDTH-1:0] dccm_wr_data;

  /* input */ logic [`RV_DCCM_FDATA_WIDTH-1:0] dccm_rd_data_lo = 0;
  /* input */ logic [`RV_DCCM_FDATA_WIDTH-1:0] dccm_rd_data_hi = 0;

  // ICCM ports
  /* output */ logic [`RV_ICCM_BITS-1:2] iccm_rw_addr;
  /* output */ logic iccm_wren;
  /* output */ logic iccm_rden;
  /* output */ logic [2:0] iccm_wr_size;
  /* output */ logic [77:0] iccm_wr_data;

  /* input */ logic [155:0] iccm_rd_data = 0;

  // ICache ; ITAG  ports
  /* output */ logic [31:2] ic_rw_addr;
  /* output */ logic [3:0] ic_tag_valid;
  /* output */ logic [3:0] ic_wr_en;
  /* output */ logic ic_rd_en;

  /* output */ logic [67:0] ic_wr_data;  // Data to fill to the Icache. With Parity
  /* input */  logic [135:0]              ic_rd_data  = 0;        // Data read from Icache. 2x64bits + parity bits. F2 stage. With Parity
  /* input */ logic [20:0] ictag_debug_rd_data = 0;  // Debug icache tag.
  /* output */ logic [33:0] ic_debug_wr_data;  // Debug wr cache.

  /* output */ logic [127:0] ic_premux_data;     // Premux data to be muxed with each way of the Icache.
  /* output */ logic ic_sel_premux_data;  // Select premux data


  /* output */ logic [15:2] ic_debug_addr;  // Read/Write addresss to the Icache.
  /* output */ logic ic_debug_rd_en;  // Icache debug rd
  /* output */ logic ic_debug_wr_en;  // Icache debug wr
  /* output */ logic ic_debug_tag_array;  // Debug tag array
  /* output */ logic [3:0] ic_debug_way;  // Debug way. Rd or Wr.

  /* input */ logic [3:0] ic_rd_hit = 0;
  /* input */ logic ic_tag_perr = 0;  // Icache Tag parity error

  //-------------------------- LSU AXI signals--------------------------
  // AXI Write Channels
  /* output */ logic lsu_axi_awvalid;
  /* input */ logic lsu_axi_awready = 0;
  /* output */ logic [`RV_LSU_BUS_TAG-1:0] lsu_axi_awid;
  /* output */ logic [31:0] lsu_axi_awaddr;
  /* output */ logic [3:0] lsu_axi_awregion;
  /* output */ logic [7:0] lsu_axi_awlen;
  /* output */ logic [2:0] lsu_axi_awsize;
  /* output */ logic [1:0] lsu_axi_awburst;
  /* output */ logic lsu_axi_awlock;
  /* output */ logic [3:0] lsu_axi_awcache;
  /* output */ logic [2:0] lsu_axi_awprot;
  /* output */ logic [3:0] lsu_axi_awqos;

  /* output */ logic lsu_axi_wvalid;
  /* input */ logic lsu_axi_wready = 0;
  /* output */ logic [127:0] lsu_axi_wdata;
  /* output */ logic [7:0] lsu_axi_wstrb;
  /* output */ logic lsu_axi_wlast;

  /* input */ logic lsu_axi_bvalid = 0;
  /* output */ logic lsu_axi_bready;
  /* input */ logic [1:0] lsu_axi_bresp = 0;
  /* input */ logic [`RV_LSU_BUS_TAG-1:0] lsu_axi_bid = 0;

  // AXI Read Channels
  /* output */ logic lsu_axi_arvalid;
  /* input */ logic lsu_axi_arready = 0;
  /* output */ logic [`RV_LSU_BUS_TAG-1:0] lsu_axi_arid;
  /* output */ logic [31:0] lsu_axi_araddr;
  /* output */ logic [3:0] lsu_axi_arregion;
  /* output */ logic [7:0] lsu_axi_arlen;
  /* output */ logic [2:0] lsu_axi_arsize;
  /* output */ logic [1:0] lsu_axi_arburst;
  /* output */ logic lsu_axi_arlock;
  /* output */ logic [3:0] lsu_axi_arcache;
  /* output */ logic [2:0] lsu_axi_arprot;
  /* output */ logic [3:0] lsu_axi_arqos;

  /* input */ logic lsu_axi_rvalid = 0;
  /* output */ logic lsu_axi_rready;
  /* input */ logic [`RV_LSU_BUS_TAG-1:0] lsu_axi_rid = 0;
  /* input */ logic [127:0] lsu_axi_rdata = 0;
  /* input */ logic [1:0] lsu_axi_rresp = 0;
  /* input */ logic lsu_axi_rlast = 0;

  //-------------------------- IFU AXI signals--------------------------
  // AXI Write Channels
  /* output */ logic ifu_axi_awvalid;
  /* input */ logic ifu_axi_awready = 0;
  /* output */ logic [`RV_IFU_BUS_TAG-1:0] ifu_axi_awid;
  /* output */ logic [31:0] ifu_axi_awaddr;
  /* output */ logic [3:0] ifu_axi_awregion;
  /* output */ logic [7:0] ifu_axi_awlen;
  /* output */ logic [2:0] ifu_axi_awsize;
  /* output */ logic [1:0] ifu_axi_awburst;
  /* output */ logic ifu_axi_awlock;
  /* output */ logic [3:0] ifu_axi_awcache;
  /* output */ logic [2:0] ifu_axi_awprot;
  /* output */ logic [3:0] ifu_axi_awqos;

  /* output */ logic ifu_axi_wvalid;
  /* input */ logic ifu_axi_wready = 0;
  /* output */ logic [63:0] ifu_axi_wdata;
  /* output */ logic [7:0] ifu_axi_wstrb;
  /* output */ logic ifu_axi_wlast;

  /* input */ logic ifu_axi_bvalid = 0;
  /* output */ logic ifu_axi_bready;
  /* input */ logic [1:0] ifu_axi_bresp = 0;
  /* input */ logic [`RV_IFU_BUS_TAG-1:0] ifu_axi_bid = 0;

  // AXI Read Channels
  /* output */ logic ifu_axi_arvalid;
  /* input */ logic ifu_axi_arready = 0;
  /* output */ logic [`RV_IFU_BUS_TAG-1:0] ifu_axi_arid;
  /* output */ logic [31:0] ifu_axi_araddr;
  /* output */ logic [3:0] ifu_axi_arregion;
  /* output */ logic [7:0] ifu_axi_arlen;
  /* output */ logic [2:0] ifu_axi_arsize;
  /* output */ logic [1:0] ifu_axi_arburst;
  /* output */ logic ifu_axi_arlock;
  /* output */ logic [3:0] ifu_axi_arcache;
  /* output */ logic [2:0] ifu_axi_arprot;
  /* output */ logic [3:0] ifu_axi_arqos;

  /* input */ logic ifu_axi_rvalid = 0;
  /* output */ logic ifu_axi_rready;
  /* input */ logic [`RV_IFU_BUS_TAG-1:0] ifu_axi_rid = 0;
  /* input */ logic [63:0] ifu_axi_rdata = 0;
  /* input */ logic [1:0] ifu_axi_rresp = 0;
  /* input */ logic ifu_axi_rlast = 0;

  //-------------------------- SB AXI signals--------------------------
  // AXI Write Channels
  /* output */ logic sb_axi_awvalid;
  /* input */ logic sb_axi_awready = 0;
  /* output */ logic [`RV_SB_BUS_TAG-1:0] sb_axi_awid;
  /* output */ logic [31:0] sb_axi_awaddr;
  /* output */ logic [3:0] sb_axi_awregion;
  /* output */ logic [7:0] sb_axi_awlen;
  /* output */ logic [2:0] sb_axi_awsize;
  /* output */ logic [1:0] sb_axi_awburst;
  /* output */ logic sb_axi_awlock;
  /* output */ logic [3:0] sb_axi_awcache;
  /* output */ logic [2:0] sb_axi_awprot;
  /* output */ logic [3:0] sb_axi_awqos;

  /* output */ logic sb_axi_wvalid;
  /* input */ logic sb_axi_wready = 0;
  /* output */ logic [63:0] sb_axi_wdata;
  /* output */ logic [7:0] sb_axi_wstrb;
  /* output */ logic sb_axi_wlast;

  /* input */ logic sb_axi_bvalid = 0;
  /* output */ logic sb_axi_bready;
  /* input */ logic [1:0] sb_axi_bresp = 0;
  /* input */ logic [`RV_SB_BUS_TAG-1:0] sb_axi_bid = 0;

  // AXI Read Channels
  /* output */ logic sb_axi_arvalid;
  /* input */ logic sb_axi_arready = 0;
  /* output */ logic [`RV_SB_BUS_TAG-1:0] sb_axi_arid;
  /* output */ logic [31:0] sb_axi_araddr;
  /* output */ logic [3:0] sb_axi_arregion;
  /* output */ logic [7:0] sb_axi_arlen;
  /* output */ logic [2:0] sb_axi_arsize;
  /* output */ logic [1:0] sb_axi_arburst;
  /* output */ logic sb_axi_arlock;
  /* output */ logic [3:0] sb_axi_arcache;
  /* output */ logic [2:0] sb_axi_arprot;
  /* output */ logic [3:0] sb_axi_arqos;

  /* input */ logic sb_axi_rvalid = 0;
  /* output */ logic sb_axi_rready;
  /* input */ logic [`RV_SB_BUS_TAG-1:0] sb_axi_rid = 0;
  /* input */ logic [63:0] sb_axi_rdata = 0;
  /* input */ logic [1:0] sb_axi_rresp = 0;
  /* input */ logic sb_axi_rlast = 0;

  //-------------------------- DMA AXI signals--------------------------
  // AXI Write Channels
  /* input */ logic dma_axi_awvalid = 0;
  /* output */ logic dma_axi_awready;
  /* input */ logic [`RV_DMA_BUS_TAG-1:0] dma_axi_awid = 0;
  /* input */ logic [31:0] dma_axi_awaddr = 0;
  /* input */ logic [2:0] dma_axi_awsize = 0;
  /* input */ logic [2:0] dma_axi_awprot = 0;
  /* input */ logic [7:0] dma_axi_awlen = 0;
  /* input */ logic [1:0] dma_axi_awburst = 0;


  /* input */ logic dma_axi_wvalid = 0;
  /* output */ logic dma_axi_wready;
  /* input */ logic [63:0] dma_axi_wdata = 0;
  /* input */ logic [7:0] dma_axi_wstrb = 0;
  /* input */ logic dma_axi_wlast = 0;

  /* output */ logic dma_axi_bvalid;
  /* input */ logic dma_axi_bready = 0;
  /* output */ logic [1:0] dma_axi_bresp;
  /* output */ logic [`RV_DMA_BUS_TAG-1:0] dma_axi_bid;

  // AXI Read Channels
  /* input */ logic dma_axi_arvalid = 0;
  /* output */ logic dma_axi_arready;
  /* input */ logic [`RV_DMA_BUS_TAG-1:0] dma_axi_arid = 0;
  /* input */ logic [31:0] dma_axi_araddr = 0;
  /* input */ logic [2:0] dma_axi_arsize = 0;
  /* input */ logic [2:0] dma_axi_arprot = 0;
  /* input */ logic [7:0] dma_axi_arlen = 0;
  /* input */ logic [1:0] dma_axi_arburst = 0;

  /* output */ logic dma_axi_rvalid;
  /* input */ logic dma_axi_rready = 0;
  /* output */ logic [`RV_DMA_BUS_TAG-1:0] dma_axi_rid;
  /* output */ logic [63:0] dma_axi_rdata;
  /* output */ logic [1:0] dma_axi_rresp;
  /* output */ logic dma_axi_rlast;

  /* input */ logic lsu_bus_clk_en = 0;
  /* input */ logic ifu_bus_clk_en = 0;
  /* input */ logic dbg_bus_clk_en = 0;
  /* input */ logic dma_bus_clk_en = 0;

  //Debug module
  /* input */ logic dmi_reg_en = 0;
  /* input */ logic [6:0] dmi_reg_addr = 0;
  /* input */ logic dmi_reg_wr_en = 0;
  /* input */ logic [31:0] dmi_reg_wdata = 0;
  /* output */ logic [31:0] dmi_reg_rdata;
  /* input */ logic dmi_hard_reset = 0;

  /* input */ logic [`RV_PIC_TOTAL_INT:1] extintsrc_req = 0;
  /* input */ logic timer_int = 0;
  /* input */ logic scan_mode = 0;

  swerv DUT_i (.*);

  always #5 clk = ~clk;


endmodule
