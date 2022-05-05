// C program to convert string from lower case to upper case
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
   char str[25];
   int i;
   clrscr();

   printf("Enter the string:");
   gets(str);

   for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=97&&str[i]<=122)
        {
         str[i]=str[i]-32;
        }
   }
   printf("\nUpper Case String is: %s",str);
   return 0;
}