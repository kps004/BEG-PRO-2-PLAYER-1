#include<stdio.h>
void main()
{
 int n,a[10000],i,j,k;

 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      printf("%d %d",a[i],i);
      printf("\n");
    }

getch();
}