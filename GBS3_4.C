/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[1000],i,n,j,min,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {  
        min=a[i];
        for(j=i+1;j<n-1;j++)
        {
            if(min>=a[j])
            {
               min=a[j];
               p=j;
            }
        }
        a[p]=a[i];
        a[i]=min;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
