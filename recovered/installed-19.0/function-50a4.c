/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:50a4, function FUN_CODE_50a4 */

void FUN_CODE_50a4(void)

{
  if ((DAT_EXTMEM_a30e & 1) != 0) {
    FUN_CODE_b7ae(DAT_EXTMEM_a319);
    return;
  }
  FUN_CODE_50bd(1,DAT_EXTMEM_a319);
  return;
}


