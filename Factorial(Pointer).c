//Write a c program to calculate factorial of a number via a user defined function implemented via call by reference technique.
#include<stdio.h>
#include<conio.h>
int factorial(int*);
int main()
{
 int n, f;
 clrscr();

 printf("\n Enter a number:");
 scanf("%d", &n);
 f=factorial(&n);
 printf("\n factorial:%d",f);
 return 0;
}
int factorial (int *p)
{
 int f=1;
 for(int i=*p;i>1; --i)
 {
     f = f * i;
 }
 return f;
}