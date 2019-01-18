//factorial
#include<stdio.h>
void main()
{
int r,l,n,a,z,i,j,t,s,p;
scanf("%d%d",&a,&z);
for(i=a;i<=z;i++)
{
l=0;
p=1;
s=0;
t=i;
n=i;
while(n)
{
n=n/10;
l++;

}
while(t)
{  p=1;
  r=t%10;
  for(j=0;j<l;j++)
  {
   p=p*r;
  }
   s=s+p;
   t=t/10;
  }
   if(s==i)
   {
  printf("%d ",s);

   }
}
getch();
}