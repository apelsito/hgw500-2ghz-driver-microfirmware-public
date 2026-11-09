/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:67cf, function FUN_CODE_67cf */

void FUN_CODE_67cf(undefined1 param_1)

{
  byte *pbVar1;
  
  pbVar1 = &DAT_EXTMEM_8103;
  FUN_CODE_4889(param_1,0x10);
  *pbVar1 = *pbVar1 | 0x40;
  return;
}


