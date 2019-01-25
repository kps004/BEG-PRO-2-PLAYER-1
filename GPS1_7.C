

#include <stdio.h>

int main()
{
    char c[100000],t;
    int i,l;
    gets(c);
    for(i=0;c[i]!='\0';i++);
    for(l=0;l<i;)
    {
        t=c[l];
        c[l]=c[l+1];
        c[l+1]=t;
        l=l+2;
        
    }
    for(l=0;l<i;l++)
    {
        printf("%c",c[l]);
    }

    return 0;
}
