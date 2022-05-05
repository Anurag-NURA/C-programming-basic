//Insertion of element from TOP or BOTTOM in an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int arr[50], size, i, n, c;

 printf("\n Enter size of array");
 scanf("%d", &size);
 printf("\n Enter elements of array");
 for(i=0; i<size; ++i)
 {
    scanf("%d", arr[i]);
 }
 printf("\n Enter new value:");
 scanf("%d", &n);
 printf("\n Insert element from: \n 1. TOP \n 2. BOTTOM");
 scanf("%d", &c);
 switch(c)
 {
   case 1: if(size>=50) 
            {
               printf("\n Going out of array");
            }
            else
            {
            
            }
 
 
 }
}