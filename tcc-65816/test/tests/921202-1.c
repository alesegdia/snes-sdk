#ifndef STACK_SIZE
#define	VLEN	1055
#else
#define VLEN ((STACK_SIZE/16) - 1)
#endif
main ()
{
  long dx[VLEN];
  long dy[VLEN];
  long s1[VLEN];
  int cyx, cyy;
  int i;
  long size;

  for (;;)
    {
      size = VLEN;
      mpn_random2 (s1, size);

      for (i = 0; i < 1; i++)
	;

      dy[size] = 0x1234;

      for (i = 0; i < 1; i++)
	cyy = mpn_mul_1 (dy, s1, size);

      if (cyx != cyy || mpn_cmp (dx, dy, size + 1) != 0 || dx[size] != 0x1234)
	{
	  foo ("", 8, cyy); mpn_print (dy, size);
	}
      exxit();
    }
}

foo (){}
mpn_mul_1(){}
mpn_print (){}
mpn_random2(){}
mpn_cmp(){}
exxit(){exit(0);}
