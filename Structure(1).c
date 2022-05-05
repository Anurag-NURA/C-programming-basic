#include<stdio.h>
#include<conio.h>
#include<string.h>
 struct employee 
 {
   char name[10];
   int salary;
   char designation[20];
   float experience;
 };
 int main()
{
 struct employee emp1;

 strcpy(emp1.name,"Jatin")
 emp1.salary=1000;
 strcpy(emp1.designation,"Assistant manager"); 
 emp1.experience=7;
 
 
 printf("\n Name:%s", emp1.name);
 printf("\n Salary:%d", emp1.salary);
 printf("\n Designation:%s", emp1.designation);
 printf("\n Experience(Years):%f", emp1.experience);

 return 0;
}