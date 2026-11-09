/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b20c, function FUN_CODE_b20c */

void FUN_CODE_b20c(void)

{
  byte bVar1;
  byte bVar2;
  
  if ((DAT_EXTMEM_a28d == '\x01') && (DAT_EXTMEM_a317 != '\0')) {
    DAT_EXTMEM_0157 = 0;
    DAT_EXTMEM_013c = 2;
    DAT_EXTMEM_a313 = DAT_EXTMEM_a313 & 0xfb;
    bVar1 = DAT_EXTMEM_a31b & 0xfd;
    bVar2 = DAT_EXTMEM_a31b & 5;
    DAT_EXTMEM_a31b = bVar1;
    if (bVar2 == 0) {
      FUN_CODE_50a4();
    }
  }
  return;
}


