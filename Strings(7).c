//C prgoram to read a string and show the number of alphabet in the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100];
 int i, len, ctr=0;
 clrscr();

 printf("\n Enter a word:");
 gets(str);
 len = strlen(str);
 printf("\n String length = %d", len);
 for (i=0; i<len; ++i)
 {
   if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
    {
      ctr++; 
    } 
 }
 printf("\n Total number of alphabet in letter = %d", ctr);
 getch();
}