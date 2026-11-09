/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:4b49, function FUN_CODE_4b49 */

void FUN_CODE_4b49(void)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_57f2();
  FUN_CODE_4bd4();
  FUN_CODE_4bc8();
  FUN_CODE_4bc8();
  DAT_EXTMEM_0100 = 0x3f;
  DAT_EXTMEM_0101 = DAT_EXTMEM_0101 & 0xfd;
  DAT_EXTMEM_0553 = DAT_EXTMEM_0553 | 0x20;
  if ((DAT_EXTMEM_a3bb >> 3 & 1) != 0) {
    DAT_EXTMEM_0778 = 1;
  }
  if ((DAT_EXTMEM_a3bb >> 1 & 1) != 0) {
    DAT_EXTMEM_a5fe = DAT_EXTMEM_a3fc != '\0';
    if ((DAT_EXTMEM_a3bb >> 5 & 1) == 0) {
      DAT_EXTMEM_a5ff = 2;
    }
    else {
      DAT_EXTMEM_a5ff = 0;
    }
    FUN_CODE_6996(0xa5fe);
    DAT_EXTMEM_0778 = 1;
  }
  if (DAT_EXTMEM_a3ba != '\0') {
    DAT_EXTMEM_a3ba = '\0';
  }
  EA = cVar1 != '\0';
  return;
}


