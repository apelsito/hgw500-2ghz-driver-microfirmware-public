/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:50bd, function FUN_CODE_50bd */

void FUN_CODE_50bd(char param_1,char param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a60e = param_1;
  if ((((DAT_EXTMEM_a313 >> 6 & 1) == 0) && (-1 < (char)DAT_EXTMEM_a313)) &&
     (DAT_EXTMEM_a31a != param_2)) {
    if (param_2 == '\0') {
      if ((DAT_EXTMEM_a31a == '\x0e') && (FUN_CODE_521e(), param_2 == '\x01')) {
        FUN_CODE_52a8();
      }
      if (DAT_EXTMEM_a31a == '\x06') {
        FUN_CODE_527e();
      }
      if ((DAT_EXTMEM_a31a == '\f') && (FUN_CODE_521e(), param_2 == '\x01')) {
        FUN_CODE_536f();
      }
      if ((DAT_EXTMEM_a31a == '\x04') && (FUN_CODE_b935(), param_2 == '\x01')) {
        FUN_CODE_ba40();
      }
    }
    else if (param_2 == '\x02') {
      if ((DAT_EXTMEM_a31a == '\x0e') && (FUN_CODE_521e(), param_2 == '\x01')) {
        FUN_CODE_52a8();
      }
      if (DAT_EXTMEM_a31a == '\x06') {
        FUN_CODE_527e();
      }
      if ((DAT_EXTMEM_a31a == '\f') && (FUN_CODE_521e(), param_2 == '\x01')) {
        FUN_CODE_536f();
      }
      if (DAT_EXTMEM_a31a == '\0') {
        FUN_CODE_52d8(1);
      }
      if (DAT_EXTMEM_a31a == '\x04') {
        FUN_CODE_ba61();
      }
    }
    else if (param_2 == '\x04') {
      cVar2 = '\x04';
      if (DAT_EXTMEM_a31a == '\0') {
        cVar2 = '\x01';
        FUN_CODE_52d8();
      }
      if (DAT_EXTMEM_a31a == '\x06') {
        FUN_CODE_527e();
      }
      if ((DAT_EXTMEM_a31a == '\x0e') && (FUN_CODE_521e(), cVar2 == '\x01')) {
        FUN_CODE_52a8();
      }
      if ((DAT_EXTMEM_a31a == '\f') && (FUN_CODE_521e(), cVar2 == '\x01')) {
        FUN_CODE_536f();
      }
    }
    else if (param_2 == '\b') {
      if ((DAT_EXTMEM_a31a == '\f') && ((DAT_EXTMEM_a314 >> 2 & 1) != 0)) {
        FUN_CODE_bc01(DAT_EXTMEM_a314);
      }
    }
    else if (param_2 == '\f') {
      if (DAT_EXTMEM_a31a == '\x0e') {
        FUN_CODE_52a8();
      }
      if (DAT_EXTMEM_a31a == '\0') {
        FUN_CODE_52d8(1);
      }
      if (DAT_EXTMEM_a31a == '\x06') {
        FUN_CODE_527e();
      }
      if (DAT_EXTMEM_a31a == '\x04') {
        if (DAT_EXTMEM_a60e == '\0') {
          FUN_CODE_a23c(0);
        }
        else {
          FUN_CODE_57a5();
        }
      }
      if (DAT_EXTMEM_a31a == '\b') {
        FUN_CODE_bc14();
      }
    }
    DAT_EXTMEM_01ba = DAT_EXTMEM_a31a;
    DAT_EXTMEM_01bb = DAT_EXTMEM_a319;
  }
  EA = cVar1 != '\0';
  return;
}


