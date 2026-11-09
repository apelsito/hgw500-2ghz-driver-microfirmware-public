/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6633, function FUN_CODE_6633 */

void FUN_CODE_6633(void)

{
  if ((DAT_EXTMEM_a30e & 1) != 0) {
    DAT_EXTMEM_a30f = 1;
    if ((DAT_EXTMEM_a30e >> 1 & 1) != 0) {
      FUN_CODE_66d4(DAT_EXTMEM_a30e);
    }
  }
  FUN_CODE_baee();
  if ((DAT_EXTMEM_a3bd & 1) != 0) {
    FUN_CODE_9c04(0);
  }
  return;
}


