//Program to print the range of prime number 
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, j, num, flag=10, lb, ub;
 clrscr();

 printf("\n Enter lower range and upper range:");
 scanf("%d%d", &lb,&ub);
 
 for(j=lb; j<=ub; ++j)
 {
    flag=10;
    num=j;
    for(i=2;i<=num-1;++i)
    {
        if(num%i==0)
        {
            flag=20;
            break;
        }
     
    }
    if(flag==10)
    printf("\n %d is a prime", num);
 }
 return 0;
}