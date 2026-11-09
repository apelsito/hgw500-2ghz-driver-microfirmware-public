/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:8fd9, function FUN_CODE_8fd9 */

void FUN_CODE_8fd9(char param_1)

{
  undefined *puVar1;
  
  if ((DAT_EXTMEM_a3ed >> 1 & 1) != 0) {
    if (param_1 == '\x01') {
      puVar1 = &UNK_CODE_a3f4;
    }
    else {
      puVar1 = &UNK_CODE_a3f0;
    }
    FUN_CODE_4851(puVar1,DAT_EXTMEM_a3ed);
    func_0x086d(&UNK_CODE_aab9);
    func_0x38a4(8,0x80);
  }
  return;
}


