// C program for insertion sort 
#include <math.h>
#include <stdio.h>
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int a)
{
  int i, key, j;
  for (i = 1; i < a; i++) 
  {
    key = arr[i]; /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
    j = i - 1;
  
   while (j >= 0 && arr[j] > key) 
   {
    arr[j + 1] = arr[j];
    j = j - 1;
   }
    arr[j + 1] = key;
  }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int a)
{
  int i;
  for (i = 0; i < a; i++)
  {
   printf("\n %d ", arr[i]);
  }
}
 
/* Driver program to test insertion sort */
int main()
{
  int a, j, arr[100];
  
  printf("\n Enter size of Array:");
  scanf("%d", &a);
  printf("\n Enter elements of the array:");
  for(j=0; j < a; j++)
  {
    scanf("%d", &arr[j]);
  }
 
  insertionSort(arr, a);
  printArray(arr, a);
 
  return 0;
}