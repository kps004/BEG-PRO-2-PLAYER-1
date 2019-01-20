#include<stdio.h>
void main()
{
int n,l=0,i;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
  l++;
 }
}
if(l==0)
{
printf("yes");
}
  else
  {
  printf("no");
  }


getch();
}