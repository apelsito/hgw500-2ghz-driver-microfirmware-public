/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b8f5, function FUN_CODE_b8f5 */

void FUN_CODE_b8f5(void)

{
  if ((DAT_EXTMEM_a313 >> 3 & 1) != 0) {
    DAT_EXTMEM_015b = 0;
  }
  DAT_EXTMEM_0692 = 2;
  DAT_EXTMEM_013c = 4;
  DAT_EXTMEM_a5a5 = 0;
  DAT_EXTMEM_a5a6 = DAT_EXTMEM_a3b8 >> 1;
  FUN_CODE_5abf(0,0,1,0x58);
  DAT_EXTMEM_a313 = DAT_EXTMEM_a313 | 8;
  return;
}


