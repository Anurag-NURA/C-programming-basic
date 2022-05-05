//write a c program to convert Binary to Decimal equivalent 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int decimal=0 , rem, i;
 long num; 
 clrscr();

 printf("\nEnter a Binary Number:");
 scanf("%ld", &num);

 for(i=0; num!=0;i++)
 {
     rem = num%10;
     decimal = decimal + rem * (pow(2,i));
     num = num/10;
 }

 printf("Decimal Equivalent is %d", decimal);
 return 0;
}