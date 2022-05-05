//Array (Example 1: Average using arrays and functions)
#include<stdio.h>
#include<conio.h>
#define MAX 5
float print_avg(int *p);
int main()
{
 int arr [MAX], i;// arr[0], arr[1], arr[2]....arr[4]
 clrscr();
 
 printf("\n Enter 5 data items:");
 for(i=0; i<MAX; ++i)
 {
    scanf("%d", &arr[i]);
 }
 for(i=0; i<MAX; ++i)
 {
 printf("\n %d %u", arr[i], &arr[i]);
 }
 print_avg(arr);
 return 0;
 }
float print_avg(int *p)
{
  int sum=0, i;
  float avg=0.0;
  for(i=0; i<*p; ++i)
    {
    sum = sum + p[i];
    }
  avg = (float)sum / MAX;
  printf("\n Average = %f", avg);
  return avg;
}