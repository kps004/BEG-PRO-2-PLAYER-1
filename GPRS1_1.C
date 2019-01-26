

#include <stdio.h>

int main()
{
    char c1[100000],c2[100000],t;
    int k,l,i,j;
    gets(c1);
    gets(c2);
    for(k=0;c1[k]!='\0';k++);
    for(l=0;c2[l]!='\0';l++);
    for(i=0;i<k;i++)
    {
        if((c1[i]==c2[i])&&(c1[i+1]==c2[i+1]))
        {
            printf("%c%c",c1[i],c2[i+1]);
            i++;
        }
        else
        {
            break;
        }
    }
    return 0;
}
