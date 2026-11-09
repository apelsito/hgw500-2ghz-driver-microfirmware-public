/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:ace8, function FUN_CODE_ace8 */

void FUN_CODE_ace8(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  
  DAT_EXTMEM_a5f8 = DAT_EXTMEM_01cc & 0xf;
  while( true ) {
    if (DAT_EXTMEM_a5f8 == 0) {
      return;
    }
    if (((DAT_EXTMEM_a1f0 == '\0') && (DAT_EXTMEM_a1f1 == '\t')) || (DAT_EXTMEM_a1f1 == BANK0_R7)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    bVar4 = 1;
    cVar2 = BANK0_R7 + '\x01';
    while (cVar2 = cVar2 + -1, cVar2 != '\0') {
      bVar4 = bVar4 << 1;
    }
    if ((bVar4 & DAT_EXTMEM_a5f8) == 0) {
      DAT_EXTMEM_01c0 = DAT_EXTMEM_01c0 | 2;
      DAT_EXTMEM_008a = DAT_EXTMEM_a5e8 | 0x80;
      puVar9 = &DAT_EXTMEM_01d0;
      FUN_CODE_4889(DAT_EXTMEM_a5e8,4);
      DAT_EXTMEM_01c3 = *puVar9;
      return;
    }
    for (DAT_EXTMEM_a5f9 = 0; DAT_EXTMEM_a5f9 < 4; DAT_EXTMEM_a5f9 = DAT_EXTMEM_a5f9 + 1) {
      bVar4 = (byte)((ushort)DAT_EXTMEM_a5e8 * 4);
      cVar2 = '\0';
      bVar5 = DAT_EXTMEM_a5f9 + bVar4;
      uVar3 = *(undefined1 *)
               CONCAT11((((char)((ushort)DAT_EXTMEM_a5e8 * 4 >> 8) -
                         ((CARRY1(DAT_EXTMEM_a5f9,bVar4) << 7) >> 7)) - (((0x2f < bVar5) << 7) >> 7)
                        ) + '\x01',bVar5 - 0x30);
      puVar8 = &UNK_CODE_a1a0;
      bVar4 = DAT_EXTMEM_a5f9;
      bVar5 = DAT_EXTMEM_a5f9;
      FUN_CODE_4889(DAT_EXTMEM_a1f1,8);
      *(undefined1 *)
       CONCAT11((char)((ushort)puVar8 >> 8) - ((CARRY1((byte)puVar8,bVar4) << 7) >> 7),
                (byte)puVar8 + bVar4) = uVar3;
      bVar6 = (byte)((ushort)DAT_EXTMEM_a5e8 * 4);
      bVar7 = bVar6 + bVar5;
      uVar3 = *(undefined1 *)
               CONCAT11(((cVar2 + ((char)((ushort)DAT_EXTMEM_a5e8 * 4 >> 8) -
                                  ((CARRY1(bVar6,bVar5) << 7) >> 7))) - (((0xf < bVar7) << 7) >> 7))
                        + '\x01',bVar7 - 0x10);
      puVar8 = &UNK_CODE_a1a4;
      FUN_CODE_4889(DAT_EXTMEM_a1f1,8);
      *(undefined1 *)
       CONCAT11((char)((ushort)puVar8 >> 8) - ((CARRY1((byte)puVar8,bVar4) << 7) >> 7),
                (byte)puVar8 + bVar4) = uVar3;
    }
    bVar4 = 1;
    cVar2 = BANK0_R6 + '\x01';
    while (cVar2 = cVar2 + -1, cVar2 != '\0') {
      bVar4 = bVar4 << 1;
    }
    DAT_EXTMEM_a5f8 = ~bVar4 & DAT_EXTMEM_a5f8;
    DAT_EXTMEM_01cc = 1;
    cVar2 = BANK0_R7 + '\x01';
    while (cVar2 = cVar2 + -1, cVar2 != '\0') {
      DAT_EXTMEM_01cc = DAT_EXTMEM_01cc << 1;
    }
    DAT_EXTMEM_a5e8 = DAT_EXTMEM_a5e8 + 1 & 3;
    DAT_EXTMEM_a1f1 = DAT_EXTMEM_a1f1 + '\x01';
    if (DAT_EXTMEM_a1f1 == '\n') {
      DAT_EXTMEM_a1f1 = '\0';
    }
  }
  DAT_EXTMEM_01c1 = DAT_EXTMEM_01c1 | 1;
  return;
}


