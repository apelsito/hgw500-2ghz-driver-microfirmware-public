/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8f0e, function FUN_CODE_8f0e */

byte FUN_CODE_8f0e(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a1de = DAT_EXTMEM_a17b;
  bVar2 = DAT_EXTMEM_a17b - 2;
  if ((DAT_EXTMEM_a17b < 2) &&
     (bVar2 = DAT_EXTMEM_041c ^ DAT_EXTMEM_9d45, (DAT_EXTMEM_041c ^ DAT_EXTMEM_9d45) == 0)) {
    if (DAT_EXTMEM_9e55 == 0xe) {
      bVar2 = DAT_EXTMEM_a17b;
      if (DAT_EXTMEM_a17b != 0) goto LAB_CODE_8f63;
      FUN_CODE_8f78();
      FUN_CODE_8f06();
      FUN_CODE_6292();
    }
    else {
      bVar2 = DAT_EXTMEM_9e55 ^ 6;
      if (((DAT_EXTMEM_9e55 ^ 6) != 0) || (bVar2 = DAT_EXTMEM_a17b, DAT_EXTMEM_a17b == 0))
      goto LAB_CODE_8f63;
      FUN_CODE_8f70();
      FUN_CODE_bce6();
      DAT_EXTMEM_9e55 = 4;
    }
    bVar2 = FUN_CODE_58a2();
  }
LAB_CODE_8f63:
  EA = cVar1 != '\0';
  return bVar2;
}


