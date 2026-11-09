/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:9c04, function FUN_CODE_9c04 */

void FUN_CODE_9c04(char param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  
  cVar2 = EA;
  if (cVar2 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a5b3 = 2;
  DAT_EXTMEM_a5b2 = param_1;
  FUN_CODE_6f89(0);
  if ((DAT_EXTMEM_a3c1 >> 2 & 1) != 0) {
    FUN_CODE_6e36(DAT_EXTMEM_a3c1);
  }
  if ((DAT_EXTMEM_a3c1 & 1) == 0) {
    if ((DAT_EXTMEM_a3bd >> 6 & 1) == 0) {
      if ((DAT_EXTMEM_a3c0 >> 4 & 1) == 0) {
        if ((DAT_EXTMEM_a3c0 >> 1 & 1) != 0) goto LAB_CODE_9c72;
      }
      else if ((DAT_EXTMEM_a3c0 >> 2 & 1) == 0) {
LAB_CODE_9c72:
        DAT_EXTMEM_0778 = 3;
        goto LAB_CODE_9c7a;
      }
      DAT_EXTMEM_0778 = 9;
    }
    else {
      DAT_EXTMEM_0778 = 0xd;
    }
  }
  else {
    DAT_EXTMEM_0778 = 1;
  }
LAB_CODE_9c7a:
  if (DAT_EXTMEM_a5b2 == '\x03') {
    if ((DAT_EXTMEM_a3c1 >> 6 & 1) == 0) {
      FUN_CODE_5fc8(DAT_EXTMEM_a3bf);
      DAT_EXTMEM_a3d0 = DAT_EXTMEM_a3d0 + '\x01';
    }
    else {
      if ((DAT_EXTMEM_a3d2 < DAT_EXTMEM_a3c7 + 1U) << 7 < '\0') {
        FUN_CODE_5fc8(DAT_EXTMEM_a3ca);
        DAT_EXTMEM_a3c5 = 4;
        DAT_EXTMEM_a3d0 = '\0';
        DAT_EXTMEM_0692 = 4;
      }
      else {
        bVar5 = DAT_EXTMEM_a3d2 * '\x03' - DAT_EXTMEM_a3c9;
        cVar1 = (0x80 < (0xfc < bVar5 ^ 0x80U) - (((DAT_EXTMEM_a3bf < bVar5 + 4) << 7) >> 7)) << 7;
        if (cVar1 < '\0') {
          DAT_EXTMEM_a5b5 = '\x03';
        }
        else {
          DAT_EXTMEM_a5b5 = DAT_EXTMEM_a3bf - (bVar5 - (cVar1 >> 7));
        }
        FUN_CODE_5fc8(DAT_EXTMEM_a5b5);
        DAT_EXTMEM_a3d0 = DAT_EXTMEM_a3d0 + '\x01';
      }
      DAT_EXTMEM_a3d2 = 0;
    }
  }
  DAT_EXTMEM_a5b4 = -1 < (char)DAT_EXTMEM_a3bd;
  if ((DAT_EXTMEM_a3c0 >> 5 & 1) != 1) {
    if (DAT_EXTMEM_a3fc == '\0') {
      DAT_EXTMEM_a5b3 = 1;
    }
    else {
      DAT_EXTMEM_a5b3 = 0;
    }
  }
  FUN_CODE_6996(FUN_CODE_a5b3);
  DAT_EXTMEM_a3cf = 1;
  if ((DAT_EXTMEM_a3bd >> 5 & 1) == 0) {
    if ((DAT_EXTMEM_a3bd >> 4 & 1) == 0) {
      if ((DAT_EXTMEM_a5b2 == '\x03') && (DAT_EXTMEM_a317 != '\0')) {
        uVar3 = 0;
        goto LAB_CODE_9d9e;
      }
    }
    else {
      DAT_EXTMEM_a3c3 = DAT_EXTMEM_a3c3 | 0x20;
      if (DAT_EXTMEM_a3bc == '\0') {
        FUN_CODE_53ba(0,0);
        uVar3 = 1;
        uVar4 = 0xc;
      }
      else {
        uVar3 = 1;
LAB_CODE_9d9e:
        uVar4 = 4;
      }
      FUN_CODE_50bd(uVar3,uVar4);
    }
  }
  else if (DAT_EXTMEM_a5b2 == '\0') {
    FUN_CODE_53ba(0,0);
  }
  if (DAT_EXTMEM_a3bc == '\0') {
    if (DAT_EXTMEM_a5b2 == '\0') {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      if (DAT_EXTMEM_a5b2 != '\x03') goto LAB_CODE_9def;
      if (((DAT_EXTMEM_a3bd >> 5 & 1) != 1) && ((DAT_EXTMEM_a3bd >> 2 & 1) != 0)) {
        FUN_CODE_979e();
      }
      uVar3 = 0;
      uVar4 = 0;
    }
  }
  else {
    if (DAT_EXTMEM_a5b2 == '\0') {
      uVar3 = 4;
    }
    else {
      if (DAT_EXTMEM_a5b2 != '\x03') goto LAB_CODE_9def;
      uVar3 = 0xb;
    }
    uVar4 = 0x6f;
  }
  FUN_CODE_53ba(uVar3,uVar4);
LAB_CODE_9def:
  if ((char)DAT_EXTMEM_a3c0 < '\0') {
    FUN_CODE_8fd9(1);
  }
  if ((DAT_EXTMEM_a3c1 >> 1 & 1) == 0) {
    DAT_EXTMEM_06cd = DAT_EXTMEM_06cd & 0xef;
    DAT_EXTMEM_06cf = DAT_EXTMEM_06cf & 0xef;
  }
  else {
    DAT_EXTMEM_06cd = DAT_EXTMEM_06cd | 0x10;
    DAT_EXTMEM_06cf = DAT_EXTMEM_06cf | 0x10;
  }
  EA = cVar2 != '\0';
  return;
}


