//Write a C program to reverse a number passed by reference to a function
#include<stdio.h>
#include<conio.h>
int rev1 (int *p);
int main()
{
 int n, reverse;
 clrscr();
 
 printf("\n Enter a number:");
 scanf("%d", &n);
 reverse = rev1(&n);
 printf("\n Reverse Number:%d", reverse);

 return 0;
}
int reverse (int *p)
{
 int i, rem, rev=0; 
 for(i= *p; i>0; i=i/10)
 {
    rem = i % 10;
    rev = rev*10 + rem;
 }
 return rev;
}