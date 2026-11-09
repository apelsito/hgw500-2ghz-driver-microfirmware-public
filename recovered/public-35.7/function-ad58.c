/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:ad58, function FUN_CODE_ad58 */

void FUN_CODE_ad58(undefined1 param_1)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if ((DAT_EXTMEM_9e4f >> 1 & 1) != 0) {
    DAT_EXTMEM_a132 = 0x1e;
    DAT_EXTMEM_a140 = 1;
    DAT_EXTMEM_a134 = param_1;
    FUN_CODE_5575(0x32,0xa1,1,DAT_EXTMEM_9e4f);
    FUN_CODE_55d8(4);
  }
  EA = cVar1 != '\0';
  return;
}


