//pop
#include<stdio.h>
#include<conio.h>
void pop(int item)
{
 if (top==-1)
 {
    printf("\n Stack is empty");
 }
 else
 {
    return stack[top--]; //{ or item=stack[top];
 }                       //top = top-1;  
}                        //return item}  
int main()
{
 int MAX=5;
 int pop();
 return 0;
}