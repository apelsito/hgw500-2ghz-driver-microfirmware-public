/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:ba7d, function FUN_CODE_ba7d */

void FUN_CODE_ba7d(void)

{
  DAT_INTMEM_64 = DAT_EXTMEM_06a9;
  if ((DAT_EXTMEM_06a9 & 0xc0) == 0) {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b & 0xfc;
    FUN_CODE_50a4();
    return;
  }
  if ((DAT_EXTMEM_06a9 >> 6 & 1) == 0) {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b & 0xfe;
  }
  else if (DAT_EXTMEM_a317 == '\x01') {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b | 1;
    if ((DAT_EXTMEM_a315 & 0xf) == 2) {
      FUN_CODE_5757();
    }
    else {
      FUN_CODE_979e();
    }
  }
  if ((char)DAT_INTMEM_64 < '\0') {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b | 2;
    DAT_EXTMEM_a5a5 = 0;
    FUN_CODE_5ab7(DAT_EXTMEM_a3b7,&UNK_CODE_a5a6);
    DAT_EXTMEM_a313 = DAT_EXTMEM_a313 | 4;
    return;
  }
  DAT_EXTMEM_a31b = DAT_EXTMEM_a31b & 0xfd;
  return;
}


