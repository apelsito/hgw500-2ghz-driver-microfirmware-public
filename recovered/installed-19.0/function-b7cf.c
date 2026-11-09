/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b7cf, function FUN_CODE_b7cf */

void FUN_CODE_b7cf(byte param_1)

{
  DAT_EXTMEM_a4f5 = DAT_EXTMEM_06a9;
  if ((DAT_EXTMEM_06a9 & 0xc0) == 0) {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b & 0xfe;
    goto LAB_CODE_b865;
  }
  if ((DAT_EXTMEM_06a9 >> 6 & 1) == 0) {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b & 0xfe;
  }
  else if (DAT_EXTMEM_a317 == '\x02') {
    param_1 = DAT_EXTMEM_a313;
    if ((DAT_EXTMEM_a313 >> 1 & 1) == 1) {
      if ((DAT_EXTMEM_a315 & 0xf) == 1) {
        DAT_EXTMEM_a31b = DAT_EXTMEM_a31b | 4;
        FUN_CODE_96ba(1);
      }
    }
    else {
LAB_CODE_b82e:
      DAT_EXTMEM_a31b = DAT_EXTMEM_a31b | 1;
      FUN_CODE_979e(param_1);
    }
  }
  else {
    if ((DAT_EXTMEM_a315 & 0xf) != 2) goto LAB_CODE_b82e;
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b | 1;
    FUN_CODE_5757();
  }
  if ((char)DAT_EXTMEM_a4f5 < '\0') {
    DAT_EXTMEM_a31b = DAT_EXTMEM_a31b | 2;
    DAT_EXTMEM_a5a5 = 0;
    FUN_CODE_5ab7(DAT_EXTMEM_a3b7,&UNK_CODE_a5a6);
    DAT_EXTMEM_a313 = DAT_EXTMEM_a313 | 4;
    return;
  }
LAB_CODE_b865:
  DAT_EXTMEM_a31b = DAT_EXTMEM_a31b & 0xfd;
  return;
}


