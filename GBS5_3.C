#include <stdio.h>

int
main ()
{
  char c1[10000], c2[10000];
  int i, j, k, l=0;
  gets (c1);
  gets (c2);
  for (i = 0; c1[i] != '\0'; i++);
  for (j = 0; c2[j] != '\0'; j++);
  for(k=i;k<(i+j);k++)
  {
    c1[k]=c2[l];
    l++;
  }
printf("%s",c1);
  return 0;
}
