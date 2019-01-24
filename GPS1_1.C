#include <stdio.h>

int main()
{
  char n[10000];
  int i,l;
  gets(n);
  for(i=0;n[i]!='\0';i++);
  for(l=i;l>=0;l--)
  {
      printf("%c",n[l]);
  }
  
  

    return 0;
}
