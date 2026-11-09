/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a59f, function FUN_CODE_a59f */

void FUN_CODE_a59f(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  
  pbVar3 = &DAT_EXTMEM_06a9;
  DAT_INTMEM_63 = DAT_EXTMEM_06a9;
  if ((DAT_EXTMEM_06a9 & 0xc0) == 0) {
    bVar1 = FUN_CODE_a597();
    *pbVar3 = bVar1 & 0xfd;
    FUN_CODE_6063();
    return;
  }
  if ((DAT_EXTMEM_06a9 >> 6 & 1) == 0) {
    FUN_CODE_a597();
  }
  else if (DAT_EXTMEM_9e52 == '\x01') {
    cVar2 = FUN_CODE_7763();
    if (cVar2 == '\x02') {
      FUN_CODE_7771();
    }
    else {
      FUN_CODE_87ae();
    }
  }
  if ((char)DAT_INTMEM_63 < '\0') {
    FUN_CODE_8095();
    DAT_EXTMEM_9e4d = DAT_EXTMEM_9e4d | 4;
    return;
  }
  DAT_EXTMEM_9e56 = DAT_EXTMEM_9e56 & 0xfd;
  return;
}


