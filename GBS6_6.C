/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char n[10000];
    int i,j=0,k,l=0;
    gets(n);
    for(k=0;n[k]!='\0';k++);
    for(i=0;i<k;i++)
    {
        if((n[i]>=65)&&(n[i]<=122))
        {
            l=1;
        }
        if((n[i]>=48)&&(n[i]<=57))
        {
            j=1;
        }
        if((l==1)&&(j==1))
        {
            printf("Yes");
            break;
        }else
             if(i==k-1)
             {
                 printf("No");
             }
    }

    return 0;
}
