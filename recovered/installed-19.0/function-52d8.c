/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:52d8, function FUN_CODE_52d8 */

void FUN_CODE_52d8(char param_1)

{
  DAT_EXTMEM_a60d = param_1;
  FUN_CODE_6e36();
  if (DAT_EXTMEM_a60d != '\0') {
    FUN_CODE_53ba(0,0);
  }
  FUN_CODE_5300(4,1);
  DAT_EXTMEM_a312 = 4;
  return;
}


