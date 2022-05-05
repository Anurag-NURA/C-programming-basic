//c program to reverse a string provided by a user
#include<stdio.h>
#include<conio.h>
#include<string.h>
void xstrrev(char *ccptr);
void main()
{
 char cptr[20];
 clrscr();

 printf("\n Enter a string:");
 gets(cptr);
 printf("\n String just entered is:%s", cptr);
 xstrrev(cptr);
 printf("\n String after reversal is:%s", cptr);
 getch();
}
void xstrrev(char *ccptr)
{
 char ch, *beginning;
 beginning=ccptr;
 while(*ccptr!='\0')
 {
    ccptr++;
 }
 ccptr --;
 for(;beginning<ccptr; beginning++, ccptr--)
 {
    ch = *beginning;
    *beginning = *ccptr;
    *ccptr = ch;
 }
}

