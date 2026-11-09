/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:58a2, function FUN_CODE_58a2 */

/* WARNING: Removing unreachable block (CODE,0x58b9) */
/* WARNING: Removing unreachable block (CODE,0x58b2) */

void FUN_CODE_58a2(void)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  FUN_CODE_b12a();
  DAT_EXTMEM_0522 = FUN_CODE_5fae();
  DAT_EXTMEM_9d05 = uVar2;
  EA = cVar1 != '\0';
  return;
}


