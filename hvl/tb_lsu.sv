module tb_lsu
  import swerv_types::*;
;

 `include "global.svh"
  /* input */ logic [XLEN-1:0] i0_result_e4_eff = 0;  // I0 e4 result for e4 -> dc3 store forwarding
  /* input */ logic [XLEN-1:0] i1_result_e4_eff = 0;  // I1 e4 result for e4 -> dc3 store forwarding
  /* input */ logic [XLEN-1:0] i0_result_e2 = 0;  // I0 e2 result for e2 -> dc2 store forwarding

  /* input */ logic flush_final_e3 = 0;  // I0/I1 flush in e3
  /* input */ logic i0_flush_final_e3 = 0;  // I0 flush in e3
  /* input */ logic                             dec_tlu_flush_lower_wb = 0;    // I0/I1 writeback flush. This is used to flush the old packets only
  /* input */ logic                             dec_tlu_i0_kill_writeb_wb = 0; // I0 is flushed = 0; don't writeback any results to arch state
  /* input */ logic                             dec_tlu_i1_kill_writeb_wb = 0; // I1 is flushed = 0; don't writeback any results to arch state
  /* input */ logic dec_tlu_cancel_e4 = 0;  // cancel the bus load in dc4 and reset the freeze

  // chicken signals
  /* input */ logic dec_tlu_dccm_nonblock_dma_disable = 0;  // disable dma nonblock
  /* input */ logic dec_tlu_wb_coalescing_disable = 0;  // disable the write buffer coalesce
  /* input */ logic dec_tlu_ld_miss_byp_wb_disable = 0;  // disable the miss bypass in the write buffer
  /* input */ logic                             dec_tlu_sideeffect_posted_disable = 0;  // disable posted writes to sideeffect addr to the bus
  /* input */ logic dec_tlu_core_ecc_disable = 0;  // disable the generation of the ecc

  /* input */ logic [XLEN-1:0] exu_lsu_rs1_d = 0;  // address rs operand
  /* input */ logic [XLEN-1:0] exu_lsu_rs2_d = 0;  // store data
  /* input */ logic [11:0] dec_lsu_offset_d = 0;  // address offset operand

  /* input */ lsu_pkt_t lsu_p = 0;  // lsu control packet
  /* input */ logic dec_i0_lsu_decode_d = 0;  // lsu is in i0
  /* input */ logic [31:0] dec_tlu_mrac_ff = 0;  // CSR for memory region control

  /* output */ logic [XLEN-1:0] lsu_result_dc3;  // lsu load data
  /* output */ logic lsu_single_ecc_error_incr;  // Increment the counter for Single ECC error
  /* output */ logic [XLEN-1:0] lsu_result_corr_dc4;  // This is the ECC corrected data going to RF
  /* output */ logic lsu_freeze_dc3;  // lsu freeze due to load to external
  /* output */ logic lsu_load_stall_any;  // This is for blocking loads in the decode
  /* output */ logic lsu_store_stall_any;  // This is for blocking stores in the decode
  /* output */ logic lsu_load_ecc_stbuf_full_dc3;  // Load with ecc error can't allocate to stbuf
  /* output */ logic lsu_idle_any;  // lsu buffers are empty and no instruction in the pipeline
  /* output */ logic lsu_halt_idle_any;  // This is used to enter halt mode. Exclude DMA

  /* output */ lsu_error_pkt_t lsu_error_pkt_dc3;  // lsu exception packet
  /* output */ logic                            lsu_freeze_external_ints_dc3;  // freeze due to sideeffects loads need to suppress external interrupt
  /* output */ logic lsu_imprecise_error_load_any;  // bus load imprecise error
  /* output */ logic lsu_imprecise_error_store_any;  // bus store imprecise error
  /* output */ logic [31:0] lsu_imprecise_error_addr_any;  // bus store imprecise error address

  // Non-blocking loads
  /* input */ logic dec_nonblock_load_freeze_dc2 = 0;  //
  /* output */ logic lsu_nonblock_load_valid_dc3;  // there is an external load -> put in the cam
  /* output */ logic [`RV_LSU_NUM_NBLOAD_WIDTH-1:0]  lsu_nonblock_load_tag_dc3;      // the tag of the external non block load
  /* output */ logic                                 lsu_nonblock_load_inv_dc5;      // invalidate signal for the cam entry for non block loads
  /* output */ logic [`RV_LSU_NUM_NBLOAD_WIDTH-1:0]  lsu_nonblock_load_inv_tag_dc5;  // tag of the enrty which needs to be invalidated
  /* output */ logic                                 lsu_nonblock_load_data_valid;   // the non block is valid - sending information back to the cam
  /* output */ logic lsu_nonblock_load_data_error;  // non block load has an error
  /* output */ logic [`RV_LSU_NUM_NBLOAD_WIDTH-1:0]  lsu_nonblock_load_data_tag;     // the tag of the non block load sending the data/error
  /* output */ logic [XLEN-1:0] lsu_nonblock_load_data;  // Data of the non block load

  /* output */ logic lsu_pmu_misaligned_dc3;  // PMU : misaligned
  /* output */ logic lsu_pmu_bus_trxn;  // PMU : bus transaction
  /* output */ logic lsu_pmu_bus_misaligned;  // PMU : misaligned access going to the bus
  /* output */ logic lsu_pmu_bus_error;  // PMU : bus sending error back
  /* output */ logic lsu_pmu_bus_busy;  // PMU : bus is not ready

  // Trigger signals
  /* input */ trigger_pkt_t [3:0] trigger_pkt_any = 0;  // Trigger info from the decode
  /* output */ logic [3:0] lsu_trigger_match_dc3;  // lsu trigger hit (one bit per trigger)

  // DCCM ports
  /* output */ logic dccm_wren;  // DCCM write enable
  /* output */ logic dccm_rden;  // DCCM read enable
  /* output */ logic [`RV_DCCM_BITS-1:0]        dccm_wr_addr;    // DCCM write address (write can happen to one bank only)
  /* output */ logic [`RV_DCCM_BITS-1:0] dccm_rd_addr_lo;  // DCCM read address low bank
  /* output */ logic [`RV_DCCM_BITS-1:0]        dccm_rd_addr_hi; // DCCM read address hi bank (hi and low same if aligned read)
  /* output */ logic [`RV_DCCM_FDATA_WIDTH-1:0] dccm_wr_data;    // DCCM write data (this is always aligned)

  /* input */ logic [`RV_DCCM_FDATA_WIDTH-1:0] dccm_rd_data_lo;  // DCCM read data low bank
  /* input */ logic [`RV_DCCM_FDATA_WIDTH-1:0] dccm_rd_data_hi;  // DCCM read data hi bank

  // PIC ports
  /* output */ logic picm_wren;  // PIC memory write enable
  /* output */ logic picm_rden;  // PIC memory read enable
  /* output */ logic                            picm_mken;    // Need to read the mask for stores to determine which bits to write/forward
  /* output */ logic [31:0] picm_addr;  // PIC memory address
  /* output */ logic [31:0] picm_wr_data;  // PIC memory write data
  /* input */ logic [31:0] picm_rd_data = 0;  // PIC memory read/mask data

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

  /* input */ logic lsu_bus_clk_en = 0;  // external drives a clock_en to control bus ratio

  // DMA slave
  /* input */ logic dma_dccm_req = 0;  // DMA read/write to dccm
  /* input */ logic [31:0] dma_mem_addr = 0;  // DMA address
  /* input */ logic [2:0] dma_mem_sz = 0;  // DMA access size
  /* input */ logic dma_mem_write = 0;  // DMA access is a write
  /* input */ logic [DCCM_DATA_WIDTH*2-1:0] dma_mem_wdata = 0;  // DMA write data

  /* output */ logic dccm_dma_rvalid;  // lsu data valid for DMA dccm read
  /* output */ logic dccm_dma_ecc_error;  // DMA load had ecc error
  /* output */ logic [DCCM_DATA_WIDTH*2 -1:0] dccm_dma_rdata;  // lsu data for DMA dccm read
  /* output */ logic dccm_ready;  // lsu ready for DMA access

  /* input */ logic clk_override = 0;  // Disable clock gating
  /* input */ logic scan_mode = 0;  // scan
  /* input */ logic clk = 0;
  /* input */ logic free_clk;
  /* input */ logic rst_l = 0;

  /* Fake DCCM Signals */
  logic [7:0] ecc_out_lo;
  logic [7:0] ecc_out_hi;

  logic [63:0] dccm_rd_data_lo_i;
  logic [63:0] dccm_rd_data_hi_i;

  logic [31:0][63:0] dccm;


  lsu DUT_i (.*);

  rvecc_encode ECC_ENDODER_lo_i (
      .din(dccm_rd_data_lo_i),
      .ecc_out(ecc_out_lo)
  );

  rvecc_encode ECC_ENDODER_lhi_i (
      .din(dccm_rd_data_hi_i),
      .ecc_out(ecc_out_hi)
  );

  /* Clock Generation */
  always #5 clk = ~clk;
  assign free_clk = clk;

  initial begin

    /* Init DCCM */
    for (integer i = 0; i < 32; i++) begin
      dccm[i] = $random;
    end

    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    /* Deaasert Reset */
    rst_l = 1;
    @(posedge clk);
    lsu_axi_awready = 1;
    lsu_axi_wready  = 1;
    lsu_axi_arready = 1;
    @(posedge clk);
    exu_lsu_rs1_d = 32'hf0040001;
    lsu_p.load = 1;
    lsu_p.word = 1;
    lsu_p.valid = 1;
    @(posedge clk);
    exu_lsu_rs1_d = 0;
    lsu_p.load = 0;
    lsu_p.word = 0;
    lsu_p.valid = 0;

    /* Simulation Trailer */
    for (integer i = 0; i < 20; i++) @(posedge clk);
    $finish;
  end

  /* DCCM Stub */
  always @(posedge clk) begin

    dccm_rd_data_lo_i = 0;
    dccm_rd_data_hi_i = 0;

    if (dccm_rden) begin
      dccm_rd_data_lo_i = dccm[dccm_rd_addr_lo[6:2]];
      dccm_rd_data_hi_i = dccm[dccm_rd_addr_hi[6:2]];
    end
  end

  assign dccm_rd_data_lo = {ecc_out_lo, dccm_rd_data_lo_i};
  assign dccm_rd_data_hi = {ecc_out_hi, dccm_rd_data_hi_i};


endmodule
