/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:7f8a, function FUN_CODE_7f8a */

void FUN_CODE_7f8a(byte param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar2 = *(byte *)CONCAT11(-0x6c - (((0x7e < param_1) << 7) >> 7),param_1 + 0x81) >> 4;
  pbVar4 = &DAT_EXTMEM_8105;
  FUN_CODE_4889(param_1,0x10);
  bVar3 = *pbVar4 & 3;
  pbVar4 = &DAT_EXTMEM_9793;
  FUN_CODE_4889(param_1,5);
  bVar1 = *pbVar4;
  DAT_INTMEM_67 = *(byte *)CONCAT11(-0x60 - (((0xeb < param_1) << 7) >> 7),param_1 + 0x14) & 0x7f;
  if ((DAT_INTMEM_67 < 0x1c) && (DAT_INTMEM_67 >= 0xc)) {
    bVar2 = bVar2 + 1;
    if (4U - (((DAT_INTMEM_67 < 0xc) << 7) >> 7) <= bVar2) {
      bVar2 = 0;
      *(undefined1 *)CONCAT11(-0x6b - (((0xed < param_1) << 7) >> 7),param_1 + 0x12) =
           *(undefined1 *)CONCAT11(-100 - (((0xec < param_1) << 7) >> 7),param_1 + 0x13);
      *(char *)CONCAT11(-100 - (((0x6b < param_1) << 7) >> 7),param_1 + 0x94) =
           *(char *)CONCAT11(-100 - (((0xec < param_1) << 7) >> 7),param_1 + 0x13) + '<';
    }
    *(byte *)CONCAT11(-0x6c - (((0x7e < param_1) << 7) >> 7),param_1 + 0x81) =
         bVar2 << 4 | *(byte *)CONCAT11(-0x6c - (((0x7e < param_1) << 7) >> 7),param_1 + 0x81) & 0xf
    ;
  }
  if (bVar1 + 1 <= DAT_INTMEM_67) {
    DAT_INTMEM_67 = bVar1;
  }
  DAT_EXTMEM_a59e = bVar3;
  FUN_CODE_626d(0,DAT_INTMEM_67);
  return;
}


