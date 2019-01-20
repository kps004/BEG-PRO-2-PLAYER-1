

#include <stdio.h>

int main()
{
    unsigned long int t=0,n,a,d,i;
    scanf("%d%d%d",&n,&a,&d);
    for(i=1;i<=n;i++)
    {
    t=t+a+(i-1)*d;
    }
    printf("%d",t);
    return 0;
}
