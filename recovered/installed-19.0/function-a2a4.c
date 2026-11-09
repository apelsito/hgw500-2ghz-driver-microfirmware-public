/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a2a4, function FUN_CODE_a2a4 */

void FUN_CODE_a2a4(void)

{
  FUN_CODE_a2ae(2,2);
  BANK2_R7 = BANK2_R7 & 0xfe;
  DAT_EXTMEM_0132 = BANK2_R7;
  return;
}


