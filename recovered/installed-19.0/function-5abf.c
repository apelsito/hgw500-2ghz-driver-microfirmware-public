/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5abf, function FUN_CODE_5abf */

void FUN_CODE_5abf(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_INTMEM_3b = DAT_EXTMEM_a5a5;
  DAT_INTMEM_3c = DAT_EXTMEM_a5a6;
  DAT_EXTMEM_a5a1 = param_1;
  DAT_EXTMEM_a5a2 = param_2;
  func_0x369d();
  *(undefined1 *)(CONCAT11(DAT_EXTMEM_a5a1,DAT_EXTMEM_a5a2) + 3) = 5;
  EA = cVar1 != '\0';
  return;
}


