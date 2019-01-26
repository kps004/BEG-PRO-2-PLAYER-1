

#include <stdio.h>

int main()
{
    long int a[1000000],i,j,n,k,max,l;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    max=a[0];
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
        if(max<a[i])
        {
            max=a[i];
            l=i;
            
        }
        
     }
        
    }
    for(i=0;i<n;i++)
    {
        if(l!=i)
        {
            printf("%d ",a[i]);
        }
    
    }
   
}
