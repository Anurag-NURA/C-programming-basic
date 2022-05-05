// write a c program to find max and min element in the  array using function
# include<stdio.h>
# include<conio.h>
int main()
{
 int array[100], i, n, min, max;
 clrscr();

 printf("\n Enter the size of the array:");
 scanf("%d",&n);

 printf("\n Enter elements in array:");

 for (i=0; i<n; i++)
 {
    scanf("%d", &array[i]);
 }
 max=min=array[0];//for initially
 
 for(i=0; i<n; ++i)
 {
    if(array[i]>max)
    {
       max=array[i];
    }
    if(array[i]<min)
    {
        min=array[i];
    }
 }
  printf("\n Maximum value is %d", max);
  printf("\n Minimum value is %d", min);
  return 0;   
}