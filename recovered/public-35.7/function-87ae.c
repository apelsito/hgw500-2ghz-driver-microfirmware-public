/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:87ae, function FUN_CODE_87ae */

void FUN_CODE_87ae(undefined1 param_1)

{
  undefined1 uVar1;
  
  if (DAT_EXTMEM_041d == '\0') {
    DAT_EXTMEM_a19f = 9;
    uVar1 = DAT_EXTMEM_9d44;
    FUN_CODE_a078(0x18,0);
    DAT_EXTMEM_a1d8 = param_1;
    DAT_EXTMEM_a1d9 = uVar1;
    FUN_CODE_87d8();
  }
  return;
}


