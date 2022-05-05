//xstrcpy function use
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
  char Source[15]= "C_programming";
  char Target[15] = "";
  clrscr();
  
  printf("\n Before copying");
  printf("\n Source string: %s", Source);
  printf("\n Destination string: %s", Target);
  
  strcpy(Target, Source);   // calling strcpy function
  printf("\n After copying");
  printf("\n Source string: %s", Source);
  printf("\n Destination string: %s", Target);

  return 0;
}

//copying string without strcpy() 
#include<stdio.h>
void copy_str(char[] ,char[]);
int main()
{
 char str1[100], str2[100];
 printf("\n Enter a string:");
 gets(str1);
 copy_str(str2, str1); 
 printf("\n copied string is:%s", str2);
 return 0;
}
void copy_str(char str2[], char str1[])
{
  int i;
  for(i=0; str1[i]!='\0'; ++i)
  {
    str2[i]=str1[i];
  }
}