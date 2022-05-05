//write a c program to find and count duplicate elements in the array using function
#include<stdio.h>
#include<conio.h>
int main()
{
 int array[100], i, n, j, flag=0;
 clrscr();
 printf("\n Enter the size of the array:");
 scanf("%d",&n);

 printf("\n Enter elements in array:");
 for(i=0; i<n; ++i)
 {
   scanf("%d", &array[i]);
 }
 for(i=0; i<n; ++i)
 {
    for(j=i+1; j<n; ++j)
    {
        if(array[i]==array[j])
        {
            printf("\n Duplicate elements is/are:%d", array[i]);
            flag = flag + 1;
        }
        
    }
 }
 printf("\n Total number of duplicate elements are:%d", flag);
 return 0;
}