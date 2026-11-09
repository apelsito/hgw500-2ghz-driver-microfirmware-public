/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:817c, function FUN_CODE_817c */

void FUN_CODE_817c(void)

{
  byte bVar1;
  
  bVar1 = FUN_CODE_87a7(&UNK_CODE_9e4d);
  if ((bVar1 & 1) != 0) {
    DAT_EXTMEM_015b = 0;
  }
  DAT_EXTMEM_0692 = 2;
  FUN_CODE_5ff2(4,0x13c);
  FUN_CODE_bd9c(DAT_EXTMEM_9eb1 >> 1,&UNK_CODE_a17a);
  FUN_CODE_80ad();
  DAT_EXTMEM_9e4d = DAT_EXTMEM_9e4d | 8;
  return;
}


