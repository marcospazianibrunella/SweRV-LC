#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by marco on Tue 14 Dec 2021 09:30:36 AM CET
# 
#  cmd:    swerv -target=default -set iccm_enable 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'harts' => 1,
            'dccm' => {
                        'dccm_byte_width' => '8',
                        'dccm_size_64' => '',
                        'dccm_sadr' => '0xf0040000',
                        'dccm_enable' => '1',
                        'dccm_rows' => '2048',
                        'dccm_ecc_width' => 8,
                        'dccm_offset' => '0x40000',
                        'dccm_region' => '0xf',
                        'dccm_data_cell' => 'ram_2048x72',
                        'dccm_index_bits' => 11,
                        'dccm_fdata_width' => 72,
                        'dccm_bits' => 17,
                        'dccm_bank_bits' => 3,
                        'dccm_reserved' => '0x1000',
                        'dccm_num_banks' => '8',
                        'dccm_num_banks_8' => '',
                        'dccm_size' => 64,
                        'lsu_sb_bits' => 17,
                        'dccm_width_bits' => 3,
                        'dccm_data_width' => 64,
                        'dccm_eadr' => '0xf004ffff'
                      },
            'protection' => {
                              'data_access_enable5' => '0x0',
                              'inst_access_enable0' => '0x0',
                              'data_access_enable7' => '0x0',
                              'data_access_mask0' => '0xffffffff',
                              'data_access_addr0' => '0x00000000',
                              'inst_access_enable4' => '0x0',
                              'data_access_enable4' => '0x0',
                              'inst_access_addr0' => '0x00000000',
                              'inst_access_mask0' => '0xffffffff',
                              'inst_access_enable7' => '0x0',
                              'data_access_enable0' => '0x0',
                              'inst_access_enable5' => '0x0',
                              'inst_access_mask2' => '0xffffffff',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_addr3' => '0x00000000',
                              'data_access_mask6' => '0xffffffff',
                              'data_access_enable3' => '0x0',
                              'data_access_mask5' => '0xffffffff',
                              'data_access_addr1' => '0x00000000',
                              'inst_access_mask7' => '0xffffffff',
                              'data_access_enable2' => '0x0',
                              'inst_access_mask3' => '0xffffffff',
                              'data_access_addr6' => '0x00000000',
                              'inst_access_enable6' => '0x0',
                              'inst_access_addr2' => '0x00000000',
                              'data_access_addr4' => '0x00000000',
                              'inst_access_enable1' => '0x0',
                              'data_access_mask1' => '0xffffffff',
                              'inst_access_addr7' => '0x00000000',
                              'data_access_addr5' => '0x00000000',
                              'inst_access_addr5' => '0x00000000',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'data_access_addr7' => '0x00000000',
                              'data_access_addr2' => '0x00000000',
                              'inst_access_addr4' => '0x00000000',
                              'data_access_mask3' => '0xffffffff',
                              'inst_access_addr6' => '0x00000000',
                              'data_access_enable6' => '0x0',
                              'inst_access_addr1' => '0x00000000',
                              'data_access_mask7' => '0xffffffff',
                              'inst_access_enable2' => '0x0',
                              'inst_access_mask5' => '0xffffffff',
                              'data_access_addr3' => '0x00000000',
                              'inst_access_enable3' => '0x0',
                              'inst_access_mask6' => '0xffffffff',
                              'data_access_mask2' => '0xffffffff',
                              'inst_access_mask4' => '0xffffffff'
                            },
            'tec_rv_icg' => 'clockhdr',
            'iccm' => {
                        'iccm_num_banks_8' => '',
                        'iccm_size' => 512,
                        'iccm_eadr' => '0xee07ffff',
                        'iccm_reserved' => '0x1000',
                        'iccm_num_banks' => '8',
                        'iccm_size_512' => '',
                        'iccm_offset' => '0xe000000',
                        'iccm_bank_bits' => 3,
                        'iccm_bits' => 19,
                        'iccm_index_bits' => 14,
                        'iccm_data_cell' => 'ram_16384x39',
                        'iccm_region' => '0xe',
                        'iccm_sadr' => '0xee000000',
                        'iccm_enable' => 1,
                        'iccm_rows' => '16384'
                      },
            'xlen' => 64,
            'triggers' => [
                            {
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ]
                            },
                            {
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ]
                            },
                            {
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'poke_mask' => [
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
            'memmap' => {
                          'unused_region4' => '0x40000000',
                          'external_data_1' => '0x00000000',
                          'unused_region6' => '0x60000000',
                          'consoleio' => '0xd0580000',
                          'unused_region0' => '0x00000000',
                          'unused_region2' => '0x20000000',
                          'debug_sb_mem' => '0xb0580000',
                          'unused_region5' => '0x50000000',
                          'unused_region3' => '0x30000000',
                          'serialio' => '0xd0580000',
                          'unused_region9' => '0x90000000',
                          'unused_region1' => '0x10000000',
                          'unused_region7' => '0x70000000',
                          'external_prog' => '0xb0000000',
                          'external_data' => '0xc0580000'
                        },
            'nmi_vec' => '0x11110000',
            'regwidth' => '64',
            'retstack' => {
                            'ret_stack_size' => '4'
                          },
            'icache' => {
                          'icache_taddr_high' => 5,
                          'icache_tag_low' => '6',
                          'icache_enable' => '1',
                          'icache_tag_depth' => 64,
                          'icache_ic_depth' => 8,
                          'icache_tag_high' => 12,
                          'icache_data_cell' => 'ram_256x34',
                          'icache_ic_rows' => '256',
                          'icache_ic_index' => 8,
                          'icache_tag_cell' => 'ram_64x21',
                          'icache_size' => 16
                        },
            'even_odd_trigger_chains' => 'true',
            'btb' => {
                       'btb_btag_size' => 9,
                       'btb_btag_fold' => 1,
                       'btb_array_depth' => 4,
                       'btb_index2_lo' => 6,
                       'btb_size' => 32,
                       'btb_addr_lo' => '4',
                       'btb_index3_lo' => 8,
                       'btb_index1_hi' => 5,
                       'btb_addr_hi' => 5,
                       'btb_index3_hi' => 9,
                       'btb_index1_lo' => '4',
                       'btb_index2_hi' => 7
                     },
            'bht' => {
                       'bht_ghr_range' => '4:0',
                       'bht_hash_string' => '{ghr[3:2] ^ {ghr[3+1], {4-1-2{1\'b0} } },hashin[5:4]^ghr[2-1:0]}',
                       'bht_ghr_pad' => 'fghr[4],3\'b0',
                       'bht_ghr_pad2' => 'fghr[4:3],2\'b0',
                       'bht_size' => 128,
                       'bht_array_depth' => 16,
                       'bht_addr_hi' => 7,
                       'bht_ghr_size' => 5,
                       'bht_addr_lo' => '4'
                     },
            'max_mmode_perf_event' => '50',
            'verilator' => '',
            'physical' => '1',
            'reset_vec' => '0x80000000',
            'pic' => {
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meipl_count' => 8,
                       'pic_offset' => '0xc0000',
                       'pic_meigwctrl_count' => 8,
                       'pic_bits' => 15,
                       'pic_meip_mask' => '0x0',
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_int_words' => 1,
                       'pic_meie_count' => 8,
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_meipt_count' => 8,
                       'pic_meie_offset' => '0x2000',
                       'pic_meip_count' => 4,
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_meipl_mask' => '0xf',
                       'pic_meipl_offset' => '0x0000',
                       'pic_meip_offset' => '0x1000',
                       'pic_meie_mask' => '0x1',
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_size' => 32,
                       'pic_meigwclr_mask' => '0x0',
                       'pic_total_int' => 8,
                       'pic_meipt_mask' => '0x0',
                       'pic_meipt_offset' => '0x3004',
                       'pic_mpiccfg_count' => 1,
                       'pic_total_int_plus1' => 9,
                       'pic_region' => '0xf',
                       'pic_meigwclr_count' => 8
                     },
            'testbench' => {
                             'ext_addrwidth' => '32',
                             'sterr_rollback' => '0',
                             'build_axi4' => '1',
                             'clock_period' => '100',
                             'datawidth' => '64',
                             'CPU_TOP' => '`RV_TOP.swerv',
                             'lderr_rollback' => '1',
                             'RV_TOP' => '`TOP.rvtop',
                             'TOP' => 'tb_top',
                             'assert_on' => '',
                             'SDVT_AHB' => '1',
                             'ext_datawidth' => '64'
                           },
            'csr' => {
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'mcgc' => {
                                   'number' => '0x7f8',
                                   'poke_mask' => '0x000001ff',
                                   'reset' => '0x0',
                                   'exists' => 'true',
                                   'mask' => '0x000001ff'
                                 },
                       'mhpmcounter5h' => {
                                            'exists' => 'true',
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0'
                                          },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'meicurpl' => {
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'comment' => 'External interrupt current priority level.',
                                       'reset' => '0x0',
                                       'number' => '0xbcc'
                                     },
                       'meipt' => {
                                    'exists' => 'true',
                                    'mask' => '0xf',
                                    'comment' => 'External interrupt priority threshold.',
                                    'reset' => '0x0',
                                    'number' => '0xbc9'
                                  },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'mitbnd0' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d3'
                                    },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'misa' => {
                                   'reset' => '0x40001104',
                                   'exists' => 'true',
                                   'mask' => '0x0'
                                 },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'mcpc' => {
                                   'mask' => '0x0',
                                   'exists' => 'true',
                                   'reset' => '0x0',
                                   'number' => '0x7c2'
                                 },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'mhpmevent6' => {
                                         'mask' => '0xffffffff',
                                         'exists' => 'true',
                                         'reset' => '0x0'
                                       },
                       'mip' => {
                                  'poke_mask' => '0x70000888',
                                  'reset' => '0x0',
                                  'mask' => '0x0',
                                  'exists' => 'true'
                                },
                       'mitcnt0' => {
                                      'number' => '0x7d2',
                                      'reset' => '0x0',
                                      'mask' => '0xffffffff',
                                      'exists' => 'true'
                                    },
                       'mgpmc' => {
                                    'reset' => '0x1',
                                    'number' => '0x7d0',
                                    'exists' => 'true',
                                    'mask' => '0x1'
                                  },
                       'mhpmcounter3' => {
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff',
                                           'exists' => 'true'
                                         },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'mcountinhibit' => {
                                            'exists' => 'false'
                                          },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter6h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'mfdc' => {
                                   'number' => '0x7f9',
                                   'reset' => '0x00070040',
                                   'exists' => 'true',
                                   'mask' => '0x000727ff'
                                 },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'mitctl0' => {
                                      'mask' => '0x00000007',
                                      'exists' => 'true',
                                      'reset' => '0x1',
                                      'number' => '0x7d4'
                                    },
                       'mhpmcounter4h' => {
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff',
                                            'exists' => 'true'
                                          },
                       'dicago' => {
                                     'exists' => 'true',
                                     'mask' => '0x0',
                                     'debug' => 'true',
                                     'number' => '0x7cb',
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0'
                                   },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'mitctl1' => {
                                      'mask' => '0x00000007',
                                      'exists' => 'true',
                                      'reset' => '0x1',
                                      'number' => '0x7d7'
                                    },
                       'dicad1' => {
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0',
                                     'debug' => 'true',
                                     'number' => '0x7ca',
                                     'exists' => 'true',
                                     'mask' => '0x3'
                                   },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'mie' => {
                                  'reset' => '0x0',
                                  'mask' => '0x70000888',
                                  'exists' => 'true'
                                },
                       'mhpmevent4' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'mpmc' => {
                                   'poke_mask' => '0x2',
                                   'comment' => 'FWHALT',
                                   'exists' => 'true',
                                   'mask' => '0x2',
                                   'number' => '0x7c6',
                                   'reset' => '0x2'
                                 },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'micect' => {
                                     'reset' => '0x0',
                                     'number' => '0x7f0',
                                     'mask' => '0xffffffff',
                                     'exists' => 'true'
                                   },
                       'meicpct' => {
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'comment' => 'External claim id/priority capture.',
                                      'number' => '0xbca'
                                    },
                       'mhpmcounter5' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'dicawics' => {
                                       'comment' => 'Cache diagnostics.',
                                       'reset' => '0x0',
                                       'debug' => 'true',
                                       'number' => '0x7c8',
                                       'mask' => '0x0130fffc',
                                       'exists' => 'true'
                                     },
                       'mimpid' => {
                                     'exists' => 'true',
                                     'mask' => '0x0',
                                     'reset' => '0x6'
                                   },
                       'miccmect' => {
                                       'exists' => 'true',
                                       'mask' => '0xffffffff',
                                       'number' => '0x7f1',
                                       'reset' => '0x0'
                                     },
                       'marchid' => {
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'reset' => '0x0000000b'
                                    },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter4' => {
                                           'reset' => '0x0',
                                           'exists' => 'true',
                                           'mask' => '0xffffffff'
                                         },
                       'mitbnd1' => {
                                      'number' => '0x7d6',
                                      'reset' => '0xffffffff',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mhpmevent5' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       },
                       'mstatus' => {
                                      'reset' => '0x1800',
                                      'mask' => '0x88',
                                      'exists' => 'true'
                                    },
                       'mitcnt1' => {
                                      'number' => '0x7d5',
                                      'reset' => '0x0',
                                      'mask' => '0xffffffff',
                                      'exists' => 'true'
                                    },
                       'mhpmcounter6' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mvendorid' => {
                                        'mask' => '0x0',
                                        'exists' => 'true',
                                        'reset' => '0x45'
                                      },
                       'dmst' => {
                                   'exists' => 'true',
                                   'mask' => '0x0',
                                   'reset' => '0x0',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'number' => '0x7c4',
                                   'debug' => 'true'
                                 },
                       'meicidpl' => {
                                       'number' => '0xbcb',
                                       'comment' => 'External interrupt claim id priority level.',
                                       'reset' => '0x0',
                                       'mask' => '0xf',
                                       'exists' => 'true'
                                     },
                       'dcsr' => {
                                   'reset' => '0x40000003',
                                   'poke_mask' => '0x00008dcc',
                                   'exists' => 'true',
                                   'mask' => '0x00008c04'
                                 },
                       'mhpmevent3' => {
                                         'mask' => '0xffffffff',
                                         'exists' => 'true',
                                         'reset' => '0x0'
                                       },
                       'mdccmect' => {
                                       'exists' => 'true',
                                       'mask' => '0xffffffff',
                                       'reset' => '0x0',
                                       'number' => '0x7f2'
                                     },
                       'tselect' => {
                                      'exists' => 'true',
                                      'mask' => '0x3',
                                      'reset' => '0x0'
                                    },
                       'mhpmcounter3h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'dicad0' => {
                                     'mask' => '0xffffffff',
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'number' => '0x7c9',
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0'
                                   },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    }
                     },
            'num_mmode_perf_regs' => '4',
            'target' => 'default',
            'numiregs' => '32',
            'bus' => {
                       'sb_bus_tag' => '1',
                       'lsu_bus_tag' => 4,
                       'ifu_bus_tag' => '3',
                       'dma_bus_tag' => '1'
                     },
            'core' => {
                        'lsu_num_nbload_width' => '3',
                        'lsu_stbuf_depth' => '8',
                        'lsu_num_nbload' => '8',
                        'dma_buf_depth' => '4',
                        'fpga_optimize' => 1,
                        'dec_instbuf_depth' => '4'
                      }
          );
1;
