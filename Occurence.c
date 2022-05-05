//WAP to count occurrence of a given digit in a 5 digit number
#include <stdio.h>
#include <conio.h>
int main()
{
    long num;
    int digit,rem,count=0;
    clrscr();
    
    printf("Enter the Number: ");
    scanf("%ld",&num);
    printf("Enter the digit to be counted:");
    scanf("%d",&digit);

    while(num!=0)
    {
     rem=num%10;
     if(rem==digit)
     count++;
     num=num/10;
    }

printf("The digit %d present %d times ",digit,count);
return 0;
}
