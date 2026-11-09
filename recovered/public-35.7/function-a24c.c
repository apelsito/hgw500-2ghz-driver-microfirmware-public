/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a24c, function FUN_CODE_a24c */

void FUN_CODE_a24c(undefined1 param_1)

{
  undefined1 uVar1;
  
  DAT_EXTMEM_a19f = 0xb;
  uVar1 = DAT_EXTMEM_9d46;
  FUN_CODE_a078(8,1);
  DAT_EXTMEM_a1a9 = param_1;
  DAT_EXTMEM_a1aa = uVar1;
  FUN_CODE_6796(param_1,uVar1,DAT_EXTMEM_a1a8);
  return;
}


