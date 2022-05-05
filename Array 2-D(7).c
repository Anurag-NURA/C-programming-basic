//To display diagonal elements of an array
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr1[50][50], row, col, i, j;
 printf("\n Enter size of row:");
 scanf("%d", &row);
 printf("\n Enter size of coloum:");
 scanf("%d", &col);
 printf("\n Enter Elements of Matrix:");
 for(i=0; i<row; ++i)
 {
    for(j=0; j<col; ++j)
    {
        scanf("%d", &arr[i][j]);
    } 
 }
 if(row==col)
 {
    for(i=0; i<row; ++i)
    {
        for(j=0; j<col; ++j)
            {
            if (i=j)
                {
                printf("\n %d", arr[i][j]);
                }
            
            } 
    }
 }
 else
 {
    printf("\n Matrix is not a square matrix");
 }
 
 return 0;
}