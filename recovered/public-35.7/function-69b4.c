/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:69b4, function FUN_CODE_69b4 */

void FUN_CODE_69b4(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_EXTMEM_8d01;
  FUN_CODE_48f3();
  FUN_CODE_48f3(param_1,2);
  *puVar1 = 0;
  return;
}


