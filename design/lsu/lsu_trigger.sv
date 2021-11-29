// SPDX-License-Identifier: Apache-2.0
// Copyright 2019 Western Digital Corporation or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//********************************************************************************
// $Id$
//
//
// Owner:
// Function: LSU Trigger logic
// Comments:
//
//********************************************************************************
module lsu_trigger
  import swerv_types::*;
(
    input logic clk,              // clock
    input logic lsu_free_c2_clk,  // clock
    input logic rst_l,            // reset

    input trigger_pkt_t [                3:0] trigger_pkt_any,  // trigger packet from dec
    input lsu_pkt_t                           lsu_pkt_dc3,      // lsu packet
    input logic         [               31:0] lsu_addr_dc3,     // address
    input logic         [DCCM_DATA_WIDTH-1:0] lsu_result_dc3,   // load data
    input logic         [DCCM_DATA_WIDTH-1:0] store_data_dc3,   // store data

    output logic [3:0] lsu_trigger_match_dc3  // match result
);

  logic [                3:0][DCCM_DATA_WIDTH-1:0] lsu_match_data;
  logic [                3:0]                      lsu_trigger_data_match;
  logic [DCCM_DATA_WIDTH-1:0]                      store_data_trigger_dc3;

  assign store_data_trigger_dc3 = {
    ({32{lsu_pkt_dc3.dword}} & store_data_dc3[63:32]),
    ({16{(lsu_pkt_dc3.dword | lsu_pkt_dc3.word)}} & store_data_dc3[31:16]),
    ({8{(lsu_pkt_dc3.dword | lsu_pkt_dc3.word | lsu_pkt_dc3.half)}} & store_data_dc3[15:8]),
    store_data_dc3[7:0]
  };


  for (genvar i = 0; i < 4; i++) begin
    assign lsu_match_data[i][63:0] = ({64{~trigger_pkt_any[i].select}} & {
      32'b0, lsu_addr_dc3[31:0]
    }) | ({64{trigger_pkt_any[i].select & trigger_pkt_any[i].store}} & store_data_trigger_dc3[63:0])
        ;


    rvmaskandmatch #(
        .WIDTH(DCCM_DATA_WIDTH)
    ) trigger_match (
        .mask  (trigger_pkt_any[i].tdata2[DCCM_DATA_WIDTH-1:0]),
        .data  (lsu_match_data[i][DCCM_DATA_WIDTH-1:0]),
        .masken(trigger_pkt_any[i].match),
        .match (lsu_trigger_data_match[i])
    );

    assign lsu_trigger_match_dc3[i] = lsu_pkt_dc3.valid & ~lsu_pkt_dc3.dma &
                                        ((trigger_pkt_any[i].store & lsu_pkt_dc3.store) | (trigger_pkt_any[i].load & lsu_pkt_dc3.load & ~trigger_pkt_any[i].select)) &
                                        lsu_trigger_data_match[i];
  end


endmodule  // lsu_trigger
