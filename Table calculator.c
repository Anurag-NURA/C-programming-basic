//write a program to print the table of the given number

#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i;
  printf("Enter a Number:");
  scanf("%d", &n);

  for(i = 1; i <=10; ++i)
    {
       printf("%d * %d = %d \n", n, i, n*i);
    }  
  return 0;

}
