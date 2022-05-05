//Nested structure using call by refernce(by pointer)
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct address
{
  int number;
  char location;
  int pin;  
};

struct student
{
 char name;
 int age;
 struct address a1;
};

void display(struct student *s);
void main()
{
 struct student s1;
 clrscr();
 printf("\n Enter name, age, number, location and pin:");
 scanf("%s %d %d %s %d", s1.name, &s1.age, &s1.a1.number, s1.a1.location, &s1.a1.pin);
 display(&s1);
 getch();
}
void display(struct student *s)
{
 printf("/n Entered information is:");
 printf("%s %d %d %s %d", s->name, s->age, s->a1.number, s->a1.location, s->a1.pin);
}