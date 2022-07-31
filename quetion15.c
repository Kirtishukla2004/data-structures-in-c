#include <stdio.h>
#define size 5
int deque[size];
int front = -1, rear = -1;
void enqueue_front(int x)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("Overflow");
    }
    else if ((front == -1) && (rear == -1))
    {
        front = rear = 0;
        deque[front] = x;
    }
    else if (front == 0)
    {
        front = size - 1;
        deque[front] = x;
    }
    else
    {
        front = front - 1;
        deque[front] = x;
    }
}

void enqueue_rear(int x)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("Overflow");
    }
    else if ((front == -1) && (rear == -1))
    {
        rear = 0;
        deque[rear] = x;
    }
    else if (rear == size - 1)
    {
        rear = 0;
        deque[rear] = x;
    }
    else
    {
        rear++;
        deque[rear] = x;
    }
}
void display()
{
    int i = front;
    printf("\nElements in a deque are: ");
    while (i != rear)
    {
        printf("%d ", deque[i]);
        i = (i + 1) % size;
    }
    printf("%d", deque[rear]);
}
void dequeue_front()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Deque is empty");
    }
    else if (front == rear)
    {
        printf("\nThe deleted element is %d", deque[front]);
        front = -1;
        rear = -1;
    }
    else if (front == (size - 1))
    {
        printf("\nThe deleted element is %d", deque[front]);
        front = 0;
    }
    else
    {
        printf("\nThe deleted element is %d", deque[front]);
        front = front + 1;
    }
}

void dequeue_rear()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Deque is empty");
    }
    else if (front == rear)
    {
        printf("\nThe deleted element is %d", deque[rear]);
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        printf("\nThe deleted element is %d", deque[rear]);
        rear = size - 1;
    }
    else
    {
        printf("\nThe deleted element is %d", deque[rear]);
        rear = rear - 1;
    }
}
int main()
{
    int choice1, choice2, m;
    printf("double ended queue\n");
    while (1)
    {
        printf("1.input ristricted deque\n");
        printf("2.output ristricted dequeue\n");
        printf("enter the choice:-");
        scanf("%d", &choice1);
        switch (choice1)
        {
        case 1:
            while (1)
            {
                printf("select the operation\n");
                printf("1.enqueue_front\n");
                printf("2.dequeue_front\n");
                printf("3.dequeue_rear\n");
                printf("4.display\n");
                printf("enter the choice");
                scanf("%d", &choice2);
                switch (choice2)
                {
                case 1:
                    enqueue_front(20);
                    display();
                    break;
                case 2:
                    dequeue_front();
                    display();
                    break;
                case 3:
                    dequeue_rear();
                    display();
                    break;
                default:
                    printf("wrong choice");
                    break;
                }
            }
        case 2:
            while (1)
            {
                printf("select the operation\n");
                printf("1.enqueue_front\n");
                printf("2.enqueue_rear\n");
                printf("3.dequeue_rear\n");
                printf("4.display\n");
                printf("enter the choice");
                scanf("%d", &choice2);
                switch (choice2)
                {
                case 1:
                    enqueue_front(20);
                    display();
                    break;
                case 2:
                    enqueue_rear(30);
                    display();
                    break;
                case 3:
                    dequeue_rear();
                    display();
                    break;
                default:
                    printf("envalid statement");
                    break;
                }
            }
        }
    }
    return 0;
}
