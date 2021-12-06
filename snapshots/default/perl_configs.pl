#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by marco on Mon 06 Dec 2021 11:30:45 AM CET
# 
#  cmd:    swerv -target=default -set iccm_enable 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'pic' => {
                       'pic_meie_mask' => '0x1',
                       'pic_meipl_offset' => '0x0000',
                       'pic_meipl_mask' => '0xf',
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_bits' => 15,
                       'pic_meipt_offset' => '0x3004',
                       'pic_meipt_mask' => '0x0',
                       'pic_meip_count' => 4,
                       'pic_size' => 32,
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_meigwctrl_count' => 8,
                       'pic_total_int' => 8,
                       'pic_meip_offset' => '0x1000',
                       'pic_base_addr' => '0xf00c0000',
                       'pic_int_words' => 1,
                       'pic_meigwclr_count' => 8,
                       'pic_meipl_count' => 8,
                       'pic_meie_offset' => '0x2000',
                       'pic_mpiccfg_count' => 1,
                       'pic_meipt_count' => 8,
                       'pic_meie_count' => 8,
                       'pic_region' => '0xf',
                       'pic_meigwclr_mask' => '0x0',
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_total_int_plus1' => 9,
                       'pic_offset' => '0xc0000',
                       'pic_meip_mask' => '0x0',
                       'pic_meigwclr_offset' => '0x5000',
                       'pic_meigwctrl_mask' => '0x3'
                     },
            'memmap' => {
                          'unused_region4' => '0x40000000',
                          'debug_sb_mem' => '0xb0580000',
                          'unused_region1' => '0x10000000',
                          'unused_region6' => '0x60000000',
                          'serialio' => '0xd0580000',
                          'unused_region5' => '0x50000000',
                          'unused_region9' => '0x90000000',
                          'external_data' => '0xc0580000',
                          'unused_region0' => '0x00000000',
                          'unused_region7' => '0x70000000',
                          'external_data_1' => '0x00000000',
                          'unused_region3' => '0x30000000',
                          'external_prog' => '0xb0000000',
                          'consoleio' => '0xd0580000',
                          'unused_region2' => '0x20000000'
                        },
            'max_mmode_perf_event' => '50',
            'protection' => {
                              'data_access_mask3' => '0xffffffff',
                              'data_access_enable7' => '0x0',
                              'data_access_addr0' => '0x00000000',
                              'data_access_enable2' => '0x0',
                              'data_access_addr7' => '0x00000000',
                              'inst_access_addr4' => '0x00000000',
                              'data_access_mask1' => '0xffffffff',
                              'inst_access_enable1' => '0x0',
                              'data_access_addr5' => '0x00000000',
                              'inst_access_mask6' => '0xffffffff',
                              'inst_access_mask2' => '0xffffffff',
                              'inst_access_mask3' => '0xffffffff',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'inst_access_addr0' => '0x00000000',
                              'inst_access_enable7' => '0x0',
                              'data_access_addr4' => '0x00000000',
                              'inst_access_addr7' => '0x00000000',
                              'inst_access_enable2' => '0x0',
                              'inst_access_addr5' => '0x00000000',
                              'data_access_mask6' => '0xffffffff',
                              'data_access_mask2' => '0xffffffff',
                              'inst_access_enable3' => '0x0',
                              'data_access_addr3' => '0x00000000',
                              'inst_access_enable6' => '0x0',
                              'inst_access_enable0' => '0x0',
                              'data_access_enable5' => '0x0',
                              'inst_access_addr6' => '0x00000000',
                              'inst_access_addr2' => '0x00000000',
                              'data_access_mask5' => '0xffffffff',
                              'inst_access_mask4' => '0xffffffff',
                              'data_access_mask7' => '0xffffffff',
                              'data_access_mask0' => '0xffffffff',
                              'data_access_enable4' => '0x0',
                              'data_access_addr1' => '0x00000000',
                              'inst_access_addr3' => '0x00000000',
                              'data_access_enable6' => '0x0',
                              'data_access_enable3' => '0x0',
                              'data_access_enable0' => '0x0',
                              'data_access_addr6' => '0x00000000',
                              'data_access_addr2' => '0x00000000',
                              'inst_access_mask5' => '0xffffffff',
                              'inst_access_enable5' => '0x0',
                              'inst_access_addr1' => '0x00000000',
                              'inst_access_mask7' => '0xffffffff',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_mask0' => '0xffffffff',
                              'inst_access_enable4' => '0x0'
                            },
            'verilator' => '',
            'retstack' => {
                            'ret_stack_size' => '4'
                          },
            'physical' => '1',
            'bus' => {
                       'ifu_bus_tag' => '3',
                       'dma_bus_tag' => '1',
                       'lsu_bus_tag' => 4,
                       'sb_bus_tag' => '1'
                     },
            'target' => 'default',
            'even_odd_trigger_chains' => 'true',
            'btb' => {
                       'btb_addr_lo' => '4',
                       'btb_index3_lo' => 8,
                       'btb_index1_lo' => '4',
                       'btb_index2_hi' => 7,
                       'btb_addr_hi' => 5,
                       'btb_size' => 32,
                       'btb_index2_lo' => 6,
                       'btb_index1_hi' => 5,
                       'btb_index3_hi' => 9,
                       'btb_btag_fold' => 1,
                       'btb_array_depth' => 4,
                       'btb_btag_size' => 9
                     },
            'num_mmode_perf_regs' => '4',
            'numiregs' => '32',
            'tec_rv_icg' => 'clockhdr',
            'dccm' => {
                        'dccm_eadr' => '0xf004ffff',
                        'dccm_rows' => '2048',
                        'dccm_width_bits' => 2,
                        'dccm_enable' => '1',
                        'dccm_byte_width' => '4',
                        'dccm_num_banks_8' => '',
                        'dccm_bank_bits' => 3,
                        'dccm_offset' => '0x40000',
                        'dccm_num_banks' => '8',
                        'dccm_reserved' => '0x1000',
                        'dccm_fdata_width' => 39,
                        'dccm_size' => 64,
                        'dccm_bits' => 16,
                        'dccm_ecc_width' => 7,
                        'dccm_sadr' => '0xf0040000',
                        'dccm_data_cell' => 'ram_2048x39',
                        'lsu_sb_bits' => 16,
                        'dccm_size_64' => '',
                        'dccm_data_width' => 32,
                        'dccm_region' => '0xf',
                        'dccm_index_bits' => 11
                      },
            'csr' => {
                       'mhpmevent6' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'mip' => {
                                  'reset' => '0x0',
                                  'exists' => 'true',
                                  'mask' => '0x0',
                                  'poke_mask' => '0x70000888'
                                },
                       'meicidpl' => {
                                       'exists' => 'true',
                                       'mask' => '0xf',
                                       'reset' => '0x0',
                                       'comment' => 'External interrupt claim id priority level.',
                                       'number' => '0xbcb'
                                     },
                       'mhpmcounter5h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'mimpid' => {
                                     'exists' => 'true',
                                     'mask' => '0x0',
                                     'reset' => '0x6'
                                   },
                       'tselect' => {
                                      'reset' => '0x0',
                                      'mask' => '0x3',
                                      'exists' => 'true'
                                    },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter4' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mdccmect' => {
                                       'number' => '0x7f2',
                                       'reset' => '0x0',
                                       'exists' => 'true',
                                       'mask' => '0xffffffff'
                                     },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'mhpmcounter6h' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'mask' => '0xffffffff'
                                          },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'mitbnd1' => {
                                      'number' => '0x7d6',
                                      'reset' => '0xffffffff',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'dicad1' => {
                                     'mask' => '0x3',
                                     'reset' => '0x0',
                                     'comment' => 'Cache diagnostics.',
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'number' => '0x7ca'
                                   },
                       'mitctl1' => {
                                      'reset' => '0x1',
                                      'exists' => 'true',
                                      'mask' => '0x00000007',
                                      'number' => '0x7d7'
                                    },
                       'mcountinhibit' => {
                                            'exists' => 'false'
                                          },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'dicawics' => {
                                       'comment' => 'Cache diagnostics.',
                                       'mask' => '0x0130fffc',
                                       'reset' => '0x0',
                                       'number' => '0x7c8',
                                       'exists' => 'true',
                                       'debug' => 'true'
                                     },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'mcpc' => {
                                   'exists' => 'true',
                                   'mask' => '0x0',
                                   'reset' => '0x0',
                                   'number' => '0x7c2'
                                 },
                       'meicpct' => {
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0xbca',
                                      'comment' => 'External claim id/priority capture.'
                                    },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'mstatus' => {
                                      'reset' => '0x1800',
                                      'exists' => 'true',
                                      'mask' => '0x88'
                                    },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'marchid' => {
                                      'reset' => '0x0000000b',
                                      'exists' => 'true',
                                      'mask' => '0x0'
                                    },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'dcsr' => {
                                   'poke_mask' => '0x00008dcc',
                                   'reset' => '0x40000003',
                                   'mask' => '0x00008c04',
                                   'exists' => 'true'
                                 },
                       'mitcnt0' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7d2'
                                    },
                       'mfdc' => {
                                   'number' => '0x7f9',
                                   'reset' => '0x00070040',
                                   'mask' => '0x000727ff',
                                   'exists' => 'true'
                                 },
                       'mhpmcounter3h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'mpmc' => {
                                   'number' => '0x7c6',
                                   'comment' => 'FWHALT',
                                   'poke_mask' => '0x2',
                                   'reset' => '0x2',
                                   'mask' => '0x2',
                                   'exists' => 'true'
                                 },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'mie' => {
                                  'mask' => '0x70000888',
                                  'exists' => 'true',
                                  'reset' => '0x0'
                                },
                       'mitcnt1' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7d5'
                                    },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'miccmect' => {
                                       'mask' => '0xffffffff',
                                       'exists' => 'true',
                                       'reset' => '0x0',
                                       'number' => '0x7f1'
                                     },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter5' => {
                                           'reset' => '0x0',
                                           'mask' => '0xffffffff',
                                           'exists' => 'true'
                                         },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'mgpmc' => {
                                    'reset' => '0x1',
                                    'mask' => '0x1',
                                    'exists' => 'true',
                                    'number' => '0x7d0'
                                  },
                       'meipt' => {
                                    'comment' => 'External interrupt priority threshold.',
                                    'number' => '0xbc9',
                                    'reset' => '0x0',
                                    'exists' => 'true',
                                    'mask' => '0xf'
                                  },
                       'misa' => {
                                   'reset' => '0x40001104',
                                   'mask' => '0x0',
                                   'exists' => 'true'
                                 },
                       'micect' => {
                                     'mask' => '0xffffffff',
                                     'exists' => 'true',
                                     'reset' => '0x0',
                                     'number' => '0x7f0'
                                   },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'mhpmcounter6' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mvendorid' => {
                                        'mask' => '0x0',
                                        'exists' => 'true',
                                        'reset' => '0x45'
                                      },
                       'mhpmcounter4h' => {
                                            'exists' => 'true',
                                            'mask' => '0xffffffff',
                                            'reset' => '0x0'
                                          },
                       'mitctl0' => {
                                      'mask' => '0x00000007',
                                      'exists' => 'true',
                                      'reset' => '0x1',
                                      'number' => '0x7d4'
                                    },
                       'mhpmevent3' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'mitbnd0' => {
                                      'number' => '0x7d3',
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0xffffffff'
                                    },
                       'mhpmevent5' => {
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff',
                                         'exists' => 'true'
                                       },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'mcgc' => {
                                   'poke_mask' => '0x000001ff',
                                   'number' => '0x7f8',
                                   'exists' => 'true',
                                   'mask' => '0x000001ff',
                                   'reset' => '0x0'
                                 },
                       'dmst' => {
                                   'exists' => 'true',
                                   'debug' => 'true',
                                   'number' => '0x7c4',
                                   'mask' => '0x0',
                                   'reset' => '0x0',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.'
                                 },
                       'dicad0' => {
                                     'reset' => '0x0',
                                     'mask' => '0xffffffff',
                                     'comment' => 'Cache diagnostics.',
                                     'debug' => 'true',
                                     'exists' => 'true',
                                     'number' => '0x7c9'
                                   },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'mhpmcounter3' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'meicurpl' => {
                                       'reset' => '0x0',
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'number' => '0xbcc',
                                       'comment' => 'External interrupt current priority level.'
                                     },
                       'dicago' => {
                                     'comment' => 'Cache diagnostics.',
                                     'reset' => '0x0',
                                     'mask' => '0x0',
                                     'number' => '0x7cb',
                                     'debug' => 'true',
                                     'exists' => 'true'
                                   },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'mhpmevent4' => {
                                         'exists' => 'true',
                                         'mask' => '0xffffffff',
                                         'reset' => '0x0'
                                       }
                     },
            'reset_vec' => '0x80000000',
            'bht' => {
                       'bht_ghr_pad' => 'fghr[4],3\'b0',
                       'bht_hash_string' => '{ghr[3:2] ^ {ghr[3+1], {4-1-2{1\'b0} } },hashin[5:4]^ghr[2-1:0]}',
                       'bht_addr_hi' => 7,
                       'bht_addr_lo' => '4',
                       'bht_ghr_range' => '4:0',
                       'bht_size' => 128,
                       'bht_array_depth' => 16,
                       'bht_ghr_size' => 5,
                       'bht_ghr_pad2' => 'fghr[4:3],2\'b0'
                     },
            'nmi_vec' => '0x11110000',
            'core' => {
                        'dma_buf_depth' => '4',
                        'lsu_num_nbload' => '8',
                        'dec_instbuf_depth' => '4',
                        'lsu_stbuf_depth' => '8',
                        'lsu_num_nbload_width' => '3',
                        'fpga_optimize' => 1
                      },
            'xlen' => 32,
            'triggers' => [
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
                              'mask' => [
                                          '0x081810c7',
                                          '0xffffffff',
                                          '0x00000000'
                                        ],
                              'reset' => [
                                           '0x23e00000',
                                           '0x00000000',
                                           '0x00000000'
                                         ],
                              'poke_mask' => [
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
                            }
                          ],
            'icache' => {
                          'icache_tag_low' => '6',
                          'icache_tag_cell' => 'ram_64x21',
                          'icache_ic_depth' => 8,
                          'icache_data_cell' => 'ram_256x34',
                          'icache_tag_depth' => 64,
                          'icache_taddr_high' => 5,
                          'icache_size' => 16,
                          'icache_enable' => '1',
                          'icache_ic_rows' => '256',
                          'icache_ic_index' => 8,
                          'icache_tag_high' => 12
                        },
            'testbench' => {
                             'CPU_TOP' => '`RV_TOP.swerv',
                             'ext_datawidth' => '64',
                             'build_axi4' => '1',
                             'SDVT_AHB' => '1',
                             'sterr_rollback' => '0',
                             'TOP' => 'tb_top',
                             'datawidth' => '64',
                             'assert_on' => '',
                             'RV_TOP' => '`TOP.rvtop',
                             'lderr_rollback' => '1',
                             'ext_addrwidth' => '32',
                             'clock_period' => '100'
                           },
            'iccm' => {
                        'iccm_eadr' => '0xee07ffff',
                        'iccm_enable' => 1,
                        'iccm_rows' => '16384',
                        'iccm_offset' => '0xe000000',
                        'iccm_num_banks' => '8',
                        'iccm_num_banks_8' => '',
                        'iccm_bank_bits' => 3,
                        'iccm_reserved' => '0x1000',
                        'iccm_bits' => 19,
                        'iccm_size_512' => '',
                        'iccm_size' => 512,
                        'iccm_sadr' => '0xee000000',
                        'iccm_index_bits' => 14,
                        'iccm_data_cell' => 'ram_16384x39',
                        'iccm_region' => '0xe'
                      },
            'regwidth' => '32',
            'harts' => 1
          );
1;
