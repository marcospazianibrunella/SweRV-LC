#  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
#  This is an automatically generated file by marco on Thu 25 Nov 2021 10:36:54 AM CET
# 
#  cmd:    swerv -target=default -set iccm_enable 
# 
# To use this in a perf script, use 'require $RV_ROOT/configs/config.pl'
# Reference the hash via $config{name}..


%config = (
            'pic' => {
                       'pic_meipt_offset' => '0x3004',
                       'pic_mpiccfg_offset' => '0x3000',
                       'pic_meip_offset' => '0x1000',
                       'pic_meigwclr_count' => 8,
                       'pic_meip_mask' => '0x0',
                       'pic_mpiccfg_mask' => '0x1',
                       'pic_meipl_offset' => '0x0000',
                       'pic_meigwctrl_offset' => '0x4000',
                       'pic_total_int' => 8,
                       'pic_mpiccfg_count' => 1,
                       'pic_region' => '0xf',
                       'pic_size' => 32,
                       'pic_meip_count' => 4,
                       'pic_offset' => '0xc0000',
                       'pic_meipt_count' => 8,
                       'pic_bits' => 15,
                       'pic_meigwctrl_mask' => '0x3',
                       'pic_meie_count' => 8,
                       'pic_int_words' => 1,
                       'pic_meigwclr_mask' => '0x0',
                       'pic_meipl_count' => 8,
                       'pic_meipl_mask' => '0xf',
                       'pic_total_int_plus1' => 9,
                       'pic_meipt_mask' => '0x0',
                       'pic_base_addr' => '0xf00c0000',
                       'pic_meigwctrl_count' => 8,
                       'pic_meie_mask' => '0x1',
                       'pic_meie_offset' => '0x2000',
                       'pic_meigwclr_offset' => '0x5000'
                     },
            'reset_vec' => '0x80000000',
            'target' => 'default',
            'xlen' => 32,
            'iccm' => {
                        'iccm_size_512' => '',
                        'iccm_bank_bits' => 3,
                        'iccm_region' => '0xe',
                        'iccm_reserved' => '0x1000',
                        'iccm_bits' => 19,
                        'iccm_rows' => '16384',
                        'iccm_enable' => 1,
                        'iccm_sadr' => '0xee000000',
                        'iccm_size' => 512,
                        'iccm_num_banks_8' => '',
                        'iccm_offset' => '0xe000000',
                        'iccm_eadr' => '0xee07ffff',
                        'iccm_num_banks' => '8',
                        'iccm_index_bits' => 14,
                        'iccm_data_cell' => 'ram_16384x39'
                      },
            'bht' => {
                       'bht_hash_string' => '{ghr[3:2] ^ {ghr[3+1], {4-1-2{1\'b0} } },hashin[5:4]^ghr[2-1:0]}',
                       'bht_addr_hi' => 7,
                       'bht_ghr_pad2' => 'fghr[4:3],2\'b0',
                       'bht_array_depth' => 16,
                       'bht_ghr_range' => '4:0',
                       'bht_size' => 128,
                       'bht_ghr_pad' => 'fghr[4],3\'b0',
                       'bht_addr_lo' => '4',
                       'bht_ghr_size' => 5
                     },
            'physical' => '1',
            'memmap' => {
                          'unused_region7' => '0x70000000',
                          'serialio' => '0xd0580000',
                          'unused_region1' => '0x10000000',
                          'consoleio' => '0xd0580000',
                          'unused_region9' => '0x90000000',
                          'external_prog' => '0xb0000000',
                          'external_data' => '0xc0580000',
                          'debug_sb_mem' => '0xb0580000',
                          'unused_region6' => '0x60000000',
                          'unused_region4' => '0x40000000',
                          'unused_region2' => '0x20000000',
                          'unused_region3' => '0x30000000',
                          'external_data_1' => '0x00000000',
                          'unused_region0' => '0x00000000',
                          'unused_region5' => '0x50000000'
                        },
            'even_odd_trigger_chains' => 'true',
            'protection' => {
                              'inst_access_addr7' => '0x00000000',
                              'data_access_mask3' => '0xffffffff',
                              'inst_access_addr1' => '0x00000000',
                              'inst_access_enable6' => '0x0',
                              'inst_access_enable3' => '0x0',
                              'inst_access_mask0' => '0xffffffff',
                              'inst_access_enable5' => '0x0',
                              'inst_access_addr2' => '0x00000000',
                              'inst_access_enable2' => '0x0',
                              'inst_access_addr6' => '0x00000000',
                              'data_access_addr4' => '0x00000000',
                              'inst_access_addr5' => '0x00000000',
                              'inst_access_enable4' => '0x0',
                              'data_access_mask7' => '0xffffffff',
                              'inst_access_addr3' => '0x00000000',
                              'data_access_mask1' => '0xffffffff',
                              'data_access_enable0' => '0x0',
                              'data_access_addr0' => '0x00000000',
                              'data_access_mask2' => '0xffffffff',
                              'data_access_mask6' => '0xffffffff',
                              'data_access_enable1' => '0x0',
                              'inst_access_mask4' => '0xffffffff',
                              'data_access_enable7' => '0x0',
                              'data_access_mask5' => '0xffffffff',
                              'data_access_addr3' => '0x00000000',
                              'inst_access_mask7' => '0xffffffff',
                              'inst_access_mask2' => '0xffffffff',
                              'inst_access_addr0' => '0x00000000',
                              'inst_access_enable0' => '0x0',
                              'inst_access_mask1' => '0xffffffff',
                              'data_access_mask4' => '0xffffffff',
                              'inst_access_enable1' => '0x0',
                              'inst_access_mask6' => '0xffffffff',
                              'inst_access_mask5' => '0xffffffff',
                              'inst_access_enable7' => '0x0',
                              'inst_access_mask3' => '0xffffffff',
                              'data_access_addr7' => '0x00000000',
                              'data_access_addr2' => '0x00000000',
                              'data_access_mask0' => '0xffffffff',
                              'data_access_enable5' => '0x0',
                              'data_access_addr1' => '0x00000000',
                              'data_access_enable3' => '0x0',
                              'data_access_enable6' => '0x0',
                              'inst_access_addr4' => '0x00000000',
                              'data_access_addr6' => '0x00000000',
                              'data_access_enable2' => '0x0',
                              'data_access_enable4' => '0x0',
                              'data_access_addr5' => '0x00000000'
                            },
            'icache' => {
                          'icache_tag_high' => 12,
                          'icache_data_cell' => 'ram_256x34',
                          'icache_tag_depth' => 64,
                          'icache_enable' => '1',
                          'icache_tag_low' => '6',
                          'icache_ic_index' => 8,
                          'icache_taddr_high' => 5,
                          'icache_ic_depth' => 8,
                          'icache_size' => 16,
                          'icache_ic_rows' => '256',
                          'icache_tag_cell' => 'ram_64x21'
                        },
            'nmi_vec' => '0x11110000',
            'btb' => {
                       'btb_index1_lo' => '4',
                       'btb_size' => 32,
                       'btb_addr_lo' => '4',
                       'btb_index2_hi' => 7,
                       'btb_index2_lo' => 6,
                       'btb_btag_fold' => 1,
                       'btb_addr_hi' => 5,
                       'btb_index1_hi' => 5,
                       'btb_array_depth' => 4,
                       'btb_btag_size' => 9,
                       'btb_index3_lo' => 8,
                       'btb_index3_hi' => 9
                     },
            'testbench' => {
                             'ext_datawidth' => '64',
                             'datawidth' => '64',
                             'build_axi4' => '1',
                             'ext_addrwidth' => '32',
                             'assert_on' => '',
                             'lderr_rollback' => '1',
                             'clock_period' => '100',
                             'SDVT_AHB' => '1',
                             'CPU_TOP' => '`RV_TOP.swerv',
                             'RV_TOP' => '`TOP.rvtop',
                             'TOP' => 'tb_top',
                             'sterr_rollback' => '0'
                           },
            'tec_rv_icg' => 'clockhdr',
            'num_mmode_perf_regs' => '4',
            'numiregs' => '32',
            'dccm' => {
                        'dccm_region' => '0xf',
                        'dccm_width_bits' => 2,
                        'dccm_bank_bits' => 3,
                        'lsu_sb_bits' => 16,
                        'dccm_byte_width' => '4',
                        'dccm_fdata_width' => 39,
                        'dccm_sadr' => '0xf0040000',
                        'dccm_data_width' => 32,
                        'dccm_num_banks_8' => '',
                        'dccm_size' => 64,
                        'dccm_bits' => 16,
                        'dccm_size_64' => '',
                        'dccm_reserved' => '0x1000',
                        'dccm_enable' => '1',
                        'dccm_rows' => '2048',
                        'dccm_ecc_width' => 7,
                        'dccm_num_banks' => '8',
                        'dccm_index_bits' => 11,
                        'dccm_offset' => '0x40000',
                        'dccm_eadr' => '0xf004ffff',
                        'dccm_data_cell' => 'ram_2048x39'
                      },
            'regwidth' => '32',
            'harts' => 1,
            'verilator' => '',
            'core' => {
                        'fpga_optimize' => 1,
                        'lsu_stbuf_depth' => '8',
                        'lsu_num_nbload' => '8',
                        'dec_instbuf_depth' => '4',
                        'lsu_num_nbload_width' => '3',
                        'dma_buf_depth' => '4'
                      },
            'retstack' => {
                            'ret_stack_size' => '4'
                          },
            'csr' => {
                       'dicawics' => {
                                       'debug' => 'true',
                                       'mask' => '0x0130fffc',
                                       'exists' => 'true',
                                       'reset' => '0x0',
                                       'number' => '0x7c8',
                                       'comment' => 'Cache diagnostics.'
                                     },
                       'mhpmcounter3h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'pmpcfg3' => {
                                      'exists' => 'false'
                                    },
                       'mfdc' => {
                                   'reset' => '0x00070040',
                                   'number' => '0x7f9',
                                   'exists' => 'true',
                                   'mask' => '0x000727ff'
                                 },
                       'meicidpl' => {
                                       'exists' => 'true',
                                       'comment' => 'External interrupt claim id priority level.',
                                       'reset' => '0x0',
                                       'number' => '0xbcb',
                                       'mask' => '0xf'
                                     },
                       'mhpmcounter5' => {
                                           'reset' => '0x0',
                                           'exists' => 'true',
                                           'mask' => '0xffffffff'
                                         },
                       'mie' => {
                                  'mask' => '0x70000888',
                                  'reset' => '0x0',
                                  'exists' => 'true'
                                },
                       'dmst' => {
                                   'reset' => '0x0',
                                   'comment' => 'Memory synch trigger: Flush caches in debug mode.',
                                   'number' => '0x7c4',
                                   'exists' => 'true',
                                   'debug' => 'true',
                                   'mask' => '0x0'
                                 },
                       'mcounteren' => {
                                         'exists' => 'false'
                                       },
                       'meicurpl' => {
                                       'mask' => '0xf',
                                       'exists' => 'true',
                                       'reset' => '0x0',
                                       'number' => '0xbcc',
                                       'comment' => 'External interrupt current priority level.'
                                     },
                       'tselect' => {
                                      'mask' => '0x3',
                                      'reset' => '0x0',
                                      'exists' => 'true'
                                    },
                       'dicad0' => {
                                     'exists' => 'true',
                                     'reset' => '0x0',
                                     'comment' => 'Cache diagnostics.',
                                     'number' => '0x7c9',
                                     'debug' => 'true',
                                     'mask' => '0xffffffff'
                                   },
                       'pmpaddr2' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr4' => {
                                       'exists' => 'false'
                                     },
                       'mitctl0' => {
                                      'number' => '0x7d4',
                                      'reset' => '0x1',
                                      'exists' => 'true',
                                      'mask' => '0x00000007'
                                    },
                       'misa' => {
                                   'exists' => 'true',
                                   'reset' => '0x40001104',
                                   'mask' => '0x0'
                                 },
                       'instret' => {
                                      'exists' => 'false'
                                    },
                       'dicad1' => {
                                     'number' => '0x7ca',
                                     'reset' => '0x0',
                                     'comment' => 'Cache diagnostics.',
                                     'exists' => 'true',
                                     'debug' => 'true',
                                     'mask' => '0x3'
                                   },
                       'pmpaddr0' => {
                                       'exists' => 'false'
                                     },
                       'mitbnd1' => {
                                      'reset' => '0xffffffff',
                                      'number' => '0x7d6',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'pmpcfg1' => {
                                      'exists' => 'false'
                                    },
                       'mcpc' => {
                                   'mask' => '0x0',
                                   'exists' => 'true',
                                   'number' => '0x7c2',
                                   'reset' => '0x0'
                                 },
                       'mhpmevent6' => {
                                         'mask' => '0xffffffff',
                                         'exists' => 'true',
                                         'reset' => '0x0'
                                       },
                       'pmpaddr8' => {
                                       'exists' => 'false'
                                     },
                       'meipt' => {
                                    'mask' => '0xf',
                                    'reset' => '0x0',
                                    'number' => '0xbc9',
                                    'comment' => 'External interrupt priority threshold.',
                                    'exists' => 'true'
                                  },
                       'mstatus' => {
                                      'mask' => '0x88',
                                      'exists' => 'true',
                                      'reset' => '0x1800'
                                    },
                       'mhpmcounter4' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'mhpmcounter6' => {
                                           'mask' => '0xffffffff',
                                           'reset' => '0x0',
                                           'exists' => 'true'
                                         },
                       'mitcnt0' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7d2'
                                    },
                       'mvendorid' => {
                                        'reset' => '0x45',
                                        'exists' => 'true',
                                        'mask' => '0x0'
                                      },
                       'marchid' => {
                                      'exists' => 'true',
                                      'reset' => '0x0000000b',
                                      'mask' => '0x0'
                                    },
                       'mpmc' => {
                                   'exists' => 'true',
                                   'number' => '0x7c6',
                                   'reset' => '0x2',
                                   'comment' => 'FWHALT',
                                   'poke_mask' => '0x2',
                                   'mask' => '0x2'
                                 },
                       'mhpmevent5' => {
                                         'exists' => 'true',
                                         'reset' => '0x0',
                                         'mask' => '0xffffffff'
                                       },
                       'pmpaddr11' => {
                                        'exists' => 'false'
                                      },
                       'mip' => {
                                  'reset' => '0x0',
                                  'exists' => 'true',
                                  'poke_mask' => '0x70000888',
                                  'mask' => '0x0'
                                },
                       'mimpid' => {
                                     'reset' => '0x6',
                                     'exists' => 'true',
                                     'mask' => '0x0'
                                   },
                       'pmpaddr7' => {
                                       'exists' => 'false'
                                     },
                       'mhpmcounter5h' => {
                                            'exists' => 'true',
                                            'reset' => '0x0',
                                            'mask' => '0xffffffff'
                                          },
                       'mhpmevent4' => {
                                         'reset' => '0x0',
                                         'exists' => 'true',
                                         'mask' => '0xffffffff'
                                       },
                       'pmpaddr3' => {
                                       'exists' => 'false'
                                     },
                       'dcsr' => {
                                   'mask' => '0x00008c04',
                                   'poke_mask' => '0x00008dcc',
                                   'reset' => '0x40000003',
                                   'exists' => 'true'
                                 },
                       'mhpmcounter3' => {
                                           'mask' => '0xffffffff',
                                           'exists' => 'true',
                                           'reset' => '0x0'
                                         },
                       'pmpaddr15' => {
                                        'exists' => 'false'
                                      },
                       'dicago' => {
                                     'mask' => '0x0',
                                     'debug' => 'true',
                                     'exists' => 'true',
                                     'reset' => '0x0',
                                     'number' => '0x7cb',
                                     'comment' => 'Cache diagnostics.'
                                   },
                       'pmpaddr6' => {
                                       'exists' => 'false'
                                     },
                       'mgpmc' => {
                                    'mask' => '0x1',
                                    'exists' => 'true',
                                    'reset' => '0x1',
                                    'number' => '0x7d0'
                                  },
                       'mitctl1' => {
                                      'reset' => '0x1',
                                      'number' => '0x7d7',
                                      'exists' => 'true',
                                      'mask' => '0x00000007'
                                    },
                       'pmpcfg2' => {
                                      'exists' => 'false'
                                    },
                       'pmpaddr1' => {
                                       'exists' => 'false'
                                     },
                       'mcgc' => {
                                   'mask' => '0x000001ff',
                                   'exists' => 'true',
                                   'number' => '0x7f8',
                                   'reset' => '0x0',
                                   'poke_mask' => '0x000001ff'
                                 },
                       'pmpaddr12' => {
                                        'exists' => 'false'
                                      },
                       'pmpaddr10' => {
                                        'exists' => 'false'
                                      },
                       'meicpct' => {
                                      'mask' => '0x0',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0xbca',
                                      'comment' => 'External claim id/priority capture.'
                                    },
                       'pmpaddr9' => {
                                       'exists' => 'false'
                                     },
                       'pmpcfg0' => {
                                      'exists' => 'false'
                                    },
                       'mitbnd0' => {
                                      'number' => '0x7d3',
                                      'reset' => '0xffffffff',
                                      'exists' => 'true',
                                      'mask' => '0xffffffff'
                                    },
                       'miccmect' => {
                                       'exists' => 'true',
                                       'number' => '0x7f1',
                                       'reset' => '0x0',
                                       'mask' => '0xffffffff'
                                     },
                       'mdccmect' => {
                                       'mask' => '0xffffffff',
                                       'reset' => '0x0',
                                       'number' => '0x7f2',
                                       'exists' => 'true'
                                     },
                       'mcountinhibit' => {
                                            'exists' => 'false'
                                          },
                       'micect' => {
                                     'mask' => '0xffffffff',
                                     'exists' => 'true',
                                     'number' => '0x7f0',
                                     'reset' => '0x0'
                                   },
                       'mhpmcounter6h' => {
                                            'reset' => '0x0',
                                            'exists' => 'true',
                                            'mask' => '0xffffffff'
                                          },
                       'mhpmcounter4h' => {
                                            'mask' => '0xffffffff',
                                            'exists' => 'true',
                                            'reset' => '0x0'
                                          },
                       'mhpmevent3' => {
                                         'mask' => '0xffffffff',
                                         'exists' => 'true',
                                         'reset' => '0x0'
                                       },
                       'time' => {
                                   'exists' => 'false'
                                 },
                       'cycle' => {
                                    'exists' => 'false'
                                  },
                       'pmpaddr5' => {
                                       'exists' => 'false'
                                     },
                       'pmpaddr13' => {
                                        'exists' => 'false'
                                      },
                       'mitcnt1' => {
                                      'mask' => '0xffffffff',
                                      'exists' => 'true',
                                      'reset' => '0x0',
                                      'number' => '0x7d5'
                                    },
                       'pmpaddr14' => {
                                        'exists' => 'false'
                                      }
                     },
            'bus' => {
                       'lsu_bus_tag' => 4,
                       'dma_bus_tag' => '1',
                       'ifu_bus_tag' => '3',
                       'sb_bus_tag' => '1'
                     },
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
                            }
                          ],
            'max_mmode_perf_event' => '50'
          );
1;
