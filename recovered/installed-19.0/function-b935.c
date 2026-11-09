/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b935, function FUN_CODE_b935 */

void FUN_CODE_b935(char param_1)

{
  if ((DAT_EXTMEM_a3bd & 1) == 0) {
    FUN_CODE_a79f();
    if (param_1 != '\x01') {
      DAT_EXTMEM_01b8 = 1;
      DAT_EXTMEM_01b9 = 4;
      return;
    }
    if ((DAT_EXTMEM_a31b & 3) != 0) {
      DAT_EXTMEM_01b8 = 2;
      DAT_EXTMEM_01b9 = 4;
      return;
    }
    if (DAT_EXTMEM_a319 == '\0') {
      if ((DAT_EXTMEM_a31b >> 2 & 1) != 0) {
        DAT_EXTMEM_01b8 = 8;
        DAT_EXTMEM_01b9 = 4;
        return;
      }
      if ((DAT_EXTMEM_a31b >> 4 & 1) != 0) {
        DAT_EXTMEM_01b8 = 0x10;
        DAT_EXTMEM_01b9 = 4;
        return;
      }
      if ((DAT_EXTMEM_a314 >> 2 & 1) != 1) {
        DAT_EXTMEM_01b8 = 0x20;
        DAT_EXTMEM_01b9 = 4;
        return;
      }
      if (DAT_EXTMEM_a3bc != '\0') {
        DAT_EXTMEM_01b8 = 0x80;
        DAT_EXTMEM_01b9 = 4;
        return;
      }
      if ((DAT_EXTMEM_0662 >> 1 & 1) != 0) {
        DAT_EXTMEM_01b8 = 0x11;
        DAT_EXTMEM_01b9 = 4;
        return;
      }
      if ((DAT_EXTMEM_0662 & 1) == 0) {
        DAT_EXTMEM_01b8 = 0;
        return;
      }
      if ((DAT_EXTMEM_0662 & 0xfc) != 0x80) {
        DAT_EXTMEM_01b8 = 0;
        return;
      }
      DAT_EXTMEM_01b8 = 0x12;
      DAT_EXTMEM_01b9 = 4;
      return;
    }
  }
  else {
    if (DAT_EXTMEM_a3cf != '\0') {
      DAT_EXTMEM_01b8 = 0x40;
      DAT_EXTMEM_01b9 = 4;
      return;
    }
    if ((DAT_EXTMEM_a319 == '\0') << 7 < '\0') {
      if (DAT_EXTMEM_a3bc != '\0') {
        DAT_EXTMEM_01b8 = 0x80;
        DAT_EXTMEM_01b9 = 4;
        return;
      }
      DAT_EXTMEM_01b8 = 0;
      return;
    }
  }
  DAT_EXTMEM_01b8 = 4;
  DAT_EXTMEM_01b9 = 4;
  return;
}


