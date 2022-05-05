#include<stdio.h>
#include<conio.h>
void read (struct student *sp);
struct student
{
    char *name;
    int age;
};
void main()
{
 struct student s[2];
 int i;
 clrscr();

 for(i=0; i<=0; ++i)
 {
    printf ("\n Enter the name and age:");
    read(&s[i]);
 }
 
 for(i=0; i<=1; ++i)
 {
    printf("/n Name:");
    puts(s[i].name);
    printf("\n Age: %d", s[i].age);
 }
 getch();
}
void read(struct student *sp)
{
    fflush(stdin);
    gets(sp->name);
    scanf("%d", &sp->age);
}