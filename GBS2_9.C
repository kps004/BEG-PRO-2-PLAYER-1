//factorial
#include<stdio.h>
void main()
{
 int i,t=1,n,z;
 clrscr();
 scanf("%d",&z);
 while(z>0)
 {

 scanf("%d",&n);
 for(i=n;i>0;i--)
 {
 t=t*i;

 }
printf("%d",t);
z--;
 }
getch();
}