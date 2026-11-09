/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:777a, function FUN_CODE_777a */

void FUN_CODE_777a(void)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    *(undefined1 *)CONCAT11(-0x5d - (((0xd0 < bVar1) << 7) >> 7),bVar1 + 0x2f) = 0;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0x19);
  DAT_EXTMEM_a32a = 0;
  DAT_EXTMEM_a32e = 0;
  DAT_EXTMEM_a328 = 0;
  return;
}


