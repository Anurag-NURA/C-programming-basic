//Insertion of element at a particular place in an array
#include <stdio.h>
#include <stdlib.h>

int main()
{

  int arr[50], i,position, n, size;
  printf("\n Enter size of an array:");
  scanf("%d", &size);
  printf("\n Enter elements of arrays:");
  for(i=0; i<size; ++i)
    {
      scanf("%d", &arr[i]);
    }
  printf("New Value:");
  scanf("%d",&n);
  printf("Position: ");
  scanf("%d",&position);
  
  position=position-1;
  
  if(position>size)
    {
      printf("\n Going out of array");
    }
  else
  {
    for(i=size;i>=position;--i)
    {
      arr[i+1]=arr[i];
    }
    arr[position]=n;
    for(i=0;i<size+1;++i)
    {
     printf("%d\n",arr[i]);
    } 
  }
 return 0;

}
