/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  
  char t1[10000],t2[10000];
  int i,j,k,l;
  scanf("%s",t1);
  scanf("%s",t2);
  //gets(t2);
  for(k=0;t1[k]!='\0';k++);
  for(l=0;t2[l]!='\0';l++);
  for(i=0;i<k;i++)
  {
      if((t1[i]==t1[i+1])&&(t2[i]==t2[i+1]))
      {
          if((t1[i+1]==t1[i+2])&&(t2[i+1]==t2[i+2]))
      {
          printf("yes");
          break;
      }
      else{
          printf("no");
          break;
      }
  }
  }
  return 0;
}
