
undefined8 _fini(void)

{
  undefined8 in_RAX;
  
  __do_global_dtors_aux();
  return in_RAX;
}

