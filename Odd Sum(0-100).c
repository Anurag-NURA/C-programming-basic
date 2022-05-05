//Write a c program to print the sum of all odd number from 1 to 100
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, sum=0;
 for(i=0; i<100; i=i+2)
 {
     sum = sum + i;
 }
 
 printf("\n the sum of all odd number from 0 to 100 is %d", sum);

 return 0;
}