/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:9ea0, function FUN_CODE_9ea0 */

void FUN_CODE_9ea0(void)

{
  bool bVar1;
  
  DAT_EXTMEM_a4f5 = 0;
  if ((DAT_EXTMEM_a3bd & 1) != 0) {
    bVar1 = (DAT_EXTMEM_a3c1 >> 6 & 1) == 0;
    if (bVar1) {
      FUN_CODE_5fc4(0xa3be,0);
    }
    else {
      FUN_CODE_5fc8(DAT_EXTMEM_a3c9);
      DAT_EXTMEM_0692 = 4;
      DAT_EXTMEM_a3c5 = 1;
      DAT_EXTMEM_a3d2 = 0;
    }
    DAT_EXTMEM_a3cf = 1;
    DAT_EXTMEM_a3d0 = bVar1;
    if (DAT_EXTMEM_a3bc != '\0') {
      FUN_CODE_53ba(5,0x6f);
      return;
    }
    FUN_CODE_53ba(0,0);
    if (((DAT_EXTMEM_a3bd >> 5 & 1) != 1) && ((DAT_EXTMEM_a3bd >> 2 & 1) != 0)) {
      FUN_CODE_979e();
    }
  }
  return;
}


