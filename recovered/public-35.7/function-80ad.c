/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:80ad, function FUN_CODE_80ad */

void FUN_CODE_80ad(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_INTMEM_3b = DAT_EXTMEM_a179;
  DAT_INTMEM_3c = DAT_EXTMEM_a17a;
  DAT_EXTMEM_a175 = param_1;
  DAT_EXTMEM_a176 = param_2;
  func_0x369d();
  puVar2 = &DAT_EXTMEM_a175;
  FUN_CODE_9f81();
  puVar2[3] = 5;
  EA = cVar1 != '\0';
  return;
}


