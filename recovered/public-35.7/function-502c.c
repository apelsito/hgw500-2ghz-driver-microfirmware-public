/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:502c, function FUN_CODE_502c */

void FUN_CODE_502c(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_bde4(0x5f,0xfb,0x41,0xff,0xa1,1);
  FUN_CODE_5823();
  FUN_CODE_50c8();
  FUN_CODE_50b5();
  bVar2 = FUN_CODE_50b5();
  FUN_CODE_50a0(bVar2 & 0xfe,2);
  DAT_EXTMEM_0100 = 0x3f;
  DAT_EXTMEM_0101 = DAT_EXTMEM_0101 & 0xfd;
  DAT_EXTMEM_0553 = DAT_EXTMEM_0553 | 0x20;
  if ((DAT_EXTMEM_9e4d & 1) != 0) {
    DAT_EXTMEM_a15f = 1;
    DAT_EXTMEM_a160 = 1;
    FUN_CODE_55e7(0x5f,0xa1,1);
  }
  DAT_EXTMEM_0065 = DAT_EXTMEM_0065 & 0xfe;
  DAT_EXTMEM_0064 = DAT_EXTMEM_0064 | 4;
  DAT_EXTMEM_004f = DAT_EXTMEM_004f | 9;
  if (DAT_EXTMEM_9eb3 != '\0') {
    DAT_EXTMEM_9eb3 = '\0';
  }
  EA = cVar1 != '\0';
  return;
}


