/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7138, function FUN_CODE_7138 */

void FUN_CODE_7138(void)

{
  undefined1 *puVar1;
  
  DAT_EXTMEM_a083 = '\0';
  DAT_INTMEM_64 = DAT_EXTMEM_047e;
  DAT_INTMEM_65 = DAT_EXTMEM_047f;
  if (DAT_EXTMEM_047f != DAT_EXTMEM_047e) {
    DAT_EXTMEM_a084 = 3;
    DAT_EXTMEM_a092 = 8;
    DAT_INTMEM_66 = DAT_EXTMEM_047f + 1 & 0xf;
    DAT_INTMEM_63 = 0;
    do {
      puVar1 = (undefined1 *)CONCAT11(0x80,DAT_INTMEM_66 * '\b');
      FUN_CODE_4eda();
      *(undefined1 *)CONCAT11(-0x60 - (((0x79 < DAT_INTMEM_63) << 7) >> 7),DAT_INTMEM_63 + 0x86) =
           *puVar1;
      DAT_INTMEM_63 = DAT_INTMEM_63 + 1;
    } while (DAT_INTMEM_63 != 8);
    FUN_CODE_5575(0x84,0xa0,1);
    DAT_INTMEM_65 = DAT_INTMEM_65 + 1 & 0xf;
    if (DAT_INTMEM_65 == 0xf) {
      DAT_INTMEM_65 = 0;
    }
    DAT_EXTMEM_047f = DAT_INTMEM_65;
    if (DAT_EXTMEM_a083 == '\0') {
      FUN_CODE_55d8();
      return;
    }
    FUN_CODE_8ffc(4);
  }
  return;
}


