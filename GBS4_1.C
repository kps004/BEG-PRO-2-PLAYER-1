#include <stdio.h>

int main()
{
 char n[10000];
 int i,l=0,k;
 gets(n);
 for(i=0;n[i]!='\0';i++);
 for(k=0;k<i;k++)
 {
     if(n[i]==' ')
     {
         
     }
     else
     {
         l++;
     }
 }
printf("%d",l);
    return 0;
}
