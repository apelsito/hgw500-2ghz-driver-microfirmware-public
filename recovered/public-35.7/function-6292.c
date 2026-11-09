/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6292, function FUN_CODE_6292 */

/* WARNING: Removing unreachable block (CODE,0x62ac) */
/* WARNING: Removing unreachable block (CODE,0x62a5) */
/* WARNING: Removing unreachable block (CODE,0x62a8) */
/* WARNING: Removing unreachable block (CODE,0x62c1) */

void FUN_CODE_6292(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a1df = '\x01';
  DAT_EXTMEM_9e55 = 0xc;
  bVar3 = FUN_CODE_4fdf();
  if ((bVar3 >> 4 & 1) == 0) goto LAB_CODE_62fd;
  if (DAT_EXTMEM_a1df == '\x01') {
LAB_CODE_62da:
    uVar2 = 0x88;
    bVar3 = DAT_EXTMEM_9e55 & 0x7f | DAT_EXTMEM_9e4d << 7;
  }
  else {
    if (DAT_EXTMEM_a1df != '\x02') {
      if (DAT_EXTMEM_a1df != '\0') goto LAB_CODE_62fd;
      goto LAB_CODE_62da;
    }
    uVar2 = 0x89;
    bVar3 = DAT_EXTMEM_9e54;
  }
  FUN_CODE_50a0(bVar3,uVar2);
LAB_CODE_62fd:
  EA = cVar1 != '\0';
  return;
}


