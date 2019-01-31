

#include <stdio.h>

int main()
{
    long int r=0,i=0,n=0;
    scanf("%d",&n);
while(n)
{r=n%10;
   n=n/10;
   i=i+r;
    
}
printf("%d",i);

    return 0;
}
