/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:9930, function FUN_CODE_9930 */

void FUN_CODE_9930(void)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_EXTMEM_938e;
  FUN_CODE_48f3();
  DAT_EXTMEM_a0b7 = 0;
  DAT_EXTMEM_a0b8 = *puVar1;
  return;
}


