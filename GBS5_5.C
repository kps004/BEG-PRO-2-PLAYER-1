#include <stdio.h>

int
main ()
{
 long int l=0,r,k;
  scanf("%d",&k);
  while(k)
  {
      r=k%10;
      k=k/10;
      l++;
  }
  printf("%d",l);
  return 0;
}
