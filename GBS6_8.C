/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long int a[10000],i,k,n;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            printf("Yes");
            break;
        }else
              if(i==(n-1))
              {
                  printf("No");
              }
    }

    return 0;
}
