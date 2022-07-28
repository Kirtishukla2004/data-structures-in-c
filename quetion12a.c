#include <stdio.h>
#include <stdlib.h>
int i, n, m, top = -1, stack[100];
void display()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    if (top == -1)
    {
        printf("list is empty\n");
    }
}
void push()
{
    if (top == n)
    {
        printf("stack overflow");
    }
    else
    {
        int val;
        printf("enter the value:-");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
    printf("stack is\n");
    display();
}
void pop()
{
    if (top == -1)
    {
        printf("stack underflow");
    }
    else
    {
        top--;
    }
    printf("stack is\n");
    display();
}
int main()
{
    printf("enter the no. of elements in a stack:-");
    scanf("%d", &n);
    while (1)
    {
        printf("choose one operation\n");
        printf("1. push\n");
        printf("2. pop\n");
        scanf("%d", &m);
        switch (m)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        default:
            printf("enter a valid choice");
            break;
        }
    }
    return 0;
}
