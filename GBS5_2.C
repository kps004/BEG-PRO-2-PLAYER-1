#include <stdio.h>

int main()
{
 char c1[10000],c2[10000];
 int i,j;
gets(c1);
gets(c2);
 for(i=0;c1[i]!='\0';i++);
 for(j=0;c2[j]!='\0';j++);
 if(i>=j)
 {
     printf("%s",c1);
 }
 else
 {
     printf("%s",c2);
 }
    return 0;
}
