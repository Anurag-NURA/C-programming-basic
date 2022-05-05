// write a program that reads a string and displays the first small alphabet in the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100];
 int i, len, flag=0;
 clrscr(); 

 printf("\n Enter a word:");
 gets(str);
 len = strlen(str);
 for (i=0; i<len; ++i)
 {
   if(str[i]>='a' && str[i]<='z')
    {
       printf("\n First small case letter is %c", str[i]);
       flag++;
       break;
    } 
 }
 if (flag==0)
 {
    printf("\n No small case aplhabet was found");
 }
 getch();
}