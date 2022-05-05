//write a program which reads a number and calculates factorial for the same via a user defined function
#include<stdio.h>
#include<conio.h>
long int factorial(int a);
int main()
{
  int a;
   clrscr();
   printf("\n Enter a number:");
   scanf("%d", &a);

   printf("Factoial is %d = %d", a, factorial(a));

  return 0;
}

  long int factorial(int a)
{
  if(a>=1)
    return a * factorial(a-1);
  else
    return 1;

}