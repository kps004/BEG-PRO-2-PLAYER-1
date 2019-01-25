

#include <stdio.h>

int main(){
    
     char c[100000],t;
     int i,j,k,l;
     gets(c);
     for(i=0;c[l]!='\0';l++);
     c[0]=c[0]-32;
     for(i=0;i<l;i++)
     {
         if(c[i]==' ')
         {
             c[i+1]=c[i+1]-32;
         }
     }
     for(i=0;i<l;i++)
     {
         printf("%c",c[i]);
     }

    return 0;
}
