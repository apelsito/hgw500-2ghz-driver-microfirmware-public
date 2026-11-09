/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b813, function FUN_CODE_b813 */

void FUN_CODE_b813(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a0e6 = DAT_EXTMEM_a0e0;
  puVar3 = &DAT_EXTMEM_9392;
  DAT_EXTMEM_a0e3 = param_2;
  DAT_EXTMEM_a0e4 = param_3;
  DAT_EXTMEM_a0e5 = param_1;
  FUN_CODE_48f3(param_3,0x12);
  DAT_EXTMEM_a0e8 = *puVar3;
  bVar2 = FUN_CODE_4b44(param_3,0x12);
  DAT_EXTMEM_a0e9 = bVar2 >> 2 & 3;
  DAT_EXTMEM_a0e1 = 0xc;
  DAT_EXTMEM_a0ef = 7;
  FUN_CODE_8ff7(0xe1,0xa0,1,bVar2);
  EA = cVar1 != '\0';
  return;
}


