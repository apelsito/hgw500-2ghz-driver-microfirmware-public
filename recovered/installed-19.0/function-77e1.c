/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:77e1, function FUN_CODE_77e1 */

void FUN_CODE_77e1(byte param_1,byte param_2)

{
  DAT_EXTMEM_a526 = param_1;
  if (param_1 == 0) {
    if (cEXTMEM9b13 != DAT_EXTMEM_a527) {
      DAT_EXTMEM_a52a = DAT_EXTMEM_a527;
      DAT_EXTMEM_a52c = DAT_EXTMEM_9511 * '\x04' | BANK0_R5 * '\x02' | param_2;
      DAT_EXTMEM_a528 = 0xc;
      DAT_EXTMEM_a536 = 4;
      DAT_EXTMEM_a52b = param_1;
      FUN_CODE_67de(0x28,0xa5,1,DAT_EXTMEM_9511);
      FUN_CODE_5f71(4);
      *(char *)CONCAT11(-0x65 - (((0xec < DAT_EXTMEM_a526) << 7) >> 7),DAT_EXTMEM_a526 + 0x13) =
           DAT_EXTMEM_a527;
    }
  }
  return;
}


