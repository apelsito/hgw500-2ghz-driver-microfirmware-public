/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a2c6, function FUN_CODE_a2c6 */

void FUN_CODE_a2c6(void)

{
  if (((DAT_EXTMEM_a30e & 1) == 0) || (DAT_EXTMEM_a312 != '\x02')) {
    if ((DAT_EXTMEM_a317 != '\0') || ((DAT_EXTMEM_a30e & 1) != 0)) {
      if (DAT_EXTMEM_a31a == '\x02') {
        return;
      }
      FUN_CODE_a312();
    }
    if (((DAT_EXTMEM_a314 >> 3 & 1) != 0) && (DAT_EXTMEM_a31e == DAT_EXTMEM_a31d)) {
      FUN_CODE_77bd();
      FUN_CODE_a2a4();
      DAT_EXTMEM_a31e = DAT_EXTMEM_a31e + -1;
    }
    DAT_EXTMEM_01e6 = DAT_EXTMEM_01e6 + '\x01';
  }
  return;
}


