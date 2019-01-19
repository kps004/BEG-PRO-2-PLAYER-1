//exponent of a number
#include<stdio.h>
void main()
{
int i=1,a,b;
scanf("%d%d",&a,&b);
while(b)
{
i=i*a;
b--;
}
 printf("%d",i);
getch();
}
