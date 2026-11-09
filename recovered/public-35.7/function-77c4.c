/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:77c4, function FUN_CODE_77c4 */

void FUN_CODE_77c4(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = 2;
  uVar2 = FUN_CODE_77d9(0x15,1);
  *param_1 = uVar2;
  *(undefined1 *)CONCAT11('\x01' - (((0xcf < bVar1) << 7) >> 7),bVar1 + 0x30) = uVar2;
  return;
}


