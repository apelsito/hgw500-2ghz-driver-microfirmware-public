/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:607e, function FUN_CODE_607e */

void FUN_CODE_607e(char param_1,char param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a1e1 = param_1;
  if ((((DAT_EXTMEM_9e4d >> 6 & 1) == 0) &&
      (bVar3 = FUN_CODE_4fd8(DAT_EXTMEM_9e4d), (bVar3 & 1) == 0)) && (DAT_EXTMEM_9e55 != param_2)) {
    if (param_2 == '\0') {
      if ((DAT_EXTMEM_9e55 == '\x0e') && (FUN_CODE_61c6(), param_2 == '\x01')) {
        FUN_CODE_6204();
      }
      if (DAT_EXTMEM_9e55 == '\x06') {
        FUN_CODE_6224();
      }
      if ((DAT_EXTMEM_9e55 == '\f') && (FUN_CODE_61c6(), param_2 == '\x01')) {
        FUN_CODE_6263();
      }
      if ((DAT_EXTMEM_9e55 == '\x04') && (FUN_CODE_bb24(), param_2 == '\x01')) {
        FUN_CODE_bb79();
      }
    }
    else if (param_2 == '\x02') {
      if ((DAT_EXTMEM_9e55 == '\x0e') && (FUN_CODE_61c6(), param_2 == '\x01')) {
        FUN_CODE_6204();
      }
      if (DAT_EXTMEM_9e55 == '\x06') {
        FUN_CODE_6224();
      }
      if ((DAT_EXTMEM_9e55 == '\f') && (FUN_CODE_61c6(), param_2 == '\x01')) {
        FUN_CODE_6263();
      }
      if (DAT_EXTMEM_9e55 == '\0') {
        FUN_CODE_624e(1);
      }
      if (DAT_EXTMEM_9e55 == '\x04') {
        FUN_CODE_665a();
      }
    }
    else if (param_2 == '\x04') {
      cVar2 = '\x04';
      if (DAT_EXTMEM_9e55 == '\0') {
        cVar2 = '\x01';
        FUN_CODE_624e();
      }
      if (DAT_EXTMEM_9e55 == '\x06') {
        FUN_CODE_6224();
      }
      if ((DAT_EXTMEM_9e55 == '\x0e') && (FUN_CODE_61c6(), cVar2 == '\x01')) {
        FUN_CODE_6204();
      }
      if ((DAT_EXTMEM_9e55 == '\f') && (FUN_CODE_61c6(), cVar2 == '\x01')) {
        FUN_CODE_6263();
      }
    }
    else if (param_2 == '\b') {
      if ((DAT_EXTMEM_9e55 == '\f') && (bVar3 = FUN_CODE_75b0(), (bVar3 & 1) != 0)) {
        FUN_CODE_bbf3();
      }
    }
    else if (param_2 == '\f') {
      if (DAT_EXTMEM_9e55 == '\x0e') {
        FUN_CODE_6204();
      }
      if (DAT_EXTMEM_9e55 == '\0') {
        FUN_CODE_624e(1);
      }
      if (DAT_EXTMEM_9e55 == '\x06') {
        FUN_CODE_6224();
      }
      if (DAT_EXTMEM_9e55 == '\x04') {
        if (DAT_EXTMEM_a1e1 == '\0') {
          FUN_CODE_8c3c(0);
        }
        else {
          FUN_CODE_737b();
        }
      }
      if (DAT_EXTMEM_9e55 == '\b') {
        FUN_CODE_bc09();
      }
    }
  }
  EA = cVar1 != '\0';
  return;
}


