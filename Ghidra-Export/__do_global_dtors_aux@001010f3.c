
/* WARNING: Removing unreachable block (ram,0x00101140) */

void __do_global_dtors_aux(void)

{
  if (completed_6214 != '\0') {
    return;
  }
  if (PTR___cxa_finalize_00103fc8 != (undefined *)0x0) {
    __cxa_finalize(__dso_handle);
  }
  deregister_tm_clones();
  if (PTR___deregister_frame_info_00103fd8 != (undefined *)0x0) {
    __deregister_frame_info(&fde_001020b0);
  }
  completed_6214 = 1;
  return;
}

