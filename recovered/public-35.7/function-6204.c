/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6204, function FUN_CODE_6204 */

void FUN_CODE_6204(void)

{
  byte bVar1;
  
  if ((DAT_EXTMEM_9e4e >> 1 & 1) == 1) {
    FUN_CODE_bce6();
    bVar1 = FUN_CODE_6640(4);
    FUN_CODE_6652(bVar1 | 0x80);
  }
  else {
    FUN_CODE_6292();
  }
  FUN_CODE_58a7(0,0,0xff);
  return;
}


