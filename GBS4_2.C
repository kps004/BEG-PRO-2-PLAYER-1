

#include <stdio.h>

int main()
{
 char n[10000],t;
 int i,k,l=0;
 gets(n);
 for(i=0;n[i]!='\0';i++);
 if(n[0]==' ')
 {
     k=1;
 }
 else
 {
     k=0;
 }
 for(;k<i;k++)
 {
     if(n[k]==' ')
     {
         l++;
     }
 }
 l++;
 printf("%d",l);
    return 0;
}
