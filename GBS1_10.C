#include<stdio.h>
void main()
{
int r=0,n;
scanf("%d",&n);
while(n)
{
n=n/10;
r++;
}
 printf("total digits=%d",r);
getch();
}