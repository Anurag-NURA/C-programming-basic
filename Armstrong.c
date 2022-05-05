// to check whether a no. is an Armstrong no. or not (153= 1³+5³+3³)
#include<stdio.h>
#include<conio.h>
int main()
{
 int num, temp, sum=0, digit;

  printf("\n Enter a number:");
  scanf("%d", &num);
 for(temp=num; temp!=0; temp=temp/10)
  {
    digit = temp % 10;
    sum = sum + (digit*digit*digit);
  }
 
 if(sum==num)
    printf("\n %d is an Armstrong number", num);
 else
    printf("\n %d is not an Armstrong number", num);
 
  return 0;
}