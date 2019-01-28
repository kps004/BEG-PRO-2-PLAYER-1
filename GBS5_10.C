#include <stdio.h>

int
main ()
{
  long int a, b, i = 1, j, l = 0;
  scanf ("%ld", &a);
  while (i < a)
    {
      i = i * 2;
      if (i > a)
	{
	  printf ("No");
	  break;
	}


    }
  if (i == a)
    {
      printf ("YES");
    }


  return 0;
}
