//
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, year, lb, ub;
 clrscr();

 printf("\n Enter the range:");
 scanf("%d%d", &lb, &ub);

 for(i=lb; i<=ub;++i)
 {
     year=i;
     if((year%4==0)&&(year!=100)||(year%400==0))
     printf("year=%d", year);
 }
 return 0;
}