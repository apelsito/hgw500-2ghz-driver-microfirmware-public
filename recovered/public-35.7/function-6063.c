/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6063, function FUN_CODE_6063 */

void FUN_CODE_6063(void)

{
  if ((DAT_EXTMEM_9e48 & 1) != 0) {
    FUN_CODE_6684(DAT_EXTMEM_9e54);
    return;
  }
  FUN_CODE_607e(1,DAT_EXTMEM_9e54);
  return;
}


