/* Ghidra pseudocode derived from the original 8051 firmware. */
/* Address CODE:50b9, function FUN_CODE_50b9 */

/* WARNING: Removing unreachable block (CODE,0x5101) */
/* WARNING: Removing unreachable block (CODE,0x51fa) */
/* WARNING: Removing unreachable block (CODE,0x5206) */
/* WARNING: Removing unreachable block (CODE,0x50fd) */
/* WARNING: Removing unreachable block (CODE,0x5103) */
/* WARNING: Removing unreachable block (CODE,0x5109) */
/* WARNING: Removing unreachable block (CODE,0x510d) */
/* WARNING: Removing unreachable block (CODE,0x510f) */
/* WARNING: Removing unreachable block (CODE,0x5115) */
/* WARNING: Removing unreachable block (CODE,0x5119) */
/* WARNING: Removing unreachable block (CODE,0x5120) */
/* WARNING: Removing unreachable block (CODE,0x5122) */
/* WARNING: Removing unreachable block (CODE,0x5129) */
/* WARNING: Removing unreachable block (CODE,0x5134) */
/* WARNING: Removing unreachable block (CODE,0x5130) */
/* WARNING: Removing unreachable block (CODE,0x5137) */
/* WARNING: Removing unreachable block (CODE,0x5141) */
/* WARNING: Removing unreachable block (CODE,0x513f) */
/* WARNING: Removing unreachable block (CODE,0x5107) */
/* WARNING: Removing unreachable block (CODE,0x50f7) */
/* WARNING: Removing unreachable block (CODE,0x51bf) */
/* WARNING: Removing unreachable block (CODE,0x51c4) */
/* WARNING: Removing unreachable block (CODE,0x51c6) */
/* WARNING: Removing unreachable block (CODE,0x51cd) */
/* WARNING: Removing unreachable block (CODE,0x51cf) */
/* WARNING: Removing unreachable block (CODE,0x51d6) */
/* WARNING: Removing unreachable block (CODE,0x51db) */
/* WARNING: Removing unreachable block (CODE,0x51dd) */
/* WARNING: Removing unreachable block (CODE,0x51e3) */
/* WARNING: Removing unreachable block (CODE,0x51e7) */
/* WARNING: Removing unreachable block (CODE,0x51ee) */
/* WARNING: Removing unreachable block (CODE,0x50f1) */
/* WARNING: Removing unreachable block (CODE,0x5185) */
/* WARNING: Removing unreachable block (CODE,0x518a) */
/* WARNING: Removing unreachable block (CODE,0x518c) */
/* WARNING: Removing unreachable block (CODE,0x5193) */
/* WARNING: Removing unreachable block (CODE,0x5195) */
/* WARNING: Removing unreachable block (CODE,0x519c) */
/* WARNING: Removing unreachable block (CODE,0x51a1) */
/* WARNING: Removing unreachable block (CODE,0x51a3) */
/* WARNING: Removing unreachable block (CODE,0x51ab) */
/* WARNING: Removing unreachable block (CODE,0x51b3) */

void FUN_CODE_50b9(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = '\x04';
  cVar1 = EA;
  if (cVar1 != '\0') {
    EA = 0;
  }
  DAT_EXTMEM_a60e = 1;
  if ((((DAT_EXTMEM_a313 >> 6 & 1) == 0) && (-1 < (char)DAT_EXTMEM_a313)) &&
     (DAT_EXTMEM_a31a != '\x04')) {
    if (DAT_EXTMEM_a31a == '\0') {
      cVar2 = '\x01';
      FUN_CODE_52d8();
    }
    if (DAT_EXTMEM_a31a == '\x06') {
      FUN_CODE_527e();
    }
    if ((DAT_EXTMEM_a31a == '\x0e') && (FUN_CODE_521e(), cVar2 == '\x01')) {
      FUN_CODE_52a8();
    }
    if ((DAT_EXTMEM_a31a == '\f') && (FUN_CODE_521e(), cVar2 == '\x01')) {
      FUN_CODE_536f();
    }
    DAT_EXTMEM_01ba = DAT_EXTMEM_a31a;
    DAT_EXTMEM_01bb = DAT_EXTMEM_a319;
  }
  EA = cVar1 != '\0';
  return;
}


