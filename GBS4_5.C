/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c[10000];
    int i,l=0,k=0;
    gets(c);
    for(l=0;c[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if((c[i]>=48)&&(c[i]<=57))
        {
            k++;
        }
    }
printf("%d",k);
    return 0;
}
