//Program to perform specific operations
#include<stdio.h>
#include<conio.h>
int main()
{
 int a, b;
 char operator;
 clrscr();

 printf("\n Enter two numbers:");
 scanf("%d%d", &a, &b);
 printf("\n Enter operation (+,-,*,/):");
 scanf("%s", &operator);

 switch(operator)
  {
  case '+':
        printf("\n Addition:");
        printf("\%d + %d = %d", a, b, a+b);
        break;
  case '-':
        printf("\n Difference:");
        printf("%d - %d = %d", a, b, a-b);
        break;
  case '*':
        printf("\n Product:");
        printf("%d * %d = %d", a, b, a*b);
        break;
  case '/':
        printf("\n Division:");
        printf("%d / %d = %d", a, b, a/b);
        break;
  default:
        printf("\n Entered wrong operation");
        break;    
    }
    return 0;
}