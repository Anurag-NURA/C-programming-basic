//program to check is a number is a perfect number or not
#include<stdio.h>
#include<conio.h>
int main()
{
 int n, i, a, sum=0;
 clrscr();

 printf("\n Enter a number:");
 scanf("%d", &n);
 
 for(i=1;i<n;++i)
 {
    a = n%i;
    if(a==0)
    {
        sum= sum + i;
    }
 }
 if (sum==n)
   printf("\n %d is a perfect number", i);
 else
   printf("\n %d is not a perfect number", i);

 return 0;    
}