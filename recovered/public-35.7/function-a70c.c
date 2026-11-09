/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a70c, function FUN_CODE_a70c */

byte FUN_CODE_a70c(void)

{
  byte in_PSW;
  
  return (DAT_EXTMEM_9eba >> 4 | DAT_EXTMEM_9eba << 4) >> 1 | in_PSW & 0x80;
}


