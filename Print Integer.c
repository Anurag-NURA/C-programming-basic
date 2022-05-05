//write a c program to print first ten integer from the given range provided by user
#include<stdio.h>
#include<conio.h>
int main()
{
 int a, b, i, j=1;
 clrscr();
 
 printf("\n Give numbers for range:");
 scanf("%d%d", &a, &b);
 for(i=a; i<=b; ++i)
  {
    if (j>=1 && j<=10 )
    {
     printf("\n %d", i);
     ++j;
    }
    else
    {
     break;
    }
  }
 return 0;
}