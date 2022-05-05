//to print x raised to the power y on the screen
#include<stdio.h>
#include<conio.h>
int main()
{
 int i, x, y, result=0;
 clrscr();
 printf("\n Enter calue for x and y:");
 scanf("%d%d", &x, &y);
 
 for(i=1 ; i <=y; ++i)
   {
    result= result*x;
   }
 printf("\n %d raised to the power of %d is %d", x,y,result);

 return 0;
}