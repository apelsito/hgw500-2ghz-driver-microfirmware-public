/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a94e, function FUN_CODE_a94e */

void FUN_CODE_a94e(char param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  cVar3 = BANK0_R7;
  bVar2 = FUN_CODE_4fd7(&UNK_CODE_9e4e);
  if ((bVar2 & 1) == 0) {
    if ((DAT_EXTMEM_9e4d & 1) == 0) {
      DAT_EXTMEM_9e67 = 2;
      DAT_EXTMEM_9e66 = '\x01';
      param_1 = param_1 + '\x02';
    }
    else {
      DAT_EXTMEM_9e67 = DAT_EXTMEM_9e6f + 4;
      DAT_EXTMEM_9e66 = DAT_EXTMEM_9e6f + '\x03';
    }
    if (DAT_EXTMEM_9e65 < DAT_EXTMEM_9e66 + 1U) {
      DAT_EXTMEM_9e6a = (DAT_EXTMEM_9e67 - param_2) + cVar3;
      DAT_EXTMEM_9e5a = param_1;
    }
    else {
      DAT_EXTMEM_9e5a = (param_2 - DAT_EXTMEM_9e66) + param_1;
      DAT_EXTMEM_9e6a = DAT_EXTMEM_9e67 - DAT_EXTMEM_9e66;
    }
    cVar3 = '\0';
    pcVar4 = &DAT_EXTMEM_9e6a;
    bVar2 = DAT_EXTMEM_9e67;
    FUN_CODE_aa13(0xf5 < DAT_EXTMEM_9e67,DAT_EXTMEM_9e67 + 10);
    if (-1 < cVar3) {
      *pcVar4 = bVar2 + 10;
    }
    cVar3 = '\0';
    pcVar4 = &DAT_EXTMEM_9e5a;
    bVar2 = DAT_EXTMEM_9e6a;
    FUN_CODE_aa13(0xdc < DAT_EXTMEM_9e6a,DAT_EXTMEM_9e6a + 0x23);
    if (-1 < cVar3) {
      *pcVar4 = bVar2 + 0x23;
    }
    DAT_EXTMEM_9e5e = 0;
    DAT_EXTMEM_9e5f = DAT_EXTMEM_9e6a;
    bVar2 = DAT_EXTMEM_0558 ^ DAT_EXTMEM_9e6a;
    if (bVar2 == 0) {
      bVar2 = 0;
    }
    if (bVar2 != 0) {
      FUN_CODE_ac04();
    }
    FUN_CODE_aa1e();
  }
  else {
    DAT_EXTMEM_9e4f = DAT_EXTMEM_9e4f | 1;
  }
  EA = cVar1 != '\0';
  return;
}


