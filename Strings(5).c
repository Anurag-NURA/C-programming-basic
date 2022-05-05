//reverse string
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
 char s[100];
 clrscr();

 printf("\n Enter a string:");
 gets(s);

 strrev(s);

 printf("\n Reverse is: %s", s);

 return 0;
}