/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8752, function FUN_CODE_8752 */

void FUN_CODE_8752(void)

{
  if ((DAT_EXTMEM_9eb6 & 1) != 0) {
    FUN_CODE_a73c();
    FUN_CODE_82bd(0);
  }
  return;
}


