/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:bcd9, function FUN_CODE_bcd9 */

undefined1 FUN_CODE_bcd9(void)

{
  DAT_EXTMEM_01c0 = DAT_EXTMEM_01c0 | 0x20;
  return DAT_EXTMEM_a1c4;
}


