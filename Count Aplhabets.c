//C prgram to print count number of alphabets and number of digits in an Aplha-numberic string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char string[50];
 int i, length, Alphabet=0, Number=0, Count=0;
 clrscr();
 
 printf("\n Enter a string:");
 gets(string);
 length = strlen(string);
 printf("\n String length = %d", length);
 for (i=0; i<length; ++i)
 {
   if((string[i]>='a' && string[i]<='z')||(string[i]>='A' && string[i]<='Z'))
    {
      Alphabet++; 
    } 
   else if (string[i]>='0' && string[i]<='9')
    {
     Number++;
    }
 }
 Count = Alphabet + Number;
 printf("\n Total number of Alphabets in the string: %d", Alphabet);
 printf("\n Total number of Numeric in the string: %d", Number);
 printf("\n Total number of alphabet and Numeric in Aplha-numberic string: %d", Count);
 return 0;
}
