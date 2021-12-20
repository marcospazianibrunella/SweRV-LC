#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by marco on Mon 20 Dec 2021 04:07:11 PM CET
# 
#  cmd:    swerv -target=default -set iccm_enable 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'regwidth' => '64',
            'pic' => {
                       'pic_meipt_mask' => '0x0',
                       'pic_meipt_count' => 8,
                       'pic_meie_mask' => '0x1',
                       'pic_meie_count' => 8,
                       'pic_size' => 32,
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_meigwclr_mask' => '0x0',
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_meipl_offset' => '0x0000',
                       'pic_meip_offset' => '0x1000',
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_total_int_plus1' => 9,
                       'pic_base_addr' => '0xf00c0000',
                       'pic_int_words' => 1,
                       'pic_meie_offset' => '0x2000',
                       'pic_meigwctrl_count' => 8,
                       'pic_meipl_mask' => '0xf',
                       'pic_meipl_count' => 8,
                       'pic_offset' => '0xc0000',
                       'pic_meipt_offset' => '0x3004',
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_total_int' => 8,
                       'pic_meigwclr_count' => 8,
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_mpiccfg_count' => 1,
                       'pic_meip_mask' => '0x0',
                       'pic_meip_count' => 4,
                       'pic_bits' => 15,
                       'pic_region' => '0xf'
                     },
            'numiregs' => '32',
            'triggers' => [
                            {
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
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
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            },
                            {
                              'poke_mask' => [
                                               '0x081818c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'mask' => [
                                          '0x081818c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ]
                            },
                            {
                              'poke_mask' => [
                                               '0x081810c7',
                                               '0xffffffff',
                                               '0x00000000'
                                             ],
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ]
                            }
                          ],
            'physical' => '1',
            'memmap' => {
                          'unused_region7' => '0x70000000',
                          'unused_region5' => '0x50000000',
                          'consoleio' => '0xd0580000',
                          'unused_region0' => '0x00000000',
                          'debug_sb_mem' => '0xb0580000',
                          'unused_region9' => '0x90000000',
                          'unused_region4' => '0x40000000',
                          'external_prog' => '0xb0000000',
                          'external_data_1' => '0x00000000',
                          'unused_region6' => '0x60000000',
                          'serialio' => '0xd0580000',
                          'unused_region3' => '0x30000000',
                          'unused_region2' => '0x20000000',
                          'unused_region1' => '0x10000000',
                          'external_data' => '0xc0580000'
                        },
            'even_odd_trigger_chains' => 'true',
            'target' => 'default',
            'icache' => {
                          'icache_taddr_high' => 5,
                          'icache_enable' => '1',
                          'icache_tag_high' => 12,
                          'icache_size' => 16,
                          'icache_ic_rows' => '256',
                          'icache_ic_depth' => 8,
                          'icache_tag_low' => '6',
                          'icache_tag_depth' => 64,
                          'icache_data_cell' => 'ram_256x34',
                          'icache_tag_cell' => 'ram_64x21',
                          'icache_ic_index' => 8
                        },
            'harts' => 1,
            'iccm' => {
                        'iccm_num_banks_8' => '',
                        'iccm_eadr' => '0xee07ffff',
                        'iccm_index_bits' => 14,
                        'iccm_data_cell' => 'ram_16384x39',
                        'iccm_region' => '0xe',
                        'iccm_bank_bits' => 3,
                        'iccm_reserved' => '0x1000',
                        'iccm_size' => 512,
                        'iccm_enable' => 1,
                        'iccm_sadr' => '0xee000000',
                        'iccm_rows' => '16384',
                        'iccm_offset' => '0xe000000',
                        'iccm_size_512' => '',
                        'iccm_bits' => 19,
                        'iccm_num_banks' => '8'
                      },
            'retstack' => {
                            'ret_stack_size' => '4'
                          },
            'dccm' => {
                        'dccm_size' => 64,
                        'dccm_reserved' => '0x1000',
                        'dccm_width_bits' => 3,
                        'dccm_bits' => 17,
                        'dccm_rows' => '2048',
                        'dccm_enable' => '1',
                        'dccm_sadr' => '0xf0040000',
                        'dccm_offset' => '0x40000',
                        'dccm_num_banks' => '8',
                        'dccm_data_width' => 64,
                        'dccm_eadr' => '0xf004ffff',
                        'dccm_index_bits' => 11,
                        'dccm_num_banks_8' => '',
                        'lsu_sb_bits' => 17,
                        'dccm_size_64' => '',
                        'dccm_data_cell' => 'ram_2048x72',
                        'dccm_ecc_width' => 8,
                        'dccm_bank_bits' => 3,
                        'dccm_fdata_width' => 72,
                        'dccm_byte_width' => '8',
                        'dccm_region' => '0xf'
                      },
            'bus' => {
                       'dma_bus_tag' => '1',
                       'lsu_bus_tag' => 4,
                       'sb_bus_tag' => '1',
                       'ifu_bus_tag' => '3'
                     },
            'verilator' => '',
            'csr' => {
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter4h' => {
                                            'exists' => 'true',
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff'
                                          },
                       'mhpmcounter6' => {
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff',
                                           'exists' => 'true'
                                         },
                       'mhpmcounter5h' => {
                                            'exists' => 'true',
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0'
                                          },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'marchid' => {
                                      'mask' => '0x0',
                                      'reset' => '0x0000000b',
                                      'exists' => 'true'
                                    },
                       'mpmc' => {
                                   'exists' => 'true',
                                   'number' => '0x7c6',
                                   'reset' => '0x2',
                                   'mask' => '0x2',
                                   'poke_mask' => '0x2',
                                   'comment' => 'FWHALT'
                                 },
                       'dcsr' => {
                                   'poke_mask' => '0x00008dcc',
                                   'exists' => 'true',
                                   'reset' => '0x40000003',
                                   'mask' => '0x00008c04'
                                 },
                       'mcpc' => {
                                   'exists' => 'true',
                                   'number' => '0x7c2',
                                   'reset' => '0x0',
                                   'mask' => '0x0'
                                 },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter3' => {
                                           'exists' => 'true',
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0'
                                         },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter4' => {
                                           'exists' => 'true',
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff'
                                         },
                       'mhpmcounter6h' => {
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff',
                                            'exists' => 'true'
                                          },
                       'mhpmcounter5' => {
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff',
                                           'exists' => 'true'
                                         },
                       'mgpmc' => {
                                    'number' => '0x7d0',
                                    'exists' => 'true',
                                    'reset' => '0x1',
                                    'mask' => '0x1'
                                  },
                       'mitbnd0' => {
                                      'reset' => '0xffffffff',
                                      'mask' => '0xffffffff',
                                      'number' => '0x7d3',
                                      'exists' => 'true'
                                    },
                       'mitctl0' => {
                                      'reset' => '0x1',
                                      'mask' => '0x00000007',
                                      'number' => '0x7d4',
                                      'exists' => 'true'
                                    },
                       'meicpct' => {
                                      'reset' => '0x0',
                                      'mask' => '0x0',
                                      'number' => '0xbca',
                                      'exists' => 'true',
                                      'comment' => 'External claim id/priority capture.'
                                    },
                       'mcountinhibit' => {
                                            'exists' => 'false'
                                          },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'mvendorid' => {
                                        'reset' => '0x45',
                                        'mask' => '0x0',
                                        'exists' => 'true'
                                      },
                       'mie' => {
                                  'exists' => 'true',
                                  'reset' => '0x0',
                                  'mask' => '0x70000888'
                                },
                       'mitcnt1' => {
                                      'exists' => 'true',
                                      'number' => '0x7d5',
                                      'reset' => '0x0',
                                      'mask' => '0xffffffff'
                                    },
                       'mhpmcounter3h' => {
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff',
                                            'exists' => 'true'
                                          },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'mhpmevent6' => {
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff',
                                         'exists' => 'true'
                                       },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'dmst' => {
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'mask' => '0x0',
                                   'reset' => '0x0',
                                   'debug' => 'true',
                                   'number' => '0x7c4',
                                   'exists' => 'true'
                                 },
                       'mhpmevent4' => {
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0',
                                         'exists' => 'true'
                                       },
                       'meicurpl' => {
                                       'mask' => '0xf',
                                       'reset' => '0x0',
                                       'exists' => 'true',
                                       'number' => '0xbcc',
                                       'comment' => 'External interrupt current priority level.'
                                     },
                       'meicidpl' => {
                                       'comment' => 'External interrupt claim id priority level.',
                                       'reset' => '0x0',
                                       'mask' => '0xf',
                                       'number' => '0xbcb',
                                       'exists' => 'true'
                                     },
                       'dicad0' => {
                                     'debug' => 'true',
                                     'number' => '0x7c9',
                                     'exists' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'mask' => '0xffffffff',
                                     'reset' => '0x0'
                                   },
                       'micect' => {
                                     'exists' => 'true',
                                     'number' => '0x7f0',
                                     'reset' => '0x0',
                                     'mask' => '0xffffffff'
                                   },
                       'mstatus' => {
                                      'mask' => '0x88',
                                      'reset' => '0x1800',
                                      'exists' => 'true'
                                    },
                       'misa' => {
                                   'exists' => 'true',
                                   'reset' => '0x40001104',
                                   'mask' => '0x0'
                                 },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'mhpmevent5' => {
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff',
                                         'exists' => 'true'
                                       },
                       'mip' => {
                                  'mask' => '0x0',
                                  'reset' => '0x0',
                                  'exists' => 'true',
                                  'poke_mask' => '0x70000888'
                                },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'dicawics' => {
                                       'debug' => 'true',
                                       'number' => '0x7c8',
                                       'exists' => 'true',
                                       'comment' => 'Cache diagnostics.',
                                       'reset' => '0x0',
                                       'mask' => '0x0130fffc'
                                     },
                       'dicad1' => {
                                     'exists' => 'true',
                                     'number' => '0x7ca',
                                     'debug' => 'true',
                                     'reset' => '0x0',
                                     'mask' => '0x3',
                                     'comment' => 'Cache diagnostics.'
                                   },
                       'mitctl1' => {
                                      'number' => '0x7d7',
                                      'exists' => 'true',
                                      'mask' => '0x00000007',
                                      'reset' => '0x1'
                                    },
                       'mhpmevent3' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       },
                       'meipt' => {
                                    'comment' => 'External interrupt priority threshold.',
                                    'reset' => '0x0',
                                    'mask' => '0xf',
                                    'exists' => 'true',
                                    'number' => '0xbc9'
                                  },
                       'mcgc' => {
                                   'poke_mask' => '0x000001ff',
                                   'mask' => '0x000001ff',
                                   'reset' => '0x0',
                                   'number' => '0x7f8',
                                   'exists' => 'true'
                                 },
                       'mfdc' => {
                                   'reset' => '0x00070040',
                                   'mask' => '0x000727ff',
                                   'number' => '0x7f9',
                                   'exists' => 'true'
                                 },
                       'mitbnd1' => {
                                      'number' => '0x7d6',
                                      'exists' => 'true',
                                      'reset' => '0xffffffff',
                                      'mask' => '0xffffffff'
                                    },
                       'mimpid' => {
                                     'exists' => 'true',
                                     'reset' => '0x6',
                                     'mask' => '0x0'
                                   },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'mitcnt0' => {
                                      'reset' => '0x0',
                                      'mask' => '0xffffffff',
                                      'number' => '0x7d2',
                                      'exists' => 'true'
                                    },
                       'mdccmect' => {
                                       'mask' => '0xffffffff',
                                       'reset' => '0x0',
                                       'number' => '0x7f2',
                                       'exists' => 'true'
                                     },
                       'miccmect' => {
                                       'mask' => '0xffffffff',
                                       'reset' => '0x0',
                                       'exists' => 'true',
                                       'number' => '0x7f1'
                                     },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'tselect' => {
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'mask' => '0x3'
                                    },
                       'dicago' => {
                                     'exists' => 'true',
                                     'number' => '0x7cb',
                                     'debug' => 'true',
                                     'reset' => '0x0',
                                     'mask' => '0x0',
                                     'comment' => 'Cache diagnostics.'
                                   },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     }
                     },
            'protection' => {
                              'inst_access_mask0' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'inst_access_mask2' => '0xffffffff',
                              'data_access_mask7' => '0xffffffff',
                              'data_access_addr3' => '0x00000000',
                              'data_access_mask1' => '0xffffffff',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_mask5' => '0xffffffff',
                              'inst_access_enable7' => '0x0',
                              'inst_access_mask6' => '0xffffffff',
                              'data_access_enable2' => '0x0',
                              'inst_access_enable4' => '0x0',
                              'inst_access_addr6' => '0x00000000',
                              'inst_access_enable0' => '0x0',
                              'data_access_enable6' => '0x0',
                              'inst_access_addr5' => '0x00000000',
                              'inst_access_enable3' => '0x0',
                              'data_access_mask3' => '0xffffffff',
                              'data_access_enable5' => '0x0',
                              'data_access_addr4' => '0x00000000',
                              'data_access_addr1' => '0x00000000',
                              'inst_access_addr0' => '0x00000000',
                              'inst_access_addr2' => '0x00000000',
                              'data_access_addr7' => '0x00000000',
                              'data_access_enable3' => '0x0',
                              'data_access_addr5' => '0x00000000',
                              'inst_access_enable6' => '0x0',
                              'data_access_enable0' => '0x0',
                              'data_access_enable4' => '0x0',
                              'data_access_addr6' => '0x00000000',
                              'data_access_addr2' => '0x00000000',
                              'inst_access_addr7' => '0x00000000',
                              'data_access_addr0' => '0x00000000',
                              'inst_access_enable5' => '0x0',
                              'inst_access_addr1' => '0x00000000',
                              'inst_access_addr4' => '0x00000000',
                              'inst_access_mask3' => '0xffffffff',
                              'inst_access_mask4' => '0xffffffff',
                              'inst_access_mask1' => '0xffffffff',
                              'inst_access_addr3' => '0x00000000',
                              'inst_access_mask7' => '0xffffffff',
                              'data_access_mask2' => '0xffffffff',
                              'data_access_mask0' => '0xffffffff',
                              'inst_access_enable1' => '0x0',
                              'inst_access_enable2' => '0x0',
                              'data_access_mask6' => '0xffffffff',
                              'data_access_enable7' => '0x0',
                              'data_access_mask5' => '0xffffffff'
                            },
            'tec_rv_icg' => 'clockhdr',
            'btb' => {
                       'btb_size' => 32,
                       'btb_index3_hi' => 9,
                       'btb_btag_fold' => 1,
                       'btb_index2_hi' => 7,
                       'btb_addr_lo' => '4',
                       'btb_index1_lo' => '4',
                       'btb_btag_size' => 9,
                       'btb_array_depth' => 4,
                       'btb_index2_lo' => 6,
                       'btb_index3_lo' => 8,
                       'btb_addr_hi' => 5,
                       'btb_index1_hi' => 5
                     },
            'max_mmode_perf_event' => '50',
            'xlen' => 64,
            'testbench' => {
                             'sterr_rollback' => '0',
                             'TOP' => 'tb_top',
                             'clock_period' => '100',
                             'build_axi4' => '1',
                             'ext_datawidth' => '64',
                             'CPU_TOP' => '`RV_TOP.swerv',
                             'lderr_rollback' => '1',
                             'SDVT_AHB' => '1',
                             'datawidth' => '64',
                             'assert_on' => '',
                             'RV_TOP' => '`TOP.rvtop',
                             'ext_addrwidth' => '32'
                           },
            'core' => {
                        'lsu_num_nbload_width' => '3',
                        'lsu_num_nbload' => '8',
                        'dec_instbuf_depth' => '4',
                        'dma_buf_depth' => '4',
                        'fpga_optimize' => 1,
                        'lsu_stbuf_depth' => '8'
                      },
            'num_mmode_perf_regs' => '4',
            'reset_vec' => '0x80000000',
            'bht' => {
                       'bht_hash_string' => '{ghr[3:2] ^ {ghr[3+1], {4-1-2{1\'b0} } },hashin[5:4]^ghr[2-1:0]}',
                       'bht_array_depth' => 16,
                       'bht_addr_lo' => '4',
                       'bht_ghr_range' => '4:0',
                       'bht_ghr_pad2' => 'fghr[4:3],2\'b0',
                       'bht_addr_hi' => 7,
                       'bht_ghr_pad' => 'fghr[4],3\'b0',
                       'bht_size' => 128,
                       'bht_ghr_size' => 5
                     },
            'nmi_vec' => '0x11110000'
          );
1;
