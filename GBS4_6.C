

#include <stdio.h>

int main()
{
    char c[10000];
    int i,l=0,k=0;
    scanf("%[^\n]",c);
    for(l=0;c[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if((c[i]>=48)&&(c[i]<=57))
        {
            
        }
        else
        if((c[i]>=60)&&(c[i]<=90))
        {
            
        }
        else
        if((c[i]>=97)&&(c[i]<=122))
        {
            
        }
        else
        {
            k++;
        }
    }
printf("%d",k);
    return 0;
}
