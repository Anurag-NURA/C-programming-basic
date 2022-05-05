// WAP which uses a structure student with details like student's name and percentage of marks and read 5 instances and will display same on the screen
#include<stdio.h> 
#include<conio.h>
#include<string.h>

struct student
{
 char name;
 float percent;
}s1;

void display (struct student s1);
void main()
{
 clrscr();
 printf("\n Enter name:");
 gets(s1.name);
 printf("\n Enter percetnage:");
 scanf("%f", s1.percent);
 display(s1);
 getch();
}
void display(struct student si)
{
  printf("\n Name is %s and precentage is %f", si.name, si.percent);
}