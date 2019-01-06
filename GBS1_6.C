#include<stdio.h>
void main()
{
  int z,l;
  scanf("%d",&z);
  while(z>0)
  {
  scanf("%d",&l);
  if((l%4==0)&&(l%100==0)||(l%400==0))
  printf("leap year");

  else
  printf("not a leap year");


z--;
  }

getch();
}