/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r=0,n;
    scanf("%d",&n);
    while(n)
    {
        r++;
        n=n/10;
    }
   printf("%d",r);
    return 0;
}
