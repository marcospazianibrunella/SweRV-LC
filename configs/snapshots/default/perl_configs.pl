#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by marco on Tue 09 Nov 2021 01:12:44 PM CET
# 
#  cmd:    swerv  
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'iccm' => {
                        'iccm_num_banks' => '8',
                        'iccm_data_cell' => 'ram_16384x39',
                        'iccm_offset' => '0xe000000',
                        'iccm_index_bits' => 14,
                        'iccm_bank_bits' => 3,
                        'iccm_eadr' => '0xee07ffff',
                        'iccm_sadr' => '0xee000000',
                        'iccm_reserved' => '0x1000',
                        'iccm_size' => 512,
                        'iccm_region' => '0xe',
                        'iccm_rows' => '16384',
                        'iccm_size_512' => '',
                        'iccm_num_banks_8' => '',
                        'iccm_bits' => 19
                      },
            'max_mmode_perf_event' => '50',
            'num_mmode_perf_regs' => '4',
            'btb' => {
                       'btb_index1_hi' => 5,
                       'btb_addr_hi' => 5,
                       'btb_addr_lo' => '4',
                       'btb_btag_size' => 9,
                       'btb_index3_hi' => 9,
                       'btb_size' => 32,
                       'btb_index2_lo' => 6,
                       'btb_index1_lo' => '4',
                       'btb_index3_lo' => 8,
                       'btb_index2_hi' => 7,
                       'btb_array_depth' => 4,
                       'btb_btag_fold' => 1
                     },
            'nmi_vec' => '0x11110000',
            'target' => 'default',
            'harts' => 1,
            'memmap' => {
                          'unused_region4' => '0x40000000',
                          'unused_region2' => '0x20000000',
                          'unused_region9' => '0x90000000',
                          'unused_region0' => '0x00000000',
                          'external_data' => '0xc0580000',
                          'external_prog' => '0xb0000000',
                          'debug_sb_mem' => '0xb0580000',
                          'unused_region6' => '0x60000000',
                          'unused_region5' => '0x50000000',
                          'external_data_1' => '0x00000000',
                          'serialio' => '0xd0580000',
                          'unused_region3' => '0x30000000',
                          'unused_region1' => '0x10000000',
                          'consoleio' => '0xd0580000',
                          'unused_region7' => '0x70000000'
                        },
            'regwidth' => '32',
            'bht' => {
                       'bht_addr_hi' => 7,
                       'bht_ghr_size' => 5,
                       'bht_hash_string' => '{ghr[3:2] ^ {ghr[3+1], {4-1-2{1\'b0} } },hashin[5:4]^ghr[2-1:0]}',
                       'bht_ghr_pad' => 'fghr[4],3\'b0',
                       'bht_ghr_range' => '4:0',
                       'bht_array_depth' => 16,
                       'bht_addr_lo' => '4',
                       'bht_ghr_pad2' => 'fghr[4:3],2\'b0',
                       'bht_size' => 128
                     },
            'retstack' => {
                            'ret_stack_size' => '4'
                          },
            'numiregs' => '32',
            'testbench' => {
                             'datawidth' => '64',
                             'ext_addrwidth' => '32',
                             'sterr_rollback' => '0',
                             'SDVT_AHB' => '1',
                             'ext_datawidth' => '64',
                             'CPU_TOP' => '`RV_TOP.swerv',
                             'assert_on' => '',
                             'clock_period' => '100',
                             'TOP' => 'tb_top',
                             'build_axi4' => '1',
                             'lderr_rollback' => '1',
                             'RV_TOP' => '`TOP.rvtop'
                           },
            'protection' => {
                              'inst_access_addr1' => '0x00000000',
                              'inst_access_enable4' => '0x0',
                              'inst_access_enable6' => '0x0',
                              'data_access_enable7' => '0x0',
                              'data_access_addr3' => '0x00000000',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_enable3' => '0x0',
                              'inst_access_mask6' => '0xffffffff',
                              'data_access_addr2' => '0x00000000',
                              'inst_access_addr5' => '0x00000000',
                              'data_access_addr7' => '0x00000000',
                              'inst_access_enable5' => '0x0',
                              'data_access_addr0' => '0x00000000',
                              'data_access_mask5' => '0xffffffff',
                              'inst_access_mask7' => '0xffffffff',
                              'inst_access_mask2' => '0xffffffff',
                              'data_access_addr6' => '0x00000000',
                              'inst_access_enable0' => '0x0',
                              'inst_access_mask0' => '0xffffffff',
                              'inst_access_enable1' => '0x0',
                              'data_access_mask1' => '0xffffffff',
                              'inst_access_addr4' => '0x00000000',
                              'data_access_enable2' => '0x0',
                              'inst_access_mask3' => '0xffffffff',
                              'data_access_addr1' => '0x00000000',
                              'data_access_enable6' => '0x0',
                              'data_access_enable4' => '0x0',
                              'inst_access_enable7' => '0x0',
                              'inst_access_addr3' => '0x00000000',
                              'inst_access_mask4' => '0xffffffff',
                              'inst_access_addr2' => '0x00000000',
                              'data_access_mask6' => '0xffffffff',
                              'data_access_enable3' => '0x0',
                              'data_access_enable5' => '0x0',
                              'inst_access_addr7' => '0x00000000',
                              'data_access_addr5' => '0x00000000',
                              'inst_access_addr0' => '0x00000000',
                              'data_access_mask7' => '0xffffffff',
                              'inst_access_mask5' => '0xffffffff',
                              'inst_access_addr6' => '0x00000000',
                              'data_access_mask2' => '0xffffffff',
                              'data_access_enable0' => '0x0',
                              'data_access_mask0' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_addr4' => '0x00000000',
                              'inst_access_enable2' => '0x0',
                              'data_access_mask3' => '0xffffffff'
                            },
            'verilator' => '',
            'pic' => {
                       'pic_meipt_offset' => '0x3004',
                       'pic_bits' => 15,
                       'pic_meipl_offset' => '0x0000',
                       'pic_meip_offset' => '0x1000',
                       'pic_meipl_count' => 8,
                       'pic_meipt_mask' => '0x0',
                       'pic_meipt_count' => 8,
                       'pic_meipl_mask' => '0xf',
                       'pic_offset' => '0xc0000',
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_int_words' => 1,
                       'pic_meigwclr_mask' => '0x0',
                       'pic_meie_count' => 8,
                       'pic_meie_mask' => '0x1',
                       'pic_meigwctrl_count' => 8,
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_region' => '0xf',
                       'pic_meip_count' => 4,
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_total_int' => 8,
                       'pic_mpiccfg_count' => 1,
                       'pic_meigwclr_count' => 8,
                       'pic_meie_offset' => '0x2000',
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_size' => 32,
                       'pic_total_int_plus1' => 9,
                       'pic_meip_mask' => '0x0'
                     },
            'icache' => {
                          'icache_ic_rows' => '256',
                          'icache_tag_cell' => 'ram_64x21',
                          'icache_tag_high' => 12,
                          'icache_taddr_high' => 5,
                          'icache_tag_low' => '6',
                          'icache_ic_index' => 8,
                          'icache_tag_depth' => 64,
                          'icache_data_cell' => 'ram_256x34',
                          'icache_size' => 16,
                          'icache_ic_depth' => 8,
                          'icache_enable' => '1'
                        },
            'tec_rv_icg' => 'clockhdr',
            'core' => {
                        'fpga_optimize' => 1,
                        'dec_instbuf_depth' => '4',
                        'lsu_num_nbload_width' => '3',
                        'dma_buf_depth' => '4',
                        'lsu_stbuf_depth' => '8',
                        'lsu_num_nbload' => '8'
                      },
            'csr' => {
                       'meicurpl' => {
                                       'number' => '0xbcc',
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'comment' => 'External interrupt current priority level.',
                                       'reset' => '0x0'
                                     },
                       'mhpmcounter5h' => {
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff',
                                            'exists' => 'true'
                                          },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mitctl1' => {
                                      'reset' => '0x1',
                                      'number' => '0x7d7',
                                      'mask' => '0x00000007',
                                      'exists' => 'true'
                                    },
                       'dicago' => {
                                     'mask' => '0x0',
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0',
                                     'number' => '0x7cb',
                                     'debug' => 'true',
                                     'exists' => 'true'
                                   },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'meicpct' => {
                                      'reset' => '0x0',
                                      'comment' => 'External claim id/priority capture.',
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'number' => '0xbca'
                                    },
                       'miccmect' => {
                                       'number' => '0x7f1',
                                       'mask' => '0xffffffff',
                                       'exists' => 'true',
                                       'reset' => '0x0'
                                     },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'mhpmevent5' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       },
                       'mip' => {
                                  'reset' => '0x0',
                                  'mask' => '0x0',
                                  'poke_mask' => '0x70000888',
                                  'exists' => 'true'
                                },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'meipt' => {
                                    'exists' => 'true',
                                    'mask' => '0xf',
                                    'number' => '0xbc9',
                                    'reset' => '0x0',
                                    'comment' => 'External interrupt priority threshold.'
                                  },
                       'mvendorid' => {
                                        'mask' => '0x0',
                                        'exists' => 'true',
                                        'reset' => '0x45'
                                      },
                       'misa' => {
                                   'reset' => '0x40001104',
                                   'mask' => '0x0',
                                   'exists' => 'true'
                                 },
                       'dicawics' => {
                                       'number' => '0x7c8',
                                       'debug' => 'true',
                                       'exists' => 'true',
                                       'mask' => '0x0130fffc',
                                       'comment' => 'Cache diagnostics.',
                                       'reset' => '0x0'
                                     },
                       'mie' => {
                                  'mask' => '0x70000888',
                                  'exists' => 'true',
                                  'reset' => '0x0'
                                },
                       'mhpmcounter4h' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'mask' => '0xffffffff'
                                          },
                       'mitcnt0' => {
                                      'reset' => '0x0',
                                      'number' => '0x7d2',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mitbnd0' => {
                                      'exists' => 'true',
                                      'mask' => '0xffffffff',
                                      'number' => '0x7d3',
                                      'reset' => '0xffffffff'
                                    },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'mstatus' => {
                                      'reset' => '0x1800',
                                      'mask' => '0x88',
                                      'exists' => 'true'
                                    },
                       'mhpmcounter4' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'meicidpl' => {
                                       'number' => '0xbcb',
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'comment' => 'External interrupt claim id priority level.',
                                       'reset' => '0x0'
                                     },
                       'mhpmevent6' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'dmst' => {
                                   'exists' => 'true',
                                   'debug' => 'true',
                                   'number' => '0x7c4',
                                   'reset' => '0x0',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'mask' => '0x0'
                                 },
                       'mgpmc' => {
                                    'number' => '0x7d0',
                                    'mask' => '0x1',
                                    'exists' => 'true',
                                    'reset' => '0x1'
                                  },
                       'mhpmcounter5' => {
                                           'reset' => '0x0',
                                           'exists' => 'true',
                                           'mask' => '0xffffffff'
                                         },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'micect' => {
                                     'reset' => '0x0',
                                     'exists' => 'true',
                                     'mask' => '0xffffffff',
                                     'number' => '0x7f0'
                                   },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'mitctl0' => {
                                      'reset' => '0x1',
                                      'number' => '0x7d4',
                                      'mask' => '0x00000007',
                                      'exists' => 'true'
                                    },
                       'mcgc' => {
                                   'exists' => 'true',
                                   'mask' => '0x000001ff',
                                   'poke_mask' => '0x000001ff',
                                   'number' => '0x7f8',
                                   'reset' => '0x0'
                                 },
                       'mfdc' => {
                                   'reset' => '0x00070040',
                                   'number' => '0x7f9',
                                   'exists' => 'true',
                                   'mask' => '0x000727ff'
                                 },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'mhpmcounter6h' => {
                                            'exists' => 'true',
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0'
                                          },
                       'mhpmcounter3' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mimpid' => {
                                     'reset' => '0x6',
                                     'exists' => 'true',
                                     'mask' => '0x0'
                                   },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'marchid' => {
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'reset' => '0x0000000b'
                                    },
                       'mpmc' => {
                                   'comment' => 'FWHALT',
                                   'reset' => '0x2',
                                   'number' => '0x7c6',
                                   'poke_mask' => '0x2',
                                   'mask' => '0x2',
                                   'exists' => 'true'
                                 },
                       'mitcnt1' => {
                                      'reset' => '0x0',
                                      'number' => '0x7d5',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'mcpc' => {
                                   'number' => '0x7c2',
                                   'exists' => 'true',
                                   'mask' => '0x0',
                                   'reset' => '0x0'
                                 },
                       'tselect' => {
                                      'mask' => '0x3',
                                      'exists' => 'true',
                                      'reset' => '0x0'
                                    },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'dicad0' => {
                                     'mask' => '0xffffffff',
                                     'reset' => '0x0',
                                     'comment' => 'Cache diagnostics.',
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'number' => '0x7c9'
                                   },
                       'mitbnd1' => {
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d6',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mhpmcounter3h' => {
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff',
                                            'exists' => 'true'
                                          },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'mhpmevent3' => {
                                         'mask' => '0xffffffff',
                                         'exists' => 'true',
                                         'reset' => '0x0'
                                       },
                       'dcsr' => {
                                   'poke_mask' => '0x00008dcc',
                                   'mask' => '0x00008c04',
                                   'exists' => 'true',
                                   'reset' => '0x40000003'
                                 },
                       'mcountinhibit' => {
                                            'exists' => 'false'
                                          },
                       'mhpmevent4' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'mdccmect' => {
                                       'reset' => '0x0',
                                       'number' => '0x7f2',
                                       'exists' => 'true',
                                       'mask' => '0xffffffff'
                                     },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter6' => {
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff',
                                           'exists' => 'true'
                                         },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'dicad1' => {
                                     'number' => '0x7ca',
                                     'debug' => 'true',
                                     'exists' => 'true',
                                     'mask' => '0x3',
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0'
                                   }
                     },
            'bus' => {
                       'lsu_bus_tag' => 4,
                       'ifu_bus_tag' => '3',
                       'dma_bus_tag' => '1',
                       'sb_bus_tag' => '1'
                     },
            'even_odd_trigger_chains' => 'true',
            'triggers' => [
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            },
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            },
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            },
                            {
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            }
                          ],
            'physical' => '1',
            'reset_vec' => '0x80000000',
            'dccm' => {
                        'dccm_size_64' => '',
                        'dccm_bits' => 16,
                        'dccm_num_banks_8' => '',
                        'dccm_rows' => '2048',
                        'dccm_eadr' => '0xf004ffff',
                        'dccm_reserved' => '0x1000',
                        'dccm_sadr' => '0xf0040000',
                        'dccm_size' => 64,
                        'dccm_region' => '0xf',
                        'dccm_enable' => '1',
                        'dccm_index_bits' => 11,
                        'dccm_bank_bits' => 3,
                        'dccm_fdata_width' => 39,
                        'dccm_ecc_width' => 7,
                        'dccm_num_banks' => '8',
                        'dccm_byte_width' => '4',
                        'dccm_data_cell' => 'ram_2048x39',
                        'dccm_offset' => '0x40000',
                        'dccm_width_bits' => 2,
                        'lsu_sb_bits' => 16,
                        'dccm_data_width' => 32
                      },
            'xlen' => 32
          );
1;
