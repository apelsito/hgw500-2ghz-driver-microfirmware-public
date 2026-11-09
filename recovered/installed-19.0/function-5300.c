/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5300, function FUN_CODE_5300 */

void FUN_CODE_5300(byte param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  bVar3 = DAT_EXTMEM_a319;
  bVar2 = param_1;
  if (((param_2 != '\x01') && (bVar3 = param_1, bVar2 = DAT_EXTMEM_a31a, param_2 != '\x02')) &&
     (bVar3 = DAT_EXTMEM_a319, param_2 == '\0')) {
    DAT_EXTMEM_a313 = DAT_EXTMEM_a313 & 0xfe | param_1 & 1;
  }
  DAT_EXTMEM_a31a = bVar2;
  DAT_EXTMEM_a319 = bVar3;
  bVar3 = 0;
  DAT_EXTMEM_a60c = param_2;
  FUN_CODE_4b22();
  if ((bVar3 >> 4 & 1) == 0) goto LAB_CODE_536a;
  if (DAT_EXTMEM_a60c == '\x01') {
LAB_CODE_5347:
    uVar4 = 0x88;
    bVar3 = DAT_EXTMEM_a31a & 0x7f | DAT_EXTMEM_a313 << 7;
  }
  else {
    if (DAT_EXTMEM_a60c != '\x02') {
      if (DAT_EXTMEM_a60c != '\0') goto LAB_CODE_536a;
      goto LAB_CODE_5347;
    }
    uVar4 = 0x89;
    bVar3 = DAT_EXTMEM_a319;
  }
  FUN_CODE_4bde(bVar3,uVar4);
LAB_CODE_536a:
  EA = cVar1 != '\0';
  return;
}


