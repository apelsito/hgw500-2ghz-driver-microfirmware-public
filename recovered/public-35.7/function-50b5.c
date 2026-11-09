/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:50b5, function FUN_CODE_50b5 */

undefined1 FUN_CODE_50b5(byte param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  FUN_CODE_50a0(param_1 & 0xfe,2);
  bVar1 = 2;
  FUN_CODE_500f(2);
  FUN_CODE_50a0(bVar1 | 1,2);
  uVar2 = 2;
  FUN_CODE_500f(2);
  return uVar2;
}


