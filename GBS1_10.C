#include<stdio.h>
void main()
{
int r=0,n;
scanf("%d",&n);
while(n>=0)
{
n=n/10;
r++;
}
 printf("total digits=%d",r);
getch();
}
