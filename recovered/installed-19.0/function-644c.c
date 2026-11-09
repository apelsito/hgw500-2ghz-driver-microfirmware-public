/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:644c, function FUN_CODE_644c */

void FUN_CODE_644c(void)

{
  DAT_EXTMEM_a4f5 = '\0';
  DAT_INTMEM_65 = DAT_EXTMEM_047e;
  DAT_INTMEM_66 = DAT_EXTMEM_047f;
  if (DAT_EXTMEM_047f != DAT_EXTMEM_047e) {
    DAT_EXTMEM_a4f6 = 3;
    DAT_EXTMEM_a504 = 8;
    DAT_INTMEM_67 = DAT_EXTMEM_047f + 1 & 0xf;
    DAT_INTMEM_64 = 0;
    do {
      *(undefined1 *)CONCAT11(-0x5c - (((7 < DAT_INTMEM_64) << 7) >> 7),DAT_INTMEM_64 - 8) =
           *(undefined1 *)
            CONCAT11(-0x80 - ((CARRY1(DAT_INTMEM_67 * '\b',DAT_INTMEM_64) << 7) >> 7),
                     DAT_INTMEM_67 * '\b' + DAT_INTMEM_64);
      DAT_INTMEM_64 = DAT_INTMEM_64 + 1;
    } while (DAT_INTMEM_64 != 8);
    FUN_CODE_67de(0xf6,0xa4,1);
    DAT_INTMEM_66 = DAT_INTMEM_66 + 1 & 0xf;
    if (DAT_INTMEM_66 == 0xf) {
      DAT_INTMEM_66 = 0;
    }
    DAT_EXTMEM_047f = DAT_INTMEM_66;
    if (DAT_EXTMEM_a4f5 == '\0') {
      FUN_CODE_4eec();
      return;
    }
    FUN_CODE_5f71(4);
  }
  return;
}


