#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter the vlue of a b &c");
 scanf("%d%d%d\n",&a,&b,&c);

 if(a>b)
  {
   if(a>c)
    {
     printf("a is the largest no ");
    }
    else
    {
     printf("b is the largest no ");
    }
  }
  else
  {
   if(b>c)
    {
     printf("b is the largest no ");
    }
   else
    {
     printf("c is the largest no ");
    }
  }
  getch();
}