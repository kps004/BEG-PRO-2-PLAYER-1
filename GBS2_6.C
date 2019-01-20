

#include <stdio.h>

int main()
{
  int i,j,n,a,z,l=0;
  scanf("%d%d",&a,&z);
  for(i=a;i<z;i++)
  {
     for(j=2;j<i;j++)
     {
         if(i%j==0)
         {
             l++;
         }
     }
     if(l==0)
     {
         printf("%d ",i);
     }
     l=0;
  }

    return 0;
}
