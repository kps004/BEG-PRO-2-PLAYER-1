/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//check wether differ by one character
int main()
{
     char c1[10000],c2[10000],t;
     int i,j,n,m,k,l,f=0;
    // scanf("%s",c1);
    gets(c1);
     gets(c2);
     for(k=0;c1[k]!='\0';k++);
     for(l=0;c2[l]!='\0';l++);
       for(i=0;i<2;i++)
       {
           t=c1[i];
           for(j=0;j<k;j++)
           {
               if(c1[j]==t)
               {
                   n++;
               }
           }
           for(j=0;j<l;j++){
               if(c2[j]==t)
               {
                m++;
                
               }
             }
           
           if((m==(l-1))&&(n==(k-1)))
           {
               printf("yes");
               f=1;
               break;
           }
           
       }
      
       if(f==0)
       {
         printf("No");  
       }
    return 0;
}
