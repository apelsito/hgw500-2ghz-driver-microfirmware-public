/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b751, function FUN_CODE_b751 */

void FUN_CODE_b751(undefined1 param_1)

{
  DAT_EXTMEM_0584 = param_1;
  BANK3_R5 = BANK3_R5 | 0x20;
  bEXTMEM0138 = BANK3_R5;
  return;
}


