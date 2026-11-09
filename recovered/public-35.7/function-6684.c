/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:6684, function FUN_CODE_6684 */

void FUN_CODE_6684(char param_1)

{
  byte bVar1;
  
  FUN_CODE_6678(BANK0_R7);
  if (param_1 == '\x01') {
    bVar1 = FUN_CODE_66a2(&UNK_CODE_9e48);
    if ((bVar1 & 1) != 1) {
      FUN_CODE_607e(1,BANK0_R6);
      return;
    }
  }
  return;
}


