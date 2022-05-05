//push
#include<stdio.h>
#include<conio.h>
void push(int item)
{
 if(top==max-1)
 {
    printf("\n Stack full!!");
 }   
 else
 {
    stack[++top]=item
    printf("\n Inserted");
 }
}
int main()
{
int MAX=5;
int top = -1;
printf("\n Enter item:");

return 0;
}
