/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:77ca, function FUN_CODE_77ca */

void FUN_CODE_77ca(void)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a17b = 0;
  DAT_EXTMEM_a17c = 8;
  DAT_EXTMEM_9d03 = DAT_EXTMEM_9d03 + '\x01';
  if ((DAT_EXTMEM_9eb6 & 1) != 0) {
    DAT_EXTMEM_0510 = 0;
    DAT_EXTMEM_0511 = 0;
  }
  if (DAT_EXTMEM_041d == '\0') {
    FUN_CODE_8f0e();
    bVar2 = FUN_CODE_6738();
    if ((bVar2 & 1) != 1) {
      FUN_CODE_a18a();
    }
    goto LAB_CODE_6718;
  }
  DAT_EXTMEM_a17f = DAT_EXTMEM_0522;
  FUN_CODE_581d(0x26);
  if (cVar3 == '\x01') {
    bVar2 = FUN_CODE_6738();
joined_c0x66f6:
    if ((bVar2 & 1) != 1) {
      FUN_CODE_a18a();
    }
  }
  else {
    bVar2 = FUN_CODE_669f();
    if ((bVar2 & 1) != 0) {
      bVar2 = FUN_CODE_6738();
      goto joined_c0x66f6;
    }
  }
  FUN_CODE_58a7(0x27,DAT_EXTMEM_a17f,0);
  FUN_CODE_8f0e();
LAB_CODE_6718:
  if (((DAT_EXTMEM_9eb6 & 1) != 0) && (bVar2 = FUN_CODE_669f(), (bVar2 & 1) != 0)) {
    FUN_CODE_a724();
    FUN_CODE_58a7(0x28,0x90);
  }
  FUN_CODE_87d8();
  EA = cVar1 != '\0';
  return;
}


