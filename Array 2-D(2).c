//C Program to Read and Print a RxC Matrix, R and C must be input by the User.
#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
int main()
{
 int r, c, arr2d[ROW][COL];
 clrscr;
 printf("\n Enter 9 elements for the matrix:");

 for(r=0; r<ROW; r++)
 {
    for(c=0; c<COL; c++)
    {
        scanf("%d", &arr2d[r][c]);
    }
 }
 for(r=0; r<ROW; r++)
 {
    for(c=0; c<COL; c++)
    {
        printf("%d", arr2d[r][c]);
    }
  printf("\n");
 }
 return 0;
}