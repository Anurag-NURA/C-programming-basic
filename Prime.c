// program to check a number is prime or not
#include<stdio.h>
#include<conio.h>
int main()
{
 int num, i, flag=0;
 clrscr();
 
 printf("\n Enter a number:");
 scanf("%d", %num);

 for(i=2; i<=num/2; ++i)
 {
     if(num%i==0)
     {
         flag= 1;
         break;
     }
 }
 if  (num==1)
 {
     printf("%d is neither a prime nor composite", num);
 }
 else
 {
     if(flag==1)
     {
         printf("%d is not a prime number", num);
     }
    else
    {
        printf("%d is a prime number", num);
    }
 }
 
 return 0;
}