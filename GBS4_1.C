

#include <stdio.h>

int main()
{
 char n[10000];
 int i,k;
 gets(n);
 for(i=0;n[i]!='\0';i++);
printf("%d",i);
    return 0;
}
