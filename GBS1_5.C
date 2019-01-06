#include<stdio.h>
void main()
{
 int z,a[10],n,i,max;
 scanf("%d",&z);
 while(z>0)
 {
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
max=0;
 for(i=0;i<n;i++)
 {
    if(max<a[i])
    {
    max=a[i];
    }

 }
 printf("%d",max);
 z--;
}

getch();
}