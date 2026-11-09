/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6e36, function FUN_CODE_6e36 */

void FUN_CODE_6e36(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_0101 = DAT_EXTMEM_0101 | 2;
  DAT_EXTMEM_0100 = 0xff;
  DAT_EXTMEM_06b7 = 9;
  DAT_EXTMEM_06b4 = 0x86;
  if ((DAT_EXTMEM_a3bb >> 3 & 1) != 0) {
    DAT_EXTMEM_0778 = 3;
  }
  if (((DAT_EXTMEM_a3d8 & 1) != 1) && ((DAT_EXTMEM_a3bb >> 1 & 1) != 0)) {
    DAT_EXTMEM_a5fc = DAT_EXTMEM_a3fc == '\0';
    if ((DAT_EXTMEM_a3bb >> 5 & 1) == 0) {
      DAT_EXTMEM_a5fd = 2;
    }
    else {
      DAT_EXTMEM_a5fd = 1;
    }
    FUN_CODE_6996(0xa5fc);
  }
  bVar2 = 2;
  FUN_CODE_4b22(2);
  FUN_CODE_4bde(bVar2 | 1,2);
  EA = cVar1 != '\0';
  return;
}


