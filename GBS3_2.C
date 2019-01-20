

#include <stdio.h>

int main()
{
  unsigned long int a[10000],max=0,n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(max<a[i])
      {
          max=a[i];
      }
  }
  printf("%d",max);
    return 0;
}
