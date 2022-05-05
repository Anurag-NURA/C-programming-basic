// C program to display largest number from among 3 numbers entered.
#include<stdio.h>
#include<conio.h>
int main()
{
 int a, b, c;
 
 printf("\n Enter three number:");
 scanf("%d%d%d", &a, &b, &c);

 if (a>b && a>c)
 {
    printf("\n %d is largest Number the three numbers", a);
 }
 if (b>a && b>c)
 {
    printf("\n %d is largest Number the three numbers", b);
 }
 else
 {
    printf("\n %d is largest Number the three numbers", c);
 }
 return 0;
}