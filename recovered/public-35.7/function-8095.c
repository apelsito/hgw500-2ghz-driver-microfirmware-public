/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8095, function FUN_CODE_8095 */

void FUN_CODE_8095(byte *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  *param_1 = *param_1 | 2;
  DAT_EXTMEM_a179 = 0;
  DAT_EXTMEM_a17a = DAT_EXTMEM_9eb0;
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a175 = 1;
  DAT_EXTMEM_a176 = 0x54;
  DAT_INTMEM_3b = 0;
  DAT_INTMEM_3c = DAT_EXTMEM_9eb0;
  func_0x369d(0,0);
  puVar2 = &DAT_EXTMEM_a175;
  FUN_CODE_9f81();
  puVar2[3] = 5;
  EA = cVar1 != '\0';
  return;
}


