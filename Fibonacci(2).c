#include<stdio.h>
#include<conio.h>
int main()
{
   int a=0, b=1, range, c, sum=0;
   clrscr();
   
   printf("\n Enter the range of Fibonacci series: ");
   scanf("%d",&range);

   printf("\n The fibonacci series is:");
   
   while( a <= range )
   {
      printf("%d\t",a);
      sum += a;
      c = a + b;
      a = b;
      b = c;
   }

   printf("\n Their sum is = %d", sum);

   return 0;
}