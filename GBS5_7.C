#include <stdio.h>

int main ()
{
 long int a[100000],min,max,i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  max=0;
  min=a[n-1];
  for(i=0;i<n;i++)
  {
      if(max<a[i])
      {
          max=a[i];
      }
      if(min>a[i])
      {
          min=a[i];
      }
  }
  printf("%d %d",min,max);
  return 0;
}
