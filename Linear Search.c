// To Search an element using linear search.
#include<stdio.h>
#include<conio.h>
int main()
{
  int array[100], search, c, n;
  clrscr();

  printf("\n Enter number of elements in array: ");
  scanf("%d", &n);
  printf("\n Enter %d integer(s): ", n);

  for (c = 0; c < n; c++)
    {
     scanf("%d", &array[c]);
    }
 
  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
    { 
     if (array[c] == search)    /* If required element is found */
        {
         printf("%d is present at location %d.\n", search, c+1);
         break;
        }
    }
  if (c == n)
    {
     printf("%d isn't present in the array.\n", search);
    }
  return 0;
}