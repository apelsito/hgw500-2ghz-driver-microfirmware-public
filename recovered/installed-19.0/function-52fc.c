/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:52fc, function FUN_CODE_52fc */

/* WARNING: Removing unreachable block (CODE,0x5316) */
/* WARNING: Removing unreachable block (CODE,0x530f) */
/* WARNING: Removing unreachable block (CODE,0x5312) */
/* WARNING: Removing unreachable block (CODE,0x532b) */

void FUN_CODE_52fc(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a60c = '\x01';
  DAT_EXTMEM_a31a = 0xc;
  bVar2 = 0;
  FUN_CODE_4b22();
  if ((bVar2 >> 4 & 1) == 0) goto LAB_CODE_536a;
  if (DAT_EXTMEM_a60c == '\x01') {
LAB_CODE_5347:
    uVar3 = 0x88;
    bVar2 = DAT_EXTMEM_a31a & 0x7f | DAT_EXTMEM_a313 << 7;
  }
  else {
    if (DAT_EXTMEM_a60c != '\x02') {
      if (DAT_EXTMEM_a60c != '\0') goto LAB_CODE_536a;
      goto LAB_CODE_5347;
    }
    uVar3 = 0x89;
    bVar2 = DAT_EXTMEM_a319;
  }
  FUN_CODE_4bde(bVar2,uVar3);
LAB_CODE_536a:
  EA = cVar1 != '\0';
  return;
}


