#include <stdio.h>
#include <stdlib.h>
int rear = -1, front = -1, m, o, n;
int item[100];
void display()
{
    if (rear == -1)
    {
        printf("queue is empty!");
    }
    else
    {
        int i;
        for (i = front; i <= rear; i++)
        {
            printf("data:-%d\n", item[i]);
        }
    }
}
void enqueue()
{
    int value;
    printf("enter the value you want to store:-");
    scanf("%d", &value);
    if (rear == n - 1)
    {
        printf("queue is full!");
    }
    else
    {
        if (front = -1)
        {
            front = 0;
        }
        rear++;
        item[rear] = value;
    }
}
void dequeue()
{
    if (front == -1)
    {
        printf("queue is empty!");
    }
    else if (front > rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
int main()
{
    printf("enter the size of queue:-");
    scanf("%d", &n);
    item[n];
    while (1)
    {
        printf("choose one operation\n");
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. display\n");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("enter a valid choice");
            break;
        }
    }
    return 0;
}
