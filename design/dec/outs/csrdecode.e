in=csrdecode
out=csrdecode.out
view=csr
.i 12
.o 75
.ilb  dec_csr_rdaddr_d[11] dec_csr_rdaddr_d[10] dec_csr_rdaddr_d[9] dec_csr_rdaddr_d[8] dec_csr_rdaddr_d[7] dec_csr_rdaddr_d[6] dec_csr_rdaddr_d[5] dec_csr_rdaddr_d[4] dec_csr_rdaddr_d[3] dec_csr_rdaddr_d[2] dec_csr_rdaddr_d[1] dec_csr_rdaddr_d[0]
.ob  csr_misa csr_mvendorid csr_marchid csr_mimpid csr_mhartid csr_mstatus csr_mtvec csr_mip csr_mie csr_mcyclel csr_mcycleh csr_minstretl csr_minstreth csr_mscratch csr_mepc csr_mcause csr_mtval csr_mrac csr_dmst csr_mdeau csr_mdseac csr_meihap csr_meivt csr_meipt csr_meicpct csr_meicurpl csr_meicidpl csr_dcsr csr_fcsr csr_mpmc csr_mcgc csr_mcpc csr_mfdc csr_dpc csr_mtsel csr_mtdata1 csr_mtdata2 csr_mhpmc3 csr_mhpmc4 csr_mhpmc5 csr_mhpmc6 csr_mhpmc3h csr_mhpmc4h csr_mhpmc5h csr_mhpmc6h csr_mhpme3 csr_mhpme4 csr_mhpme5 csr_mhpme6 csr_mgpmc csr_mitctl0 csr_mitctl1 csr_mitb0 csr_mitb1 csr_mitcnt0 csr_mitcnt1 csr_perfva csr_perfvb csr_perfvc csr_perfvd csr_perfve csr_perfvf csr_perfvg csr_perfvh csr_perfvi csr_micect csr_miccmect csr_mdccmect csr_dicawics csr_dicad0 csr_dicad1 csr_dicago valid_only presync postsync
.type fr
# csr_dcsr
011110110000 000000000000000000000000000100000000000000000000000000000000000000000000000
# csr_dicad0
011111001001 000000000000000000000000000000000000000000000000000000000000000000000100000
# csr_dicad1
011111001010 000000000000000000000000000000000000000000000000000000000000000000000010000
# csr_dicago
011111001011 000000000000000000000000000000000000000000000000000000000000000000000001000
# csr_dicawics
011111001000 000000000000000000000000000000000000000000000000000000000000000000001000000
# csr_dmst
011111000100 000000000000000000100000000000000000000000000000000000000000000000000000001
# csr_dpc
011110110001 000000000000000000000000000000000100000000000000000000000000000000000000000
# csr_fcsr
111111010000 000000000000000000000000000010000000000000000000000000000000000000000000000
# csr_marchid
111100010010 001000000000000000000000000000000000000000000000000000000000000000000000000
# csr_mcause
001101000010 000000000000000100000000000000000000000000000000000000000000000000000000000
# csr_mcgc
011111111000 000000000000000000000000000000100000000000000000000000000000000000000000000
# csr_mcpc
011111000010 000000000000000000000000000000010000000000000000000000000000000000000000011
# csr_mcycleh
101110000000 000000000010000000000000000000000000000000000000000000000000000000000000000
# csr_mcyclel
101100000000 000000000100000000000000000000000000000000000000000000000000000000000000000
# csr_mdccmect
011111110010 000000000000000000000000000000000000000000000000000000000000000000010000000
# csr_mdeau
101111000000 000000000000000000010000000000000000000000000000000000000000000000000000000
# csr_mdseac
111111000000 000000000000000000001000000000000000000000000000000000000000000000000000000
# csr_meicidpl
101111001011 000000000000000000000000001000000000000000000000000000000000000000000000000
# csr_meicpct
101111001010 000000000000000000000000100000000000000000000000000000000000000000000000000
# csr_meicurpl
101111001100 000000000000000000000000010000000000000000000000000000000000000000000000000
# csr_meihap
111111001000 000000000000000000000100000000000000000000000000000000000000000000000000000
# csr_meipt
101111001001 000000000000000000000001000000000000000000000000000000000000000000000000000
# csr_meivt
101111001000 000000000000000000000010000000000000000000000000000000000000000000000000000
# csr_mepc
001101000001 000000000000001000000000000000000000000000000000000000000000000000000000001
# csr_mfdc
011111111001 000000000000000000000000000000001000000000000000000000000000000000000000011
# csr_mgpmc
011111010000 000000000000000000000000000000000000000000000000010000000000000000000000011
# csr_mhartid
111100010100 000010000000000000000000000000000000000000000000000000000000000000000000000
# csr_mhpmc3
101100000011 000000000000000000000000000000000000010000000000000000000000000000000000010
# csr_mhpmc3h
101110000011 000000000000000000000000000000000000000001000000000000000000000000000000010
# csr_mhpmc4
101100000100 000000000000000000000000000000000000001000000000000000000000000000000000010
# csr_mhpmc4h
101110000100 000000000000000000000000000000000000000000100000000000000000000000000000010
# csr_mhpmc5
101100000101 000000000000000000000000000000000000000100000000000000000000000000000000010
# csr_mhpmc5h
101110000101 000000000000000000000000000000000000000000010000000000000000000000000000010
# csr_mhpmc6
101100000110 000000000000000000000000000000000000000010000000000000000000000000000000010
# csr_mhpmc6h
101110000110 000000000000000000000000000000000000000000001000000000000000000000000000010
# csr_mhpme3
001100100011 000000000000000000000000000000000000000000000100000000000000000000000000000
# csr_mhpme4
001100100100 000000000000000000000000000000000000000000000010000000000000000000000000000
# csr_mhpme5
001100100101 000000000000000000000000000000000000000000000001000000000000000000000000000
# csr_mhpme6
001100100110 000000000000000000000000000000000000000000000000100000000000000000000000000
# csr_miccmect
011111110001 000000000000000000000000000000000000000000000000000000000000000000100000000
# csr_micect
011111110000 000000000000000000000000000000000000000000000000000000000000000001000000000
# csr_mie
001100000100 000000001000000000000000000000000000000000000000000000000000000000000000000
# csr_mimpid
111100010011 000100000000000000000000000000000000000000000000000000000000000000000000000
# csr_minstreth
101110000010 000000000000100000000000000000000000000000000000000000000000000000000000010
# csr_minstretl
101100000010 000000000001000000000000000000000000000000000000000000000000000000000000010
# csr_mip
001101000100 000000010000000000000000000000000000000000000000000000000000000000000000000
# csr_misa
001100000001 100000000000000000000000000000000000000000000000000000000000000000000000000
# csr_mitb0
011111010011 000000000000000000000000000000000000000000000000000010000000000000000000000
# csr_mitb1
011111010110 000000000000000000000000000000000000000000000000000001000000000000000000000
# csr_mitcnt0
011111010010 000000000000000000000000000000000000000000000000000000100000000000000000000
# csr_mitcnt1
011111010101 000000000000000000000000000000000000000000000000000000010000000000000000000
# csr_mitctl0
011111010100 000000000000000000000000000000000000000000000000001000000000000000000000000
# csr_mitctl1
011111010111 000000000000000000000000000000000000000000000000000100000000000000000000000
# csr_mpmc
011111000110 000000000000000000000000000001000000000000000000000000000000000000000000001
# csr_mrac
011111000000 000000000000000001000000000000000000000000000000000000000000000000000000001
# csr_mscratch
001101000000 000000000000010000000000000000000000000000000000000000000000000000000000000
# csr_mstatus
001100000000 000001000000000000000000000000000000000000000000000000000000000000000000001
# csr_mtdata1
011110100001 000000000000000000000000000000000001000000000000000000000000000000000000011
# csr_mtdata2
011110100010 000000000000000000000000000000000000100000000000000000000000000000000000001
# csr_mtsel
011110100000 000000000000000000000000000000000010000000000000000000000000000000000000000
# csr_mtval
001101000011 000000000000000010000000000000000000000000000000000000000000000000000000000
# csr_mtvec
001100000101 000000100000000000000000000000000000000000000000000000000000000000000000001
# csr_mvendorid
111100010001 010000000000000000000000000000000000000000000000000000000000000000000000000
# csr_perfva
101100000111 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfvb
101100001--- 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfvc
10110001---- 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfvd
101110000111 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfve
101110001--- 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfvf
10111001---- 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfvg
001100100111 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfvh
001100101--- 000000000000000000000000000000000000000000000000000000000000000000000000100
# csr_perfvi
00110011---- 000000000000000000000000000000000000000000000000000000000000000000000000100
