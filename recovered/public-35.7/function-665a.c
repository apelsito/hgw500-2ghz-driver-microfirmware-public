/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:665a, function FUN_CODE_665a */

void FUN_CODE_665a(byte *param_1)

{
  byte bVar1;
  
  FUN_CODE_8eb6(0x2e);
  bVar1 = FUN_CODE_6640(2);
  *param_1 = bVar1 & 0xbf;
  DAT_EXTMEM_9e4c = 2;
  return;
}


