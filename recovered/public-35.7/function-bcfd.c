/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:bcfd, function FUN_CODE_bcfd */

char FUN_CODE_bcfd(void)

{
  return DAT_EXTMEM_9f99 - (DAT_EXTMEM_9f96 + '\x01');
}


