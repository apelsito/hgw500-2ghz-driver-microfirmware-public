/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5666, function FUN_CODE_5666 */

void FUN_CODE_5666(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  
  bVar1 = BANK0_R6;
  cVar3 = DAT_EXTMEM_a180;
  FUN_CODE_48ff(0xa181);
  FUN_CODE_4908(0xa1b3);
  bVar2 = 0;
  puVar5 = (undefined1 *)0xfd50;
  DAT_EXTMEM_fd50 = cVar3;
  if (cVar3 == '0') {
    for (; bVar2 < 7; bVar2 = bVar2 + 1) {
      uVar4 = FUN_CODE_57a8(bVar2 - 7);
      FUN_CODE_56bc(0x51);
      *puVar5 = uVar4;
    }
  }
  else {
    puVar5 = (undefined1 *)0xfd51;
    DAT_EXTMEM_fd51 = bVar1;
    for (; bVar2 < bVar1; bVar2 = bVar2 + 1) {
      uVar4 = FUN_CODE_57a8(bVar2 - bVar1);
      FUN_CODE_56ba();
      *puVar5 = uVar4;
    }
    for (; bVar2 < 6; bVar2 = bVar2 + 1) {
      FUN_CODE_56ba(bVar2 - 6);
      *puVar5 = 0;
    }
  }
  DAT_EXTMEM_fd58 = 1;
  return;
}


