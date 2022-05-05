// write a c program to skip counting to 5 
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, n, c;
 clrscr();

 printf("Enter a Number:");
 scanf("%d", &n);

 for (i = 5; i <= 100; i = i +5)
  {
    c=i*n;
    printf("%d",c);
  }
 
 return 0;
}