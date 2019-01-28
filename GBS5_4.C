#include <stdio.h>


main ()
{
  int a[10],i=0,k;
  scanf("%d",&k);
  for(i=0;i<10;i++)
  {
      a[i]=i+1;
  }
  for(i=0;i<10;i++)
  {
      if(k==a[i])
      {
          printf("YES");
          break;
      }
     
  }
  if(i==10)
      {
          printf("NO");
      }
  
  return 0;
}
