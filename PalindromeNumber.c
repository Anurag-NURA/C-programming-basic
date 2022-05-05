// C Program to Check Whether a Number is Palindrome or Not
#include<stdio.h>
#include<conio.h>
int main()
{
 int n, i, r, sum=0;
 clrscr();

 printf("\n Enter a number:");
 scanf("%d", &n);

 for(i=n; i!=0; i=i/10)
 {
  r = n%10;
  sum = sum*10 + r;    
 }  
 if(a==sum)
    printf("\n %d is a palindrome", n);
 else
    printf("\n %d is not a palindrome", n);
    return 0;
}