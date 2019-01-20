#include <stdio.h>

int
main ()
{
  int r, s = 0, n, t;
  scanf ("%d", &n);
  t = n;
  while (n)
    {
      r = n % 10;
      n = n / 10;
      s = s * 10 + r;
      // printf("%d",r);

    }
  if (s == t)
    {
      printf ("yes");
    }
  else
    {
      printf ("no");
    }



  return 0;
}
