/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:901d, function FUN_CODE_901d */

void FUN_CODE_901d(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (DAT_EXTMEM_9d08 != '\0') {
    DAT_EXTMEM_a0c1 = DAT_EXTMEM_a0b4;
    DAT_EXTMEM_a0c2 = DAT_EXTMEM_a0b3;
    DAT_EXTMEM_a0c3 = DAT_EXTMEM_a0b6;
    DAT_EXTMEM_a0c4 = DAT_EXTMEM_a0b5;
    DAT_EXTMEM_a0c5 = DAT_EXTMEM_a0b8;
    DAT_EXTMEM_a0c6 = DAT_EXTMEM_a0b7;
    DAT_EXTMEM_a0c7 = DAT_EXTMEM_a0ba;
    DAT_EXTMEM_a0c8 = DAT_EXTMEM_a0b9;
    DAT_EXTMEM_a0bb = 0xfe;
    DAT_EXTMEM_a0c9 = 0xc;
    DAT_EXTMEM_a0bd = param_4;
    DAT_EXTMEM_a0be = param_3;
    DAT_EXTMEM_a0bf = param_2;
    DAT_EXTMEM_a0c0 = param_1;
    FUN_CODE_8ff7(0xbb,0xa0,1,DAT_EXTMEM_9d08);
  }
  EA = cVar1 != '\0';
  return;
}


