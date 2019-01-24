
#include <stdio.h>

int main()
{
  
  char t[10000];
  int n,i;
  gets(t);
  for(i=0;t[i]!='\0';i++);
  t[i]='.';
  
  printf("%s",t);
  

    return 0;
}
