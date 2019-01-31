/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   long int i,n,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=t+i;
    }
    printf("%d",t);
    return 0;
}
