
char * get_flag(char *param_1,int param_2)

{
  size_t sVar1;
  char *__s;
  long in_FS_OFFSET;
  undefined local_38 [24];
  code *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (code *)PTR_not_the_flag_00103ff0;
                    /* [BAD 1] strlen */
  sVar1 = strlen(param_1);
  if (sVar1 - 1 < 0x19) {
                    /* [BAD 1] strlen */
    sVar1 = strlen(param_1);
                    /* [BAD 1] memcpy */
    memcpy(local_38,param_1,sVar1);
  }
  if (param_2 == 1) {
                    /* [BAD 2] calloc */
    __s = (char *)calloc(1,100);
                    /* [BAD 1] snprintf */
    snprintf(__s,99,"%s",local_38);
  }
  else if ((local_20 == (code *)PTR_not_the_flag_00103ff0) ||
          (local_20 == (code *)PTR_flag_00103fd0)) {
    __s = (char *)(*local_20)();
  }
  else {
    __s = "";
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __s;
}

