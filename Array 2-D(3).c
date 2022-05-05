//C Program to Read a Matrix and find Sum and Product of all elements.
#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
void print_sum(int *pta);
void print_product(int *pta);
int main()
{
 int r, c, arr2d[ROW][COL];
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
 print_sum(&arr2d[r][c]);
 print_product(&arr2d[r][c]);
 return 0;
}
void print_sum(int *pta)
{
 int r, c, sum=0;

 for(r=0; r<ROW; r++)
 {
    for(c=0; c<COL; c++)
    {
        sum = sum + *pta;
        ++ *pta;
    }
 }
 printf("\n total of all array elements=%d",sum);       
}
void print_product(int *pta)
{
    int r, c, prod=1;

 for(r=0; r<ROW; r++)
 {
    for(c=0; c<COL; c++)
    {
        prod = prod * (*pta);
        ++ *pta;
    }
 }
 printf("\n Product of all array elements=%d",prod); 
}