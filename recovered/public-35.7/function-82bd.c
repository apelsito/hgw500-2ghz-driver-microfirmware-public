/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:82bd, function FUN_CODE_82bd */

void FUN_CODE_82bd(char param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a1b1 = 2;
  cVar4 = '\0';
  DAT_EXTMEM_a1b0 = param_1;
  FUN_CODE_87df();
  if ((DAT_EXTMEM_9eba & 1) == 0) {
    bVar5 = FUN_CODE_66a2(&UNK_CODE_9eb6);
    if ((bVar5 & 1) == 0) {
      if ((DAT_EXTMEM_9eb9 >> 4 & 1) == 0) {
        if ((DAT_EXTMEM_9eb9 >> 1 & 1) == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = 0;
        }
      }
      else if ((DAT_EXTMEM_9eb9 >> 2 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = 0;
      }
    }
    else {
      bVar5 = 0xd;
    }
  }
  else {
    bVar5 = cVar4 + 1;
  }
  FUN_CODE_876e();
  if (DAT_EXTMEM_a1b0 == '\x03') {
    pcVar7 = &DAT_EXTMEM_9eb8;
    FUN_CODE_82b5();
    *pcVar7 = *pcVar7 + '\x01';
  }
  bVar6 = FUN_CODE_4fd7(&UNK_CODE_9eb6);
  DAT_EXTMEM_a1b2 = (bVar6 & 1) == 0;
  bVar6 = FUN_CODE_a756();
  if ((bVar6 & 1) != 1) {
    if (DAT_EXTMEM_9ef7 == '\0') {
      DAT_EXTMEM_a1b1 = 1;
    }
    else {
      DAT_EXTMEM_a1b1 = 0;
    }
  }
  FUN_CODE_840e(0xa1b1);
  DAT_EXTMEM_9ec8 = 1;
  bVar6 = FUN_CODE_a713();
  if ((bVar6 & 1) == 0) {
    bVar6 = FUN_CODE_8737();
    if ((bVar6 & 1) == 0) {
      if ((DAT_EXTMEM_a1b0 == '\x03') && (DAT_EXTMEM_9e52 != '\0')) {
        uVar2 = 0;
        goto LAB_CODE_839c;
      }
    }
    else {
      DAT_EXTMEM_9ebc = DAT_EXTMEM_9ebc | 0x20;
      if (DAT_EXTMEM_9eb5 == '\0') {
        FUN_CODE_58a2();
        uVar2 = 1;
        bVar5 = 0xc;
      }
      else {
        uVar2 = 1;
LAB_CODE_839c:
        bVar5 = 4;
      }
      FUN_CODE_607e(uVar2);
    }
  }
  else if (DAT_EXTMEM_a1b0 == '\0') {
    FUN_CODE_58a3();
  }
  if (DAT_EXTMEM_9eb5 == '\0') {
    if (DAT_EXTMEM_a1b0 == '\0') {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      if (DAT_EXTMEM_a1b0 != '\x03') goto LAB_CODE_83e8;
      bVar6 = FUN_CODE_8748();
      if (((bVar6 & 1) != 1) && ((bVar5 >> 2 & 1) != 0)) {
        FUN_CODE_87ae();
      }
      uVar2 = 0;
      uVar3 = 0;
    }
  }
  else {
    if (DAT_EXTMEM_a1b0 == '\0') {
      uVar2 = 4;
    }
    else {
      if (DAT_EXTMEM_a1b0 != '\x03') goto LAB_CODE_83e8;
      uVar2 = 0xb;
    }
    uVar3 = 0x6f;
  }
  FUN_CODE_58a7(uVar2,uVar3,0xff);
LAB_CODE_83e8:
  bVar5 = FUN_CODE_4fd4();
  if ((bVar5 & 1) != 0) {
    FUN_CODE_8717(1);
  }
  if ((DAT_EXTMEM_9eba >> 1 & 1) != 0) {
    DAT_EXTMEM_06cd = DAT_EXTMEM_06cd | 0x10;
    DAT_EXTMEM_06cf = DAT_EXTMEM_06cf | 0x10;
  }
  EA = cVar1 != '\0';
  return;
}


