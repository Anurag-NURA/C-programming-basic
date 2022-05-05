//Array (Example 2: Poniters in Arrays)
#include<stdio.h>
#include<conio.h>
void main()
{
 int i, n1=4, n2=34, n3=-23;// int n[3]; Array of Integers
 int *aop[3];// Array of Pointers
 int arr[5];
 int*pta;
 clrscr();
 aop[0]=&n1;
 aop[1]=&n2;
 aop[2]=&n3;
 for (i=0; i<=2; ++i)
 {
     printf("\n Value = %d, address = %u", *aop[i], &aop[i]);
 }
 printf("\n Enter 5 elements:");
 for(i=0; i<=4; ++i)
 {
     scanf("%d", &arr[i]);
 } 
 pta=&arr[0];// pta is pointer to an array
 for(i=0; i<=4; ++i)
 {
     printf("/n %d", *pta);
    ++pta;
 }
 getch();
}