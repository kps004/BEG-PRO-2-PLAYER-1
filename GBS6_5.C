

#include <stdio.h>

int main()
{
    int N,M,c;
    scanf("%d %d",&N,&M);
    c=N*M;
    if(c%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    

    return 0;
}
