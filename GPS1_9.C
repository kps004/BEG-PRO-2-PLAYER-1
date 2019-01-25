/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,z,i,j,t,l,C=1;
    scanf("%d%d",&a,&z);
    for(i=a;i<=z;i++)
    {   
        l=0;
        t=i;
        for(j=3;j<t;j++)
        {
           if(t%j==0)
           {
               l++;
           }
        
        }
        if(l==0)
        {
           C++;  
        }
    }
    printf("%d",c);
    return 0;
}
