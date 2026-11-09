/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a84f, function FUN_CODE_a84f */

void FUN_CODE_a84f(void)

{
  DAT_EXTMEM_9ed1 = DAT_EXTMEM_9ed1 & 0xe0;
  FUN_CODE_876e(DAT_EXTMEM_9ed6);
  FUN_CODE_840e(&UNK_CODE_9ed7);
  if (DAT_EXTMEM_9e52 == '\0') {
    FUN_CODE_5499();
    FUN_CODE_58a2();
  }
  return;
}


