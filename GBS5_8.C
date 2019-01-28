#include <stdio.h>

int main ()
{
 long int a[100000],i,n,max=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   max=max+a[i];   
  }
 max=max/n;
 printf("%d",max);
  return 0;
}
