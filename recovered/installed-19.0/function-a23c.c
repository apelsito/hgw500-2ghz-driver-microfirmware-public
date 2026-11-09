/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a23c, function FUN_CODE_a23c */

void FUN_CODE_a23c(void)

{
  DAT_EXTMEM_0604 = DAT_EXTMEM_0604 & 0x7f;
  FUN_CODE_53ba(0,0);
  FUN_CODE_5300(0xc,1);
  return;
}


