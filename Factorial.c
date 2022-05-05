// write a program to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, a, b=1;
 clrscr();
 printf("\n Enter a number:");
 scanf("%d", &a);

 for (i=1; i<=a; ++i)
 {
  b= b*i;
 } 
 printf("\n Factorial of %d is %d", a, b );

 return 0;
}