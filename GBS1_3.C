#include<stdio.h>
void main()
{
char t;
int z;
//scanf("%d",&z);
//while(z>0)
//{
scanf("%c",&t);
switch(t)
{
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
	       printf("vowel");
	       break;
    default:
	      printf("invalid");
	      break;

}
//z--;
//}


getch();
}