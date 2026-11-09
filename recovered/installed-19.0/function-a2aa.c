/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a2aa, function FUN_CODE_a2aa */

void FUN_CODE_a2aa(void)

{
  BANK2_R7 = BANK2_R7 & 0xfe;
  DAT_EXTMEM_0132 = BANK2_R7;
  return;
}


