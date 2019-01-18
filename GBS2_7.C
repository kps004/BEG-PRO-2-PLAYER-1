//factorial alone
//factorial
#include<stdio.h>
void main()
{
unsigned long int r=0,l=0,n=0,a=0,z=0,j=0,t=0,s=0,p=1;
scanf("%d",&a);
t=a;
n=a;
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
   if(s==a)
   {
  printf("%d ",s);

   }

getch();
}