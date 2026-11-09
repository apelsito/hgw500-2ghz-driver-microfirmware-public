/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:67c2, function FUN_CODE_67c2 */

void FUN_CODE_67c2(void)

{
  if ((DAT_EXTMEM_a30e & 1) != 0) {
    DAT_EXTMEM_a30f = 0;
    DAT_EXTMEM_a310 = 0;
  }
  return;
}


