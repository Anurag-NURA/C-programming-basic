//C program to print a string using pointer.
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
 char str[100];
 char *ptr;
 clrscr();

 printf("Enter a string: ");
 gets(str);
 ptr=str;//assign address of str to ptr
     
 printf("Entered string is: ");
 if (*ptr!='\0')
 {
 printf("%c",*ptr++);
 }
 return 0;
}