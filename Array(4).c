//write a c program to find duplicate element in the array using function
#include<stdio.h>
#include<conio.h>
int main()
{
 int array[100], i, n, j;

 printf("\n Enter the size of the array:");
 scanf("%d",&n);

 printf("\n Enter elements in array:");
 for(i=0; i<n; ++i)
 {
   scanf("%d", &array[i]);
 }
 printf("\n Duplicate elements is/are:");
 for(i=0; i<n; ++i)
 {
    for(j=i+1; j<n; ++j)
    {
      if(array[i]==array[j])
      {
        printf("\n Duplicate elements is/are: %d", array[i]);
      }
      else
      {
        printf("\n There are no duplicate elements");
        break;
      }
    }
 }
 return 0;
}