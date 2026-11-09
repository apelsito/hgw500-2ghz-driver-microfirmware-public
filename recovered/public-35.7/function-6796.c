/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6796, function FUN_CODE_6796 */

void FUN_CODE_6796(byte *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = (param_3 < 2) << 7;
  if (param_3 < 2) {
    bVar1 = FUN_CODE_67e1(param_3 - 2);
    bVar2 = bVar2 & 0xdd;
    *param_1 = bVar1 & 0x3f;
    if (param_3 == 0) {
      bVar2 = FUN_CODE_a4d5();
      bVar2 = FUN_CODE_67e0(bVar2 & 0xef);
      *param_1 = bVar2 | 0x40;
    }
    else {
      bVar1 = FUN_CODE_a4d5();
      bVar1 = FUN_CODE_67e0(bVar1 | 0x10);
      *param_1 = bVar1 | 0x80;
      bVar1 = FUN_CODE_a70c();
      bVar2 = bVar2 & 0xdd;
      if ((bVar1 & 1) != 0) {
        FUN_CODE_a744();
        if ((char)bVar2 < '\0') {
          FUN_CODE_a75f(param_2 + 0x2b,param_3 * '\x04');
          return;
        }
        *(undefined1 *)CONCAT11(-4 - (((0xd4 < param_2) << 7) >> 7),param_2 + 0x2b) = 0x7f;
        return;
      }
    }
  }
  return;
}


