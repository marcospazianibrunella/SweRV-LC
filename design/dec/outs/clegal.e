in=cdecode
out=cdecode.out
view=rv32c
.i 16
.o 1
.ilb  i[15] i[14] i[13] i[12] i[11] i[10] i[9] i[8] i[7] i[6] i[5] i[4] i[3] i[2] i[1] i[0]
.ob legal
.type fd
# c.add0
1001-----1----10 1
# c.add1
1001------1---10 1
# c.add2
1001-------1--10 1
# c.add3
1001--------1-10 1
# c.add4
1001---------110 1
# c.addi
000-----------01 1
# c.addi16sp0
011100010-----01 1
# c.addi16sp1
011-000101----01 1
# c.addi16sp2
011-00010-1---01 1
# c.addi16sp3
011-00010--1--01 1
# c.addi16sp4
011-00010---1-01 1
# c.addi16sp5
011-00010----101 1
# c.addi4spn0
0001----------00 1
# c.addi4spn1
000-1---------00 1
# c.addi4spn2
000--1--------00 1
# c.addi4spn3
000---1-------00 1
# c.addi4spn4
000----1------00 1
# c.addi4spn5
000-----1-----00 1
# c.addi4spn6
000------1----00 1
# c.addi4spn7
000-------1---00 1
# c.addiw
001-----------01 1
# c.addw
100111---01---01 1
# c.and
100011---11---01 1
# c.andi
100-10--------01 1
# c.beqz
110-----------01 1
# c.bnez
111-----------01 1
# c.ebreak
1001000000000010 1
# c.j
101-----------01 1
# c.jalr0
10011----0000010 1
# c.jalr1
1001-1---0000010 1
# c.jalr2
1001--1--0000010 1
# c.jalr3
1001---1-0000010 1
# c.jalr4
1001----10000010 1
# c.jr0
10001----0000010 1
# c.jr1
1000-1---0000010 1
# c.jr2
1000--1--0000010 1
# c.jr3
1000---1-0000010 1
# c.jr4
1000----10000010 1
# c.ld
011-----------00 1
# c.ldsp
011-----------10 1
# c.li
010-----------01 1
# c.lui0
01111---------01 1
# c.lui1
0111-1--------01 1
# c.lui10
011-1-----1---01 1
# c.lui11
011--1----1---01 1
# c.lui12
011---1---1---01 1
# c.lui13
011----0--1---01 1
# c.lui14
011-----1-1---01 1
# c.lui15
011-1------1--01 1
# c.lui16
011--1-----1--01 1
# c.lui17
011---1----1--01 1
# c.lui18
011----0---1--01 1
# c.lui19
011-----1--1--01 1
# c.lui2
0111--1-------01 1
# c.lui20
011-1-------1-01 1
# c.lui21
011--1------1-01 1
# c.lui22
011---1-----1-01 1
# c.lui23
011----0----1-01 1
# c.lui24
011-----1---1-01 1
# c.lui25
011-1--------101 1
# c.lui26
011--1-------101 1
# c.lui27
011---1------101 1
# c.lui28
011----0-----101 1
# c.lui29
011-----1----101 1
# c.lui3
0111---0------01 1
# c.lui4
0111----1-----01 1
# c.lui5
011-1----1----01 1
# c.lui6
011--1---1----01 1
# c.lui7
011---1--1----01 1
# c.lui8
011----0-1----01 1
# c.lui9
011-----11----01 1
# c.lw
010-----------00 1
# c.lwsp
010-----------10 1
# c.mv0
1000-----1----10 1
# c.mv1
1000------1---10 1
# c.mv2
1000-------1--10 1
# c.mv3
1000--------1-10 1
# c.mv4
1000---------110 1
# c.or
100011---10---01 1
# c.sd
111-----------00 1
# c.sdsp
111-----------10 1
# c.slli
000-----------10 1
# c.srai
100-01--------01 1
# c.srli
100-00--------01 1
# c.sub
100011---00---01 1
# c.subw
100111---00---01 1
# c.sw
110-----------00 1
# c.swsp
110-----------10 1
# c.xor
100011---01---01 1
