#include<stdio.h>
#include<conio.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push(int item)
{
    if(top==MAX-1)
    {
        printf("\n Stack is full");
    }
    else
    {
     stack[++top]=item;
     printf("\n Item inserted");
    }
}
int pop()
{
    if(top==-1)
    {
        printf("\n Stack is empty");
        return(-1);
    }
    else
    {
        return stack[top--];
    }
}
void traverse()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("%d", stack[i]);
    }
}
int main()
{
 int item, ch;
 printf("\n 1. for Push");
 printf("\n 2. for pop");
 printf("\n 3. for Display");
 printf("\n 4. for exit");
 while(1)
 {
    printf("\n Enter your choice:");
    scanf("%d", ch);
    switch(ch)
    {
        case 1: printf("\n Enter Number:");
                scanf("%d", item);
                push(item);
                break;
        case 2: item=pop;
                
        printf("\n Item deleted: %d", pop());
                break;
        case 3: traverse();
                break;
        case 4: exit(1);
        default:printf("\n Invalid choice");
    }
 }
}