

#include <stdio.h>

int main()
{
int l=0,r=0,n=0,t,p=1;    
scanf("%d",&n);
t=n;
while(n)
{    p=1;
     l=0;
      t=n;
    while(t)
    {
        t=t/10;
        l++;
    }
    l--;
    while(l)
    {
        p=p*10;
        l--;
    }
    r=n/p;
    n=n%p;
    
    printf("%d ",r);
}
return 0;
}
