/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8e33, function FUN_CODE_8e33 */

void FUN_CODE_8e33(byte param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined1 *puVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a111 = DAT_EXTMEM_0563;
  DAT_EXTMEM_a112 = DAT_EXTMEM_0562;
  cVar2 = DAT_EXTMEM_0561;
  bVar3 = DAT_EXTMEM_0560;
  if (BANK0_R7 == '\b') {
    bVar3 = DAT_EXTMEM_0558 + DAT_EXTMEM_0560;
    cVar2 = DAT_EXTMEM_0561 - ((CARRY1(DAT_EXTMEM_0558,DAT_EXTMEM_0560) << 7) >> 7);
    param_1 = DAT_EXTMEM_0558;
  }
  DAT_EXTMEM_a102 = 0x17;
  DAT_EXTMEM_a110 = 6;
  DAT_EXTMEM_a104 = BANK0_R7;
  puVar4 = &DAT_EXTMEM_9f17;
  FUN_CODE_7b93(DAT_EXTMEM_9f17 >> 1 & 7,0x1b,param_1,DAT_EXTMEM_9f17);
  DAT_EXTMEM_a105 = *puVar4;
  DAT_EXTMEM_a108 = DAT_EXTMEM_a112;
  DAT_EXTMEM_a109 = DAT_EXTMEM_a111;
  DAT_EXTMEM_a106 = bVar3;
  DAT_EXTMEM_a107 = cVar2;
  FUN_CODE_8ff7(2,0xa1,1);
  EA = cVar1 != '\0';
  return;
}


