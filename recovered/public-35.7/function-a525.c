/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a525, function FUN_CODE_a525 */

void FUN_CODE_a525(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  
  pbVar3 = &DAT_EXTMEM_a085;
  DAT_EXTMEM_a085 = DAT_EXTMEM_06a9;
  if ((DAT_EXTMEM_06a9 & 0xc0) == 0) {
    bVar1 = FUN_CODE_a597();
    goto LAB_CODE_a593;
  }
  if ((DAT_EXTMEM_06a9 >> 6 & 1) == 0) {
    FUN_CODE_a597();
  }
  else if (DAT_EXTMEM_9e52 == '\x02') {
    if ((DAT_EXTMEM_9e4d >> 1 & 1) == 1) {
      cVar2 = FUN_CODE_776a(DAT_EXTMEM_9e4d);
      if (cVar2 == '\x01') {
        DAT_EXTMEM_9e56 = DAT_EXTMEM_9e56 | 4;
        FUN_CODE_a210(1);
      }
    }
    else {
      DAT_EXTMEM_9e56 = DAT_EXTMEM_9e56 | 1;
LAB_CODE_a571:
      FUN_CODE_87ae();
    }
  }
  else {
    cVar2 = FUN_CODE_7763();
    if (cVar2 != '\x02') goto LAB_CODE_a571;
    FUN_CODE_7771();
  }
  pbVar3 = &DAT_EXTMEM_9e56;
  bVar1 = DAT_EXTMEM_9e56;
  if ((char)DAT_EXTMEM_a085 < '\0') {
    FUN_CODE_8095();
    DAT_EXTMEM_9e4d = DAT_EXTMEM_9e4d | 4;
    return;
  }
LAB_CODE_a593:
  *pbVar3 = bVar1 & 0xfd;
  return;
}


