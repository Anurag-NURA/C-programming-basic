// C program to count the number of occurrences of a substring in a string
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX_STRING_SIZE 1024

int substring_count(char* string, char* substring) 
{
  int i, j, l1, l2;
  int count = 0;
  int found = 0;
  
  l1 = strlen(string);
  l2 = strlen(substring);

  for(i = 0; i < l1 - l2; i++) 
    {
     found = 1;
     for(j = 0; j < l2; j++)
        {
         if(string[i+j] != substring[j]) 
            {
             found = 0;
             break;
            }
        }

     if(found) 
        {
         count++;
         i = i + l2 -1;
        }
    }

  return count;
}

int main()
{
  char string[MAX_STRING_SIZE];
  char substring[MAX_STRING_SIZE];
  int count = 0;
  clrscr();
  
  printf("Enter a string: ");
  gets(string);

  printf("Enter a substring: ");
  gets(substring);

  count = substring_count(string, substring);

  printf("Substring occurrence count is: %d.\n", count);

  return 0;
}
