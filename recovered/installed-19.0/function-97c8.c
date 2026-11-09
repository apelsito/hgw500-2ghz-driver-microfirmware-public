/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:97c8, function FUN_CODE_97c8 */

void FUN_CODE_97c8(void)

{
  if (((DAT_EXTMEM_a3bb >> 1 & 1) != 0) && ((DAT_EXTMEM_a3bb >> 3 & 1) != 1)) {
    if ((DAT_EXTMEM_a3c0 >> 4 & 1) != 0) {
      DAT_EXTMEM_0778 = 3;
      return;
    }
    if ((DAT_EXTMEM_a3bb >> 2 & 1) != 0) {
      DAT_EXTMEM_0778 = 0xd;
      return;
    }
    DAT_EXTMEM_0778 = 9;
  }
  return;
}


