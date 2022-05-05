//write a program to enter a string and charcacter and count the occurence of a particular aplhabet
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100], ch;
 int ctr=0, i;
 clrscr();

 printf("\n Enter a string:");
 gets(str);
 printf("\n Enter a character value:");
 ch=getchar();
 i=0;
 while(str[i]!='\0')
 {
    if(str[i]==ch)
    {
        ctr++;
    } 
    i++;
 }
 printf("\n The character %c occurs %d time", ch, ctr);
 getch();
}