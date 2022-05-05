//Write a program to read 2 numbers and increment their values via a user defined function.
#include<stdio.h>
#include<conio.h>
int increment(int x, int y);
int main()
{
 int n1, n2;
 clrscr();

 printf("Enter the values for n1 and n2:");
 scanf("%d%d", &n1, &n2);
 increment(n1,n2);
 return 0;
} 
int increment(int x, int y)
{
 x = x + 1;
 y = y + 1;
 printf("\n After increment n1=%d and n2=%d", x, y);
}