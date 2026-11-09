/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:aca1, function FUN_CODE_aca1 */

void FUN_CODE_aca1(void)

{
  if ((DAT_EXTMEM_9e48 & 1) != 0) {
    DAT_EXTMEM_9e49 = 1;
    if ((DAT_EXTMEM_9e48 >> 1 & 1) != 0) {
      FUN_CODE_b618(DAT_EXTMEM_9e48);
    }
  }
  FUN_CODE_ac1c();
  FUN_CODE_ad58(0);
  FUN_CODE_8752();
  FUN_CODE_58d3();
  return;
}


