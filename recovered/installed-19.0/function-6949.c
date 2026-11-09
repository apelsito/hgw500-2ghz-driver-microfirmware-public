/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6949, function FUN_CODE_6949 */

void FUN_CODE_6949(void)

{
  FUN_CODE_6918();
  if (DAT_EXTMEM_a3d8 >> 5 <= (DAT_EXTMEM_a3d8 >> 1 & 0xf)) {
    DAT_EXTMEM_a3d8 = DAT_EXTMEM_a3d8 & 0xe0;
    DAT_EXTMEM_0778 = DAT_EXTMEM_a3dd;
    FUN_CODE_6996(&UNK_CODE_a3de);
    FUN_CODE_6e36();
    FUN_CODE_53ba(0,0);
    return;
  }
  DAT_EXTMEM_a3d8 = ((DAT_EXTMEM_a3d8 >> 1 & 0xf) + 1 & 0xf) * '\x02' | DAT_EXTMEM_a3d8 & 0xe1;
  return;
}


