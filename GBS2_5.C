
#include <stdio.h>

int main()
{
  int i,a,z;
  scanf("%d%d",&a,&z);
  for(i=a;i<=z;i++)
  {
     if(i%2==0)
     {
         printf("%d ",i);
     }
  }

    return 0;
}
