/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5575, function FUN_CODE_5575 */

void FUN_CODE_5575(void)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  
  uVar3 = BANK0_R1;
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  if (((DAT_EXTMEM_9e32 == '\0') && (DAT_EXTMEM_9e33 == '\t')) || (DAT_EXTMEM_9e33 == BANK0_R7)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    DAT_EXTMEM_01c1 = DAT_EXTMEM_01c1 | 2;
  }
  else {
    uVar6 = FUN_CODE_9f94(DAT_EXTMEM_9e33);
    uVar4 = BANK0_R1;
    cVar5 = '\x0f';
    BANK0_R1 = uVar3;
    func_0x0663(uVar4,uVar6,1,0);
    cVar7 = FUN_CODE_b398(&UNK_CODE_9e33);
    if (cVar7 == '\n') {
      cVar5 = '\x01';
    }
    if (cVar5 != '\0') {
      DAT_EXTMEM_9e33 = '\0';
    }
  }
  EA = cVar1 != '\0';
  return;
}


