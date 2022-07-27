#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *q, *temp, *x;

void display(struct node *head)
{
    struct node *temp;
    if (head == NULL)
    {
        printf("the list is empty");
        return;
    }
    temp = head;
    do
    {
        printf("data=%d\n", temp->data);
        temp = temp->next;
    } while (temp != head);
}
void create()
{
    int i, m, n;
    printf("enter the number of nodes you want:-");
    scanf("%d", &n);
    printf("enter the elements:-");
    for (i = 0; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &m);
        temp->data = m;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            q = head;
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = temp;
        }
    }
    temp->next = head;
}
void insert_beg(struct node *head)
{
    int m;
    printf("enter the elemenet you want to enter :- ");
    scanf("%d", &m);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = m;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
    }
    q = head;
    do
    {
        q = q->next;
    } while (q->next != head);
    q->next = temp;
    head = temp;
    display(head);
}
void insert_end(struct node *head)
{
    int m;
    printf("enter the data you want to enter :-");
    scanf("%d", &m);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = m;
    temp->next = head;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        q = head;
        do
        {
            q = q->next;
        } while (q->next != head);
        q->next = temp;
    }
    display(head);
}
void insert_pos(struct node *head)
{
    int m, n, i;
    printf("enter the element you want to enter :-");
    scanf("%d", &m);
    printf("enter the position where you want to enter:-");
    scanf("%d", &n);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = m;
    temp->next = NULL;
    for (i = 1; i <= n; i++)
    {
        q = q->next;
    }
    temp->next = q->next;
    q->next = temp;
    display(head);
}
void deletion_beg(struct node *head)
{
    q = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    head = head->next;
    q = head;
    do
    {
        q = q->next;
    } while (q->next != temp);
    q->next = head;
    free(temp);
    printf("after deletion:-");
    display(head);
}
void deletion_end(struct node *head)
{
    q = head;
    do
    {
        q = q->next;
    } while (q->next->next != head);
    // temp=(struct node *)malloc(sizeof(struct node));     temp=q->next;     q->next=head;     free(temp);
    printf("deletion at end\n");
    display(head);
}
void deletion_pos(struct node *head)
{
    int position, i;
    printf("enter the position where you want to delete:-");
    scanf("%d", &position);
    q = head;
    for (i = 1; i < position - 1; i++)
    {
        q = q->next;
    }
    temp = (struct node *)malloc(sizeof(struct node));
    temp = q->next;
    q->next = temp->next;
    free(temp);
    display(head);
}
int main()
{
    while (1)
    {
        int n;
        printf("1.create\n");
        printf("2.display\n");
        printf("3.insertion_beg\n");
        printf("4.insertion_end\n");
        printf("5.insert_at_position\n");
        printf("6.deletion_beg\n");
        printf("7.del_end\n");
        printf("8.del_pos\n");
        printf("enter thte choice:-");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            display(head);
            break;
        case 3:
            insert_beg(head);
            break;
        case 4:
            insert_end(head);
            break;
        case 5:
            insert_pos(head);
            break;
        case 6:
            deletion_beg(head);
            break;
        case 7:
            deletion_end(head);
            break;
        case 8:
            deletion_pos(head);
            break;
        }
    }
    return 0;
}
