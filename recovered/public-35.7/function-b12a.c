/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:b12a, function FUN_CODE_b12a */

void FUN_CODE_b12a(undefined1 param_1,byte param_2)

{
  if (param_2 == 0xff) {
    DAT_EXTMEM_9faf = param_1;
    return;
  }
  FUN_CODE_b122(&UNK_CODE_9faf,~param_2);
  return;
}


