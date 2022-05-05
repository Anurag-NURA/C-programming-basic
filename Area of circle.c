//C program to calculate area of cicle
#include<stdio.h>
#include<conio.h>
int main()
{
 float radius, area;
 clrscr();

 printf("\n Enter radius of circle:");
 scanf("%f", &radius);

 area = (22/7)*radius*radius;

 printf("\n Area of circle:%f", area);
 return 0;
}