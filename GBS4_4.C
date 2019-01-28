

#include <stdio.h>

int main()
{
    char c[10000];
    int i,l=0,k=1;
    gets(c);
    for(l=0;c[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if(c[i]=='.')
        {
            k++;
        }
    }
printf("%d",k);
    return 0;
}
