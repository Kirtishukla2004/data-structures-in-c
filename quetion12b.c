#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
} * head, *temp;
void display()
{
    int i;
    struct node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("printing stack elements\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->val);
            temp = temp->next;
        }
    }
}
void push()
{
    int val;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("unable to push the elements");
    }
    else
    {
        printf("enter the value:-");
        scanf("%d", &val);
        if (head == NULL)
        {
            temp->val = val;
            temp->next = NULL;
            head = temp;
        }
        else
        {
            temp->val = val;
            temp->next = head;
            head = temp;
        }
    }
    display();
}
void pop()
{
    int item;
    temp = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("stack underflow");
    }
    else
    {
        item = head->val;
        temp = head;
        head = head->next;
        free(temp);
    }
    display();
}
int main()
{
    int m;
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
