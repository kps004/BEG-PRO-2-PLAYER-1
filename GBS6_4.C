

#include <stdio.h>

int main()
{
    long int r=0,i=0,n=0;
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
       if(i%2==0)
       {
           printf("%d",i);
           break;
       }
   }
    return 0;
}
