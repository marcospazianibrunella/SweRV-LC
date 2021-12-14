/*
 NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
 This is an automatically generated file by marco on Tue 14 Dec 2021 09:30:36 AM CET

 cmd:    swerv -target=default -set iccm_enable 

*/

OUTPUT_ARCH( "riscv" )
ENTRY(_start)

SECTIONS
{
  . = 0x80000000;
  .text.init .  : { *(.text.init) }
   . = 0xee000000 ;
  .text . : { *(.text) }
  _end = .;
  . = 0xd0580000;
  .data.io .  : { *(.data.io) }
    . = 0xf0040000 ;
  .data  :  ALIGN(0x800) { *(.*data) *(.rodata*)}
  .bss :  {BSS_START = .; *(.*bss)}
  BSS_END = .;
  STACK = ALIGN(16) + 0x8000;
    . = 0xfffffff0; .iccm.ctl . : { LONG(0xee000000); LONG(0xee07ffff) }
    . = 0xfffffff8; .data.ctl : { LONG(0xf0040000); LONG(STACK) }
}

