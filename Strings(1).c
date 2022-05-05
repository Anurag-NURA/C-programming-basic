//c program to enter name from user and print it
#include<stdio.h>
#include<conio.h>
int main()
{
 char sname[10];//used arrays
 int i;
 clrscr();

 printf("\n Enter your name:");
 for(i=0; i<=20; i++)
 {
    scanf("%c", &sname[i]);
 }
 printf("\n Entered name is:");
 for(i=0; i<=20; i++)
 {
    printf("%c", sname[i];)
 }
 return 0;
}