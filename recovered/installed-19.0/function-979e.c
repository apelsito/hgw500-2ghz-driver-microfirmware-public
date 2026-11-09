/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:979e, function FUN_CODE_979e */

void FUN_CODE_979e(undefined1 param_1)

{
  undefined1 uVar1;
  
  if (((DAT_EXTMEM_a3bb >> 4 & 1) != 1) && (DAT_EXTMEM_041d == '\0')) {
    uVar1 = DAT_EXTMEM_a19b;
    FUN_CODE_9588(0x18,0);
    DAT_EXTMEM_041f = 0x20;
    DAT_EXTMEM_a604 = param_1;
    DAT_EXTMEM_a605 = uVar1;
  }
  return;
}


