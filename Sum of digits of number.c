//write a c program to print the sum of all digit of given number
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, n, s, r;
 clrscr();

 printf("\n Enter a number:");
 scanf("%d", &n);
 
 for(i=n; i>0; i/10)
  {
    r = i%10;
    s = s + r;
  }
  printf("The sum is: %d", s);
  
  return 0;
}