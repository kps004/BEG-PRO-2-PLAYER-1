#include <stdio.h>

int main()
{
 char n[10000];
 int i,l=0,k=0;
 scanf("%[^\n]%*c",n);
 //scanf("\n");
 scanf("%d",&k);
 for(i=0;n[i]!='\0';i++);
 for(l=0;l<k;l++)
 {
     printf("%s\n",n);
 }
    return 0;
}
