#include<stdio.h>
void main()
{
int n,hr,min;
scanf("%d",&n);
hr=n/60;
min=n%60;
printf("%d %d",hr,min);
getch();
}