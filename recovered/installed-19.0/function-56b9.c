/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:56b9, function FUN_CODE_56b9 */

void FUN_CODE_56b9(undefined1 param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = DAT_EXTMEM_a19c;
  FUN_CODE_9588(DAT_EXTMEM_a5ae,1);
  cVar1 = DAT_EXTMEM_a5ad;
  pbVar3 = (byte *)CONCAT11(-4 - (((0xf6 < bVar2) << 7) >> 7),bVar2 + 9);
  DAT_EXTMEM_a5af = param_1;
  DAT_EXTMEM_a5b0 = bVar2;
  *pbVar3 = *pbVar3 & 0x3f;
  if (cVar1 == '\0') {
    pbVar3 = (byte *)CONCAT11(-4 - (((0xd6 < bVar2) << 7) >> 7),bVar2 + 0x29);
    *pbVar3 = *pbVar3 & 0xef;
    pbVar3 = (byte *)CONCAT11(-4 - (((0xf6 < bVar2) << 7) >> 7),bVar2 + 9);
    *pbVar3 = *pbVar3 | 0x40;
  }
  else {
    pbVar3 = (byte *)CONCAT11(-4 - (((0xd6 < bVar2) << 7) >> 7),bVar2 + 0x29);
    *pbVar3 = *pbVar3 | 0x10;
    pbVar3 = (byte *)CONCAT11(-4 - (((0xf6 < bVar2) << 7) >> 7),bVar2 + 9);
    *pbVar3 = *pbVar3 | 0x80;
    if ((DAT_EXTMEM_a3c1 >> 5 & 1) != 0) {
      if (DAT_EXTMEM_a3d4 < 0x20) {
        *(byte *)CONCAT11(-4 - (((0xd4 < bVar2) << 7) >> 7),bVar2 + 0x2b) = DAT_EXTMEM_a3d4 * '\x04'
        ;
        return;
      }
      *(undefined1 *)CONCAT11(-4 - (((0xd4 < bVar2) << 7) >> 7),bVar2 + 0x2b) = 0x7f;
      return;
    }
  }
  return;
}


