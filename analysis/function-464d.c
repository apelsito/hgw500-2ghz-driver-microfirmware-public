/* Ghidra decompiler reconstruction. Original firmware bytes remain separate. */
/* CODE:464d FUN_CODE_464d */

void FUN_CODE_464d(void)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  
  puVar2 = &DAT_INTMEM_86;
  DAT_INTMEM_86 = SP;
  cVar3 = '\x02';
  do {
    puVar2 = puVar2 + '\x01';
    *puVar2 = 0xff;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  cVar3 = '\x03';
  puVar2 = &DAT_INTMEM_80;
  do {
    *puVar2 = 0;
    puVar2['\x01'] = 0;
    puVar2 = puVar2 + '\x02';
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  DAT_INTMEM_81 = 0x30;
  bVar1 = TMOD;
  TMOD = bVar1 | 1;
  TL0 = 0x60;
  TH0 = 0x79;
  TR0 = 1;
  EA = 1;
  return;
}


