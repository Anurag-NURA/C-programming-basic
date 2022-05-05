// Dynamic memory allocation 
#include<stdio.h>
#include<conio.h>
#define MAX 5
int main()
{
 int *ptr;/* for holding address of memory
             block returned by mallac()*/ 
 int pos, i, array[MAX];
 ptr = (int*)malloc(sizeof(int));
 /*memory block of size int type will
 be allocated in heap and address will be
 given to ptr*/  
 printf("\n Enter value:");
 for(i=0; i<MAX; ++i)
 {
 scanf("%d", &array[i]); 
 }
 /*if we want to pass any value in the heap --> *p = value
 or remove the value from the heap --> free(p)
 if we want to store array of int type than,
 ptr = (int*)malloc([size of array]*sizeof(int)) */

 
 return 0;
}