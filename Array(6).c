//Swapping of array elements
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr1[50], arr2[50], size, i, j ;

 printf("\n Enter array size:");
 scanf("%d", &size);
 printf("\n Enter elements of array");
 for(i=0; i<size; ++i)
 {
    scanf("%d", &arr1[i]);
 }
 j=size-1;
 for(i=0; i<size; ++i)
 {
   arr2[i]=arr1[j];
   --j;
 }
 printf("\n Array after swapping:");
 for(i=0; i<size; ++i)
 {
    printf("%d", arr2[i]);
 }
 return 0;
}
