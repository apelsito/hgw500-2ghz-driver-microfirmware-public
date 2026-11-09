/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7763, function FUN_CODE_7763 */

byte FUN_CODE_7763(void)

{
  DAT_EXTMEM_9e56 = DAT_EXTMEM_9e56 | 1;
  return DAT_EXTMEM_9e50 & 0xf;
}


