/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b559, function FUN_CODE_b559 */

void FUN_CODE_b559(void)

{
  if ((DAT_EXTMEM_9e48 & 1) != 0) {
    DAT_EXTMEM_9e49 = 0;
    DAT_EXTMEM_9e4a = 0;
  }
  return;
}


