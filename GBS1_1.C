#include<stdio.h>
void main()
{

int z,a;
scanf("%d",&z);
while(z>0)
{
     
scanf("%d",&a);
     if(a>=0){
if(a%2==0)
printf("even number");

else
     printf("odd number");
     }
     else
          printf("invalid");
}
     z--;
          
}
 getch();
}
