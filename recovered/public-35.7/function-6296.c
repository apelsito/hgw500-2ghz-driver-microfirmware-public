/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6296, function FUN_CODE_6296 */

void FUN_CODE_6296(byte param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  bVar4 = DAT_EXTMEM_9e54;
  bVar2 = param_1;
  if (((param_2 != '\x01') && (bVar4 = param_1, bVar2 = DAT_EXTMEM_9e55, param_2 != '\x02')) &&
     (bVar4 = DAT_EXTMEM_9e54, param_2 == '\0')) {
    DAT_EXTMEM_9e4d = DAT_EXTMEM_9e4d & 0xfe | param_1 & 1;
  }
  DAT_EXTMEM_9e55 = bVar2;
  DAT_EXTMEM_9e54 = bVar4;
  DAT_EXTMEM_a1df = param_2;
  bVar4 = FUN_CODE_4fdf();
  if ((bVar4 >> 4 & 1) == 0) goto LAB_CODE_62fd;
  if (DAT_EXTMEM_a1df == '\x01') {
LAB_CODE_62da:
    uVar3 = 0x88;
    bVar4 = DAT_EXTMEM_9e55 & 0x7f | DAT_EXTMEM_9e4d << 7;
  }
  else {
    if (DAT_EXTMEM_a1df != '\x02') {
      if (DAT_EXTMEM_a1df != '\0') goto LAB_CODE_62fd;
      goto LAB_CODE_62da;
    }
    uVar3 = 0x89;
    bVar4 = DAT_EXTMEM_9e54;
  }
  FUN_CODE_50a0(bVar4,uVar3);
LAB_CODE_62fd:
  EA = cVar1 != '\0';
  return;
}


