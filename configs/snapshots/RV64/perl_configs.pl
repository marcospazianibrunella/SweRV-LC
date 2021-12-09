#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by marco on Thu 09 Dec 2021 03:10:17 PM CET
# 
#  cmd:    swerv -snapshot=RV64 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'bus' => {
                       'sb_bus_tag' => '1',
                       'dma_bus_tag' => '1',
                       'ifu_bus_tag' => '3',
                       'lsu_bus_tag' => 4
                     },
            'numiregs' => '32',
            'pic' => {
                       'pic_meie_offset' => '0x2000',
                       'pic_total_int' => 8,
                       'pic_meipt_mask' => '0x0',
                       'pic_region' => '0xf',
                       'pic_meipt_offset' => '0x3004',
                       'pic_meip_offset' => '0x1000',
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_total_int_plus1' => 9,
                       'pic_int_words' => 1,
                       'pic_meigwctrl_count' => 8,
                       'pic_meigwclr_mask' => '0x0',
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meipt_count' => 8,
                       'pic_mpiccfg_count' => 1,
                       'pic_meigwclr_count' => 8,
                       'pic_size' => 32,
                       'pic_meipl_mask' => '0xf',
                       'pic_offset' => '0xc0000',
                       'pic_meie_mask' => '0x1',
                       'pic_meipl_offset' => '0x0000',
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_meip_mask' => '0x0',
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_meie_count' => 8,
                       'pic_bits' => 15,
                       'pic_meipl_count' => 8,
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_meip_count' => 4
                     },
            'protection' => {
                              'data_access_addr2' => '0x00000000',
                              'inst_access_addr3' => '0x00000000',
                              'data_access_mask7' => '0xffffffff',
                              'data_access_mask5' => '0xffffffff',
                              'inst_access_enable7' => '0x0',
                              'data_access_addr6' => '0x00000000',
                              'data_access_mask1' => '0xffffffff',
                              'data_access_addr0' => '0x00000000',
                              'inst_access_enable4' => '0x0',
                              'inst_access_enable5' => '0x0',
                              'inst_access_addr4' => '0x00000000',
                              'inst_access_enable6' => '0x0',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_enable4' => '0x0',
                              'inst_access_addr0' => '0x00000000',
                              'data_access_enable7' => '0x0',
                              'inst_access_addr6' => '0x00000000',
                              'data_access_enable6' => '0x0',
                              'data_access_enable5' => '0x0',
                              'data_access_addr4' => '0x00000000',
                              'inst_access_addr2' => '0x00000000',
                              'data_access_addr3' => '0x00000000',
                              'inst_access_mask7' => '0xffffffff',
                              'inst_access_mask5' => '0xffffffff',
                              'inst_access_addr7' => '0x00000000',
                              'inst_access_addr5' => '0x00000000',
                              'inst_access_enable3' => '0x0',
                              'data_access_mask3' => '0xffffffff',
                              'inst_access_enable0' => '0x0',
                              'inst_access_mask2' => '0xffffffff',
                              'data_access_mask4' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'inst_access_mask6' => '0xffffffff',
                              'data_access_enable2' => '0x0',
                              'inst_access_mask0' => '0xffffffff',
                              'inst_access_addr1' => '0x00000000',
                              'inst_access_enable1' => '0x0',
                              'inst_access_mask4' => '0xffffffff',
                              'data_access_mask0' => '0xffffffff',
                              'data_access_addr1' => '0x00000000',
                              'data_access_mask6' => '0xffffffff',
                              'inst_access_enable2' => '0x0',
                              'data_access_addr7' => '0x00000000',
                              'data_access_addr5' => '0x00000000',
                              'inst_access_mask3' => '0xffffffff',
                              'data_access_enable3' => '0x0',
                              'data_access_enable0' => '0x0',
                              'data_access_mask2' => '0xffffffff'
                            },
            'harts' => 1,
            'target' => 'default',
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
            'retstack' => {
                            'ret_stack_size' => '4'
                          },
            'regwidth' => '64',
            'max_mmode_perf_event' => '50',
            'xlen' => 64,
            'reset_vec' => '0x80000000',
            'icache' => {
                          'icache_tag_depth' => 64,
                          'icache_ic_rows' => '256',
                          'icache_ic_depth' => 8,
                          'icache_ic_index' => 8,
                          'icache_enable' => '1',
                          'icache_size' => 16,
                          'icache_taddr_high' => 5,
                          'icache_tag_low' => '6',
                          'icache_tag_high' => 12,
                          'icache_data_cell' => 'ram_256x34',
                          'icache_tag_cell' => 'ram_64x21'
                        },
            'testbench' => {
                             'lderr_rollback' => '1',
                             'ext_datawidth' => '64',
                             'ext_addrwidth' => '32',
                             'sterr_rollback' => '0',
                             'SDVT_AHB' => '1',
                             'TOP' => 'tb_top',
                             'clock_period' => '100',
                             'RV_TOP' => '`TOP.rvtop',
                             'build_axi4' => '1',
                             'datawidth' => '64',
                             'assert_on' => '',
                             'CPU_TOP' => '`RV_TOP.swerv'
                           },
            'verilator' => '',
            'bht' => {
                       'bht_ghr_pad2' => 'fghr[4:3],2\'b0',
                       'bht_addr_lo' => '4',
                       'bht_hash_string' => '{ghr[3:2] ^ {ghr[3+1], {4-1-2{1\'b0} } },hashin[5:4]^ghr[2-1:0]}',
                       'bht_ghr_size' => 5,
                       'bht_array_depth' => 16,
                       'bht_size' => 128,
                       'bht_ghr_pad' => 'fghr[4],3\'b0',
                       'bht_ghr_range' => '4:0',
                       'bht_addr_hi' => 7
                     },
            'btb' => {
                       'btb_btag_size' => 9,
                       'btb_array_depth' => 4,
                       'btb_size' => 32,
                       'btb_index1_hi' => 5,
                       'btb_index2_hi' => 7,
                       'btb_index3_hi' => 9,
                       'btb_addr_lo' => '4',
                       'btb_btag_fold' => 1,
                       'btb_index1_lo' => '4',
                       'btb_addr_hi' => 5,
                       'btb_index3_lo' => 8,
                       'btb_index2_lo' => 6
                     },
            'nmi_vec' => '0x11110000',
            'dccm' => {
                        'dccm_enable' => '1',
                        'dccm_size' => 64,
                        'dccm_data_cell' => 'ram_1024x72',
                        'dccm_data_width' => 64,
                        'dccm_num_banks' => '8',
                        'dccm_width_bits' => 3,
                        'dccm_rows' => '1024',
                        'dccm_index_bits' => 10,
                        'dccm_ecc_width' => 8,
                        'dccm_sadr' => '0xf0040000',
                        'dccm_num_banks_8' => '',
                        'lsu_sb_bits' => 16,
                        'dccm_region' => '0xf',
                        'dccm_fdata_width' => 72,
                        'dccm_size_64' => '',
                        'dccm_reserved' => '0x1000',
                        'dccm_eadr' => '0xf004ffff',
                        'dccm_bits' => 16,
                        'dccm_offset' => '0x40000',
                        'dccm_byte_width' => '8',
                        'dccm_bank_bits' => 3
                      },
            'even_odd_trigger_chains' => 'true',
            'tec_rv_icg' => 'clockhdr',
            'num_mmode_perf_regs' => '4',
            'csr' => {
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'mhpmevent3' => {
                                         'mask' => '0xffffffff',
                                         'exists' => 'true',
                                         'reset' => '0x0'
                                       },
                       'mhpmevent6' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'mdccmect' => {
                                       'mask' => '0xffffffff',
                                       'reset' => '0x0',
                                       'number' => '0x7f2',
                                       'exists' => 'true'
                                     },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'mcpc' => {
                                   'exists' => 'true',
                                   'reset' => '0x0',
                                   'number' => '0x7c2',
                                   'mask' => '0x0'
                                 },
                       'meicpct' => {
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0xbca',
                                      'comment' => 'External claim id/priority capture.',
                                      'mask' => '0x0'
                                    },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'mimpid' => {
                                     'exists' => 'true',
                                     'reset' => '0x6',
                                     'mask' => '0x0'
                                   },
                       'mip' => {
                                  'poke_mask' => '0x70000888',
                                  'reset' => '0x0',
                                  'exists' => 'true',
                                  'mask' => '0x0'
                                },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'miccmect' => {
                                       'exists' => 'true',
                                       'reset' => '0x0',
                                       'number' => '0x7f1',
                                       'mask' => '0xffffffff'
                                     },
                       'meicurpl' => {
                                       'comment' => 'External interrupt current priority level.',
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'reset' => '0x0',
                                       'number' => '0xbcc'
                                     },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'mitctl1' => {
                                      'mask' => '0x00000007',
                                      'exists' => 'true',
                                      'reset' => '0x1',
                                      'number' => '0x7d7'
                                    },
                       'mhpmcounter5h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'dicawics' => {
                                       'number' => '0x7c8',
                                       'reset' => '0x0',
                                       'comment' => 'Cache diagnostics.',
                                       'debug' => 'true',
                                       'exists' => 'true',
                                       'mask' => '0x0130fffc'
                                     },
                       'mitcnt0' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'number' => '0x7d2',
                                      'reset' => '0x0'
                                    },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'marchid' => {
                                      'reset' => '0x0000000b',
                                      'exists' => 'true',
                                      'mask' => '0x0'
                                    },
                       'micect' => {
                                     'exists' => 'true',
                                     'reset' => '0x0',
                                     'number' => '0x7f0',
                                     'mask' => '0xffffffff'
                                   },
                       'mhpmevent4' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter5' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mie' => {
                                  'mask' => '0x70000888',
                                  'exists' => 'true',
                                  'reset' => '0x0'
                                },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'misa' => {
                                   'mask' => '0x0',
                                   'exists' => 'true',
                                   'reset' => '0x40001104'
                                 },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'mitbnd1' => {
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d6',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'dmst' => {
                                   'number' => '0x7c4',
                                   'reset' => '0x0',
                                   'debug' => 'true',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'exists' => 'true',
                                   'mask' => '0x0'
                                 },
                       'mfdc' => {
                                   'mask' => '0x000727ff',
                                   'exists' => 'true',
                                   'number' => '0x7f9',
                                   'reset' => '0x00070040'
                                 },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'mcgc' => {
                                   'mask' => '0x000001ff',
                                   'reset' => '0x0',
                                   'poke_mask' => '0x000001ff',
                                   'number' => '0x7f8',
                                   'exists' => 'true'
                                 },
                       'mhpmcounter3' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mitcnt1' => {
                                      'number' => '0x7d5',
                                      'reset' => '0x0',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mhpmcounter4' => {
                                           'reset' => '0x0',
                                           'exists' => 'true',
                                           'mask' => '0xffffffff'
                                         },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'mgpmc' => {
                                    'number' => '0x7d0',
                                    'reset' => '0x1',
                                    'exists' => 'true',
                                    'mask' => '0x1'
                                  },
                       'mitctl0' => {
                                      'exists' => 'true',
                                      'number' => '0x7d4',
                                      'reset' => '0x1',
                                      'mask' => '0x00000007'
                                    },
                       'dcsr' => {
                                   'reset' => '0x40000003',
                                   'poke_mask' => '0x00008dcc',
                                   'exists' => 'true',
                                   'mask' => '0x00008c04'
                                 },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter6h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'meicidpl' => {
                                       'exists' => 'true',
                                       'number' => '0xbcb',
                                       'reset' => '0x0',
                                       'comment' => 'External interrupt claim id priority level.',
                                       'mask' => '0xf'
                                     },
                       'dicad0' => {
                                     'debug' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0',
                                     'number' => '0x7c9',
                                     'mask' => '0xffffffff',
                                     'exists' => 'true'
                                   },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'mpmc' => {
                                   'exists' => 'true',
                                   'poke_mask' => '0x2',
                                   'reset' => '0x2',
                                   'number' => '0x7c6',
                                   'mask' => '0x2',
                                   'comment' => 'FWHALT'
                                 },
                       'meipt' => {
                                    'mask' => '0xf',
                                    'comment' => 'External interrupt priority threshold.',
                                    'exists' => 'true',
                                    'number' => '0xbc9',
                                    'reset' => '0x0'
                                  },
                       'dicad1' => {
                                     'mask' => '0x3',
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0',
                                     'number' => '0x7ca'
                                   },
                       'mhpmcounter6' => {
                                           'reset' => '0x0',
                                           'exists' => 'true',
                                           'mask' => '0xffffffff'
                                         },
                       'mitbnd0' => {
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d3',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'mhpmevent5' => {
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0',
                                         'exists' => 'true'
                                       },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'mvendorid' => {
                                        'reset' => '0x45',
                                        'exists' => 'true',
                                        'mask' => '0x0'
                                      },
                       'tselect' => {
                                      'mask' => '0x3',
                                      'reset' => '0x0',
                                      'exists' => 'true'
                                    },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'mhpmcounter3h' => {
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0',
                                            'exists' => 'true'
                                          },
                       'dicago' => {
                                     'mask' => '0x0',
                                     'exists' => 'true',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true',
                                     'reset' => '0x0',
                                     'number' => '0x7cb'
                                   },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter4h' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'mask' => '0xffffffff'
                                          },
                       'mcountinhibit' => {
                                            'exists' => 'false'
                                          },
                       'mstatus' => {
                                      'exists' => 'true',
                                      'reset' => '0x1800',
                                      'mask' => '0x88'
                                    }
                     },
            'core' => {
                        'lsu_num_nbload_width' => '3',
                        'dma_buf_depth' => '4',
                        'lsu_num_nbload' => '8',
                        'fpga_optimize' => 1,
                        'dec_instbuf_depth' => '4',
                        'lsu_stbuf_depth' => '8'
                      },
            'physical' => '1',
            'iccm' => {
                        'iccm_index_bits' => 14,
                        'iccm_rows' => '16384',
                        'iccm_num_banks' => '8',
                        'iccm_size_512' => '',
                        'iccm_size' => 512,
                        'iccm_data_cell' => 'ram_16384x39',
                        'iccm_region' => '0xe',
                        'iccm_num_banks_8' => '',
                        'iccm_sadr' => '0xee000000',
                        'iccm_bank_bits' => 3,
                        'iccm_offset' => '0xe000000',
                        'iccm_bits' => 19,
                        'iccm_reserved' => '0x1000',
                        'iccm_eadr' => '0xee07ffff'
                      },
            'memmap' => {
                          'unused_region9' => '0x90000000',
                          'external_prog' => '0xb0000000',
                          'unused_region5' => '0x50000000',
                          'unused_region2' => '0x20000000',
                          'unused_region7' => '0x70000000',
                          'unused_region3' => '0x30000000',
                          'unused_region6' => '0x60000000',
                          'unused_region4' => '0x40000000',
                          'debug_sb_mem' => '0xb0580000',
                          'unused_region0' => '0x00000000',
                          'external_data_1' => '0x00000000',
                          'external_data' => '0xc0580000',
                          'unused_region1' => '0x10000000',
                          'consoleio' => '0xd0580000',
                          'serialio' => '0xd0580000'
                        }
          );
1;
