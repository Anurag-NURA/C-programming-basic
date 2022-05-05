// initialization of character data using pointer in strings
#include<stdio.h>
#include<conio.h>
#include<sting.h>
int main()
{
 char *sname1="anurag";// used string
 char *sname2;
 int i;
 clrscr();
 
 
 sname2=sname1;
 printf("String 1 is %s", sname1);
 printf("String 2 is %s", sname2);
 return 0;
}
