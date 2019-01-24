#include <stdio.h>

int main()
{
  
  int i,t=0,n;
  scanf("%d",&n);
  while(n)
  {
      i=n%10;
      t=t*10+i;
        n=n/10;
  }
  printf("%d",t);
  
  

    return 0;
}
