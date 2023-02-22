
void register_tm_clones(void)

{
  long lVar1;
  
  lVar1 = SUB168(ZEXT816(0) / SEXT816(2),0);
  if ((lVar1 != 0) && (PTR__ITM_registerTMCloneTable_00103fe0 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_00103fe0)
              (&__TMC_END__,lVar1,SUB168(ZEXT816(0) % SEXT816(2),0));
    return;
  }
  return;
}

