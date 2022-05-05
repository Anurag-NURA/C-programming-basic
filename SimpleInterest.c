//To calculate simple Interest.
#include<stdio.h>
#include<conio.h>
int main()
{
 float p, r, t, SI;
 clrscr();

 printf("\n Enter price, rate of interest and time:");
 scanf("%f%f%f", &p, &r, &t);

 SI = (p*r*t)/100;

 printf("\n Simple interest:%f", SI);
 return 0;    
}