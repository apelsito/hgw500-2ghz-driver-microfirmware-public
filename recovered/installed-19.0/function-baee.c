/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:baee, function FUN_CODE_baee */

void FUN_CODE_baee(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  DAT_INTMEM_64 = '\0';
  if (DAT_EXTMEM_a317 == '\0') {
    DAT_INTMEM_64 = 0;
    return;
  }
  if (DAT_EXTMEM_a28d != '\x01') {
    DAT_INTMEM_64 = 0;
    return;
  }
  if ((DAT_EXTMEM_a313 & 1) != 0) {
    cVar1 = '\x02';
    bVar2 = DAT_EXTMEM_0562;
    DAT_EXTMEM_a34d = DAT_EXTMEM_0561;
    do {
      DAT_EXTMEM_a34c = bVar2 >> 1;
      DAT_EXTMEM_a34d = DAT_EXTMEM_a34d >> 1 | bVar2 << 7;
      cVar1 = cVar1 + -1;
      bVar2 = DAT_EXTMEM_a34c;
    } while (cVar1 != '\0');
  }
  bVar2 = DAT_EXTMEM_a315 >> 4;
  bVar3 = DAT_EXTMEM_a315;
  if (bVar2 != 0) {
    if (((bVar2 != 2) && (bVar2 != 1)) ||
       ((bVar3 = DAT_EXTMEM_a31e - 1, DAT_EXTMEM_a31e = bVar3, bVar3 != 0 &&
        (DAT_EXTMEM_a320 == '\0')))) goto LAB_CODE_bb56;
    if (bVar3 == 0) {
      DAT_EXTMEM_a31e = DAT_EXTMEM_a31d;
    }
  }
  DAT_INTMEM_64 = '\x01';
LAB_CODE_bb56:
  if ((DAT_EXTMEM_a30e & 1) != 0) {
    if (DAT_EXTMEM_a312 == '\x02') {
      DAT_INTMEM_64 = '\0';
    }
    FUN_CODE_66c8();
    if (bVar3 == 0) {
      DAT_INTMEM_64 = '\0';
    }
  }
  if (DAT_INTMEM_64 != '\0') {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b | 0x10;
    cVar1 = DAT_EXTMEM_a320;
    if ((DAT_EXTMEM_a320 != '\0') && (DAT_EXTMEM_a320 != '\x01')) {
      cVar1 = DAT_EXTMEM_a320 * '\x03' + -2;
    }
    DAT_EXTMEM_a5a5 = 0;
    FUN_CODE_5ab7(DAT_EXTMEM_a31f + cVar1,&UNK_CODE_a5a6);
    if ((DAT_EXTMEM_a31a >> 2 & 1) != 1) {
      FUN_CODE_50b9();
    }
    FUN_CODE_97c8();
  }
  return;
}


