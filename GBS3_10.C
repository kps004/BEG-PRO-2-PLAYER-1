#include<stdio.h>
void main()
{
unsigned int h2,m2,h1,m1;
scanf("%d%d",&h2,&m2);
scanf("%d%d",&h1,&m1);
h2=h2-h1;
m2=m1-m2;
printf("%d ",h2);
printf("%d ",m2);

getch();
}