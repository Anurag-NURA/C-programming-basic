// write a c program to print the reverse of a given number.For eg.,n=123 to n = 321
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, n, rev=0, rem;
 clrscr();

 printf("\n Enter number: ");
 scanf("%d", &n);
 
 for(i=n; i>0; i=i/10)
  {
    rem = i%10;
    rev = rev*10 + rem;
  }
 printf("The reverse is: %d", rev);

 return 0;
}

