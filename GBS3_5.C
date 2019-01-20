#include<stdio.h>
void main()
{
int n,a[10000],i,j,avg=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
avg=avg+a[j];
}
  avg=avg/n;
 printf("%d ",avg);
getch();
}