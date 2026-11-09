/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5ab7, function FUN_CODE_5ab7 */

void FUN_CODE_5ab7(undefined1 param_1,undefined1 *param_2)

{
  char cVar1;
  
  *param_2 = param_1;
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a5a1 = 1;
  DAT_EXTMEM_a5a2 = 0x54;
  DAT_INTMEM_3b = DAT_EXTMEM_a5a5;
  DAT_INTMEM_3c = DAT_EXTMEM_a5a6;
  func_0x369d(0,0);
  *(undefined1 *)(CONCAT11(DAT_EXTMEM_a5a1,DAT_EXTMEM_a5a2) + 3) = 5;
  EA = cVar1 != '\0';
  return;
}


