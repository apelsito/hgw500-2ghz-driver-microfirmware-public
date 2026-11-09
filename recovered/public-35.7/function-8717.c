/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8717, function FUN_CODE_8717 */

void FUN_CODE_8717(char param_1)

{
  undefined *puVar1;
  
  if ((DAT_EXTMEM_9ee8 >> 1 & 1) != 0) {
    if (param_1 == '\x01') {
      puVar1 = &UNK_CODE_9eef;
    }
    else {
      puVar1 = &UNK_CODE_9eeb;
    }
    FUN_CODE_851b(puVar1,DAT_EXTMEM_9ee8);
    func_0x38a4(8,0x80);
  }
  return;
}


