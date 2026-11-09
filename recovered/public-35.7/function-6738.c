/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6738, function FUN_CODE_6738 */

undefined1 FUN_CODE_6738(undefined1 param_1)

{
  undefined1 uVar1;
  
  DAT_EXTMEM_a19f = 10;
  uVar1 = DAT_EXTMEM_9d45;
  FUN_CODE_a078(DAT_EXTMEM_a17c,1);
  DAT_EXTMEM_a17d = param_1;
  DAT_EXTMEM_a17e = uVar1;
  FUN_CODE_6796(param_1,uVar1,DAT_EXTMEM_a17b);
  return DAT_EXTMEM_9f17;
}


