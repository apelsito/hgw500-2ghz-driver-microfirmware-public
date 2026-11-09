/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:684f, function FUN_CODE_684f */

char FUN_CODE_684f(undefined1 param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  
  DAT_EXTMEM_a053 = DAT_EXTMEM_9e47;
  DAT_EXTMEM_9fd2 = 0;
  DAT_EXTMEM_9fd1 = param_1;
  while( true ) {
    pcVar5 = &DAT_EXTMEM_9fd2;
    if (DAT_EXTMEM_a053 <= DAT_EXTMEM_9fd2) break;
    bVar1 = DAT_EXTMEM_9fd2;
    FUN_CODE_6950(DAT_EXTMEM_9fd2);
    *pcVar5 = '\0';
    FUN_CODE_69c5(bVar1,0x10);
    if (*pcVar5 < '\0') {
      FUN_CODE_69cb();
      *pcVar5 = '\0';
    }
    else {
      FUN_CODE_b745();
      puVar6 = &DAT_EXTMEM_9fd2;
      FUN_CODE_6950(DAT_EXTMEM_9fd2);
      *puVar6 = 1;
    }
    DAT_EXTMEM_9fd2 = DAT_EXTMEM_9fd2 + 1;
  }
  func_0x3e87(DAT_EXTMEM_9fd2 - DAT_EXTMEM_a053,0,0xc);
  DAT_EXTMEM_9fd2 = 0;
  while( true ) {
    pcVar5 = &DAT_EXTMEM_9fd2;
    if (DAT_EXTMEM_a053 <= DAT_EXTMEM_9fd2) break;
    bVar1 = DAT_EXTMEM_9fd2;
    bVar2 = DAT_EXTMEM_a053;
    FUN_CODE_6952();
    if (*pcVar5 != '\0') {
      FUN_CODE_69d3(bVar1,0x8106,0x10);
      pbVar7 = &DAT_EXTMEM_8107;
      uVar4 = FUN_CODE_69dc(bVar1);
      FUN_CODE_bc7d(uVar4);
      *pbVar7 = bVar1;
      pbVar7[1] = bVar2;
      FUN_CODE_69d3(uVar4,0x810a,0x10);
      FUN_CODE_69dc(uVar4,0x810b);
      pbVar7 = &DAT_EXTMEM_8d01;
      FUN_CODE_48f3(10);
      *pbVar7 = bVar1;
      pbVar7[1] = bVar2;
      cVar3 = '\x01';
      do {
        puVar6 = &DAT_EXTMEM_810b;
        bVar1 = DAT_EXTMEM_9fd2;
        FUN_CODE_48f3(0x10,DAT_EXTMEM_9fd2);
        FUN_CODE_4eda();
        uVar4 = *puVar6;
        FUN_CODE_69b4(bVar1,10);
        *puVar6 = uVar4;
        cVar3 = cVar3 + '\x01';
      } while (cVar3 != '\x05');
      puVar6 = &DAT_EXTMEM_8109;
      FUN_CODE_48f3(0x10,DAT_EXTMEM_9fd2);
      uVar4 = *puVar6;
      FUN_CODE_69f7();
      *puVar6 = uVar4;
      FUN_CODE_695a(DAT_EXTMEM_9fd1,DAT_EXTMEM_9fd2);
      puVar6 = &DAT_EXTMEM_9fd2;
      FUN_CODE_69cb();
      *puVar6 = 1;
    }
    DAT_EXTMEM_9fd2 = DAT_EXTMEM_9fd2 + 1;
  }
  return DAT_EXTMEM_9fd2 - DAT_EXTMEM_a053;
}


