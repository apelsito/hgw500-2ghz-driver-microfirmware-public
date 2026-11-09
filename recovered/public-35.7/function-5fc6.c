/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:5fc6, function FUN_CODE_5fc6 */

undefined1 FUN_CODE_5fc6(void)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_EXTMEM_9f1d;
  FUN_CODE_48f3(DAT_EXTMEM_9f17 >> 1 & 7,0x1b);
  return *puVar1;
}


