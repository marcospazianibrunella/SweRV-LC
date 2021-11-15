`timescale 1ns / 1ps

module tb_ifu
  import swerv_types::*;
;
  /* Fetch Signals */
  logic                     free_clk;
  logic                     active_clk;
  logic                     clk = 0;
  logic                     clk_override = 0;
  logic                     rst_l = 0;

  logic                     dec_ib3_valid_d = 0;
  logic                     dec_ib2_valid_d = 0;
  logic                     dec_ib0_valid_eff_d = 0;
  logic                     dec_ib1_valid_eff_d = 0;
  logic                     exu_i0_br_ret_e4 = 0;
  logic                     exu_i1_br_ret_e4 = 0;
  logic                     exu_i0_br_call_e4 = 0;
  logic                     exu_i1_br_call_e4 = 0;
  logic                     exu_flush_final = 0;
  logic                     dec_tlu_flush_err_wb = 0;
  logic                     dec_tlu_flush_noredir_wb = 0;
  logic                     dec_tlu_dbg_halted = 0;
  logic                     dec_tlu_pmu_fw_halted = 0;
  logic             [ 31:1] exu_flush_path_final = 0;
  logic                     exu_flush_upper_e2 = 0;
  logic             [ 31:0] dec_tlu_mrac_ff = 0;
  logic                     dec_tlu_fence_i_wb = 0;
  logic                     dec_tlu_flush_leak_one_wb = 0;

  logic                     dec_tlu_bpred_disable = 0;
  logic                     dec_tlu_core_ecc_disable = 0;

  logic                     ifu_axi_awvalid = 0;
  logic                     ifu_axi_awready = 0;
  logic             [  2:0] ifu_axi_awid = 0;
  logic             [ 31:0] ifu_axi_awaddr = 0;
  logic             [  3:0] ifu_axi_awregion = 0;
  logic             [  7:0] ifu_axi_awlen = 0;
  logic             [  2:0] ifu_axi_awsize = 0;
  logic             [  1:0] ifu_axi_awburst = 0;
  logic                     ifu_axi_awlock = 0;
  logic             [  3:0] ifu_axi_awcache = 0;
  logic             [  2:0] ifu_axi_awprot = 0;
  logic             [  3:0] ifu_axi_awqos = 0;
  logic                     ifu_axi_wvalid = 0;
  logic                     ifu_axi_wready = 0;
  logic             [ 63:0] ifu_axi_wdata = 0;
  logic             [  7:0] ifu_axi_wstrb = 0;
  logic                     ifu_axi_wlast = 0;
  logic                     ifu_axi_bvalid = 0;
  logic                     ifu_axi_bready = 0;
  logic             [  1:0] ifu_axi_bresp = 0;
  logic             [  2:0] ifu_axi_bid = 0;
  logic                     ifu_axi_arvalid;
  logic                     ifu_axi_arready = 0;
  logic             [  2:0] ifu_axi_arid = 0;
  logic             [ 31:0] ifu_axi_araddr = 0;
  logic             [  3:0] ifu_axi_arregion = 0;
  logic             [  7:0] ifu_axi_arlen = 0;
  logic             [  2:0] ifu_axi_arsize = 0;
  logic             [  1:0] ifu_axi_arburst = 0;
  logic                     ifu_axi_arlock = 0;
  logic             [  3:0] ifu_axi_arcache = 0;
  logic             [  2:0] ifu_axi_arprot = 0;
  logic             [  3:0] ifu_axi_arqos = 0;
  logic                     ifu_axi_rvalid = 0;
  logic                     ifu_axi_rready = 0;
  logic             [  2:0] ifu_axi_rid = 0;
  logic             [ 63:0] ifu_axi_rdata = 0;
  logic             [  1:0] ifu_axi_rresp = 0;
  logic                     ifu_axi_rlast = 0;
  logic                     ifu_bus_clk_en = 0;

  logic                     dma_iccm_req = 0;
  logic                     dma_iccm_stall_any = 0;
  logic             [ 31:0] dma_mem_addr = 0;
  logic             [  2:0] dma_mem_sz = 0;
  logic                     dma_mem_write = 0;
  logic             [ 63:0] dma_mem_wdata = 0;
  logic                     iccm_dma_ecc_error = 0;
  logic                     iccm_dma_rvalid = 0;
  logic             [ 63:0] iccm_dma_rdata = 0;
  logic                     iccm_ready = 0;
  logic             [  1:0] ifu_pmu_instr_aligned = 0;
  logic                     ifu_pmu_align_stall = 0;
  logic                     ifu_pmu_fetch_stall = 0;
  logic             [ 31:2] ic_rw_addr = 0;
  logic             [  3:0] ic_wr_en = 0;
  logic                     ic_rd_en = 0;
  logic             [ 67:0] ic_wr_data = 0;
  logic             [135:0] ic_rd_data = 0;
  logic             [ 20:0] ictag_debug_rd_data = 0;
  logic             [ 33:0] ic_debug_wr_data = 0;
  logic             [ 33:0] ifu_ic_debug_rd_data = 0;
  logic             [127:0] ic_premux_data = 0;
  logic                     ic_sel_premux_data = 0;
  logic             [ 15:2] ic_debug_addr = 0;
  logic                     ic_debug_rd_en = 0;
  logic                     ic_debug_wr_en = 0;
  logic                     ic_debug_tag_array = 0;
  logic             [  3:0] ic_debug_way = 0;
  logic             [  3:0] ic_tag_valid = 0;
  logic             [  3:0] ic_rd_hit = 0;
  logic                     ic_tag_perr = 0;
  logic                     ifu_pmu_ic_miss = 0;
  logic                     ifu_pmu_ic_hit = 0;
  logic                     ifu_pmu_bus_error = 0;
  logic                     ifu_pmu_bus_busy = 0;
  logic                     ifu_pmu_bus_trxn = 0;
  logic                     ifu_i0_valid = 0;
  logic                     ifu_i1_valid = 0;
  logic                     ifu_i0_icaf = 0;
  logic                     ifu_i1_icaf = 0;
  logic                     ifu_i0_icaf_second = 0;
  logic                     ifu_i1_icaf_second = 0;
  logic                     ifu_i0_perr = 0;
  logic                     ifu_i1_perr = 0;
  logic                     ifu_i0_sbecc = 0;
  logic                     ifu_i1_sbecc = 0;
  logic                     ifu_i0_dbecc = 0;
  logic                     ifu_i1_dbecc = 0;
  logic                     iccm_dma_sb_error = 0;
  logic             [ 31:0] ifu_i0_instr = 0;
  logic             [ 31:0] ifu_i1_instr = 0;
  logic             [ 31:1] ifu_i0_pc = 0;
  logic             [ 31:1] ifu_i1_pc = 0;
  logic                     ifu_i0_pc4 = 0;
  logic                     ifu_i1_pc4 = 0;
  logic             [ 15:0] ifu_illegal_inst = 0;
  logic                     ifu_miss_state_idle = 0;

  br_pkt_t                  i0_brp = 0;
  br_pkt_t                  i1_brp = 0;
  predict_pkt_t             exu_mp_pkt = 0;

  logic             [  4:0] exu_mp_eghr = 0;

  br_tlu_pkt_t              dec_tlu_br0_wb_pkt = 0;
  br_tlu_pkt_t              dec_tlu_br1_wb_pkt = 0;
  logic                     dec_tlu_flush_lower_wb = 0;

  rets_pkt_t                exu_rets_e1_pkt = 0;
  rets_pkt_t                exu_rets_e4_pkt = 0;

  logic             [ 15:0] ifu_i0_cinst = 0;
  logic             [ 15:0] ifu_i1_cinst = 0;

  cache_debug_pkt_t         dec_tlu_ic_diag_pkt = 0;
  logic                     ifu_ic_debug_rd_data_valid = 0;

  logic                     scan_mode = 0;

  /* ICCM */
  logic             [ 63:0] iccm                           [31:0];

  logic             [135:0] ic_premux_data_ext;

  /* Decode Stage */

  ifu IF_STAGE_i (.*);
  
  /* Clock Generation */
  always #5 clk = ~clk;
  assign free_clk = clk;
  assign active_clk = clk;

  assign ic_premux_data_ext = {
    2'b0,
    ic_premux_data[127:96],
    2'b0,
    ic_premux_data[95:64],
    2'b0,
    ic_premux_data[63:32],
    2'b0,
    ic_premux_data[31:0]
  };


  initial begin

    /* ICCM Init */
    iccm[0] = {32'hb8201073, 32'hb0201073};
    iccm[1] = {32'h30509073, 32'hee0000b7};

    ifu_axi_arready = 1;
    ifu_axi_rlast = 1;
    ifu_bus_clk_en = 1;
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    /* Deaasert Reset */
    rst_l = 1;
    @(posedge clk);
    exu_flush_final = 1;
    dec_tlu_flush_lower_wb = 1;
    @(posedge clk);
    exu_flush_final = 0;
    dec_tlu_flush_lower_wb = 0;

    /* Simulation Trailer */
    for (integer i = 0; i < 20; i++) @(posedge clk);
    $finish;
  end

  /* Manage Read on I-Cache Miss */
  always @(posedge clk) begin

    ifu_axi_rvalid <= 0;
    ifu_axi_rid <= ifu_axi_arid;
    if (ifu_axi_arvalid) begin
      ifu_axi_rvalid <= 1;
      ifu_axi_rdata  <= iccm[ifu_axi_araddr[8:3]];
    end

    ic_rd_data <= ({136{ic_rd_hit[0] | ic_sel_premux_data}} & ic_premux_data_ext) |
                  ({136{ic_rd_hit[1] | ic_sel_premux_data}} & ic_premux_data_ext) |
                  ({136{ic_rd_hit[2] | ic_sel_premux_data}} & ic_premux_data_ext) |
                  ({136{ic_rd_hit[3] | ic_sel_premux_data}} & ic_premux_data_ext);

  end

endmodule
