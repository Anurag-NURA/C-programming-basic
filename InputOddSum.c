//write a c program to take input and add the sum of the odd number provided
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, a, b, sum;
 printf("\nEnter two number for limit:");
 scanf("%d,%d", &a, &b);
 
 for(i=a, i<=b, i+2)
 {
     sum=sum+i;
 }
 printf("\n The sum of the provided limit is %d", sum);

 return 0;
}