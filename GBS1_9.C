#include<stdio.h>
void main()
{

int i,n,k,a[50],t=0;
scanf("%d",&n);
scanf("%d",&k);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
  for(i=k;i<n;i++)
  {
  t=t+a[i];
  }
  printf("total=%d",t);

getch();
}