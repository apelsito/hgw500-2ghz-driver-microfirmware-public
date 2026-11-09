/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:a874, function FUN_CODE_a874 */

void FUN_CODE_a874(byte param_1)

{
  byte bVar1;
  byte bVar2;
  
  FUN_CODE_8761();
  bVar1 = FUN_CODE_874b(&UNK_CODE_9ed1);
  bVar2 = param_1 >> 1 & 0xf;
  if (bVar1 <= bVar2) {
    FUN_CODE_a84f(bVar2 - bVar1);
    return;
  }
  DAT_EXTMEM_9ed1 = ((DAT_EXTMEM_9ed1 >> 1) + 1 & 0xf) * '\x02' | DAT_EXTMEM_9ed1 & 0xe1;
  return;
}


