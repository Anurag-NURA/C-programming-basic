// C program to check if a number is odd or even
#include<stdio.h>
#include<conio.h>
int main()
{
 int a, result;
 clrscr();

 printf("\n Enter a number:");
 scanf("%d", &a);

 if(a%2==0)
 {
   printf("\n %d is an even number", a);
 }
 else
 {
   printf("\n %d is an odd number", a);  
 }
 return 0;
}