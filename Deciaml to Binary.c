// program to convert decimal to binary equivalent of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
 int num, rem, i;
 long binary=0;
 clrscr();

 printf("\n Enter a number:");
 scanf("%d", &num);

 for(i=1; num!=0; i=i*10)
 {
     rem = num%2;
     binary = binary + rem * i;
     num = num/2;
 }
 printf("\n Binary Equivalent is %d", binary);
 return 0;
}