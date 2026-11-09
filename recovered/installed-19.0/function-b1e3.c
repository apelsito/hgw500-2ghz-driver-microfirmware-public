/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b1e3, function FUN_CODE_b1e3 */

void FUN_CODE_b1e3(void)

{
  if ((DAT_EXTMEM_a28d == '\x01') && (DAT_EXTMEM_a317 != '\0')) {
    DAT_EXTMEM_0157 = 0;
    DAT_EXTMEM_013c = 2;
    DAT_EXTMEM_a5a5 = 0;
    FUN_CODE_5ab7(DAT_EXTMEM_a3b7,&UNK_CODE_a5a6);
  }
  return;
}


