/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:521e, function FUN_CODE_521e */

void FUN_CODE_521e(char param_1)

{
  if ((DAT_EXTMEM_a3bd & 1) == 0) {
    FUN_CODE_a79f();
    if (param_1 != '\x01') {
      DAT_EXTMEM_01b8 = 1;
      DAT_EXTMEM_01b9 = 2;
      return;
    }
  }
  else if ((DAT_EXTMEM_a3c3 >> 5 & 1) != 0) {
    DAT_EXTMEM_01b8 = 0x10;
    DAT_EXTMEM_01b9 = 2;
    return;
  }
  if ((DAT_EXTMEM_a313 >> 3 & 1) == 0) {
    if ((DAT_EXTMEM_a319 < 5) << 7 < '\0') {
      DAT_EXTMEM_01b8 = 0;
      return;
    }
    DAT_EXTMEM_01b8 = 8;
  }
  else {
    DAT_EXTMEM_01b8 = 2;
  }
  DAT_EXTMEM_01b9 = 2;
  return;
}


