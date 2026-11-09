/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:56d7, function FUN_CODE_56d7 */

void FUN_CODE_56d7(byte param_1,char param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)CONCAT11(-4 - (((0xf6 < param_1) << 7) >> 7),param_1 + 9);
  *pbVar1 = *pbVar1 & 0x3f;
  if (param_2 == '\0') {
    pbVar1 = (byte *)CONCAT11(-4 - (((0xd6 < param_1) << 7) >> 7),param_1 + 0x29);
    *pbVar1 = *pbVar1 & 0xef;
    pbVar1 = (byte *)CONCAT11(-4 - (((0xf6 < param_1) << 7) >> 7),param_1 + 9);
    *pbVar1 = *pbVar1 | 0x40;
  }
  else {
    pbVar1 = (byte *)CONCAT11(-4 - (((0xd6 < param_1) << 7) >> 7),param_1 + 0x29);
    *pbVar1 = *pbVar1 | 0x10;
    pbVar1 = (byte *)CONCAT11(-4 - (((0xf6 < param_1) << 7) >> 7),param_1 + 9);
    *pbVar1 = *pbVar1 | 0x80;
    if ((DAT_EXTMEM_a3c1 >> 5 & 1) != 0) {
      if (DAT_EXTMEM_a3d4 < 0x20) {
        *(byte *)CONCAT11(-4 - (((0xd4 < param_1) << 7) >> 7),param_1 + 0x2b) =
             DAT_EXTMEM_a3d4 * '\x04';
        return;
      }
      *(undefined1 *)CONCAT11(-4 - (((0xd4 < param_1) << 7) >> 7),param_1 + 0x2b) = 0x7f;
      return;
    }
  }
  return;
}


