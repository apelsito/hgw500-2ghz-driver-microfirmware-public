/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5499, function FUN_CODE_5499 */

void FUN_CODE_5499(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_bde4(0x57,0xf3,0x41,0xff,0xa1,1);
  DAT_EXTMEM_0101 = DAT_EXTMEM_0101 | 2;
  DAT_EXTMEM_0100 = 0xff;
  DAT_EXTMEM_06b7 = 9;
  DAT_EXTMEM_06b4 = 0x86;
  DAT_EXTMEM_004f = DAT_EXTMEM_004f & 0xf6;
  if ((DAT_EXTMEM_9e4d & 1) != 0) {
    DAT_EXTMEM_a157 = DAT_EXTMEM_9ede >> 4 & 1;
    DAT_EXTMEM_a158 = 1;
    FUN_CODE_55e7(0x57,0xa1,1);
  }
  bVar2 = FUN_CODE_50c8();
  FUN_CODE_50a0(bVar2 | 1,2);
  EA = cVar1 != '\0';
  return;
}


