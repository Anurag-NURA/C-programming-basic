#include<stdio.h>
#include<conio.h>
#include<math.h>
struct student
{
  char *name;
  int rollno;
  float percent;
};
void display(struct student *s);
void main()
{
  int i;
  struct student s[2];
  clrscr();
  pow(4,4);
 
  for(i=0;i<=1;i++)
  {
    printf("Enter the record number s%d :",i);
    gets(s[i].name);
    fflush(stdin);
    scanf("%d ",&s[i].rollno);
    fflush(stdin);
    scanf("%f ",&s[i].percent);
    fflush(stdin);
  }
  display(s);
  getch();
}
void display(struct student *s)
{
  int i;
  for(i=0;i<=1;i++)
  {
    printf("%s",s->name);
    printf("%d %f",s->rollno,s->percent);
    s++;
  }
}