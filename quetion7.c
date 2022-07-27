#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *q, *temp, *x, *head2, *temp1;

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("data=%d\n", head->data);
        head = head->next;
    }
}
void create()
{
    int i, n, m;
    printf("enter the no. of nodes you want:-");
    scanf("%d", &m);
    printf("enter the element of list:-");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &n);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = n;
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
}
void insertion_beg(struct node *head)
{
    int m;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter the element:-");
    scanf("%d", &m);
    temp->data = m;
    temp->next = head;
    head = temp;
    display(head);
}
void insertion_end(struct node *head)
{
    int m;
    printf(("enter the element you want to enter int he end:-"));
    scanf("%d", &m);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = m;
    x = head;
    while (x->next != NULL)
    {
        x = x->next;
    }
    temp->next = NULL;
    x->next = temp;
    display(head);
}
void insert_at_position(struct node *head)
{
    int i, pos, m;
    printf("enter the position where you want to enter the elements:-");
    scanf("%d", &pos);
    printf("enter the element:-");
    scanf("%d", &m);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = m;
    q = head;
    for (i = 0; i < pos; i++)
    {
        q = q->next;
    }
    temp->next = q->next;
    q->next = temp;
    display(head);
}
void del_beg(struct node *head)
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    if (head == NULL)
    {
        printf("list is empty");
    }
    head = head->next;
    free(temp);
    display(head);
}
void del_end(struct node *head)
{
    q = head;
    if (head = NULL)
    {
        printf("the list is empty");
    }
    else
    {
        while (q->next->next != NULL)
        {
            q = q->next;
        }
    }
    temp = (struct node *)malloc(sizeof(struct node));
    temp = q->next;
    q->next = NULL;
    free(temp);
    display(head);
}
void del_pos(struct node *head)
{
    int m, i;
    printf("enter the position where you want to delete:-");
    scanf("%d", &m);
    q = head;
    if (head == NULL)
    {
        printf("the list is empty");
    }
    else
    {
        for (i = 1; i < m; i++)
        {
            q = q->next;
        }
    }
    temp = (struct node *)malloc(sizeof(struct node));
    temp = q->next;
    q->next = temp->next;
    free(temp);
    display(head);
}
void merge(struct node *head)
{
    int i, m, n, o;
    printf("enter the no. of nodes you want:-");
    scanf("%d", &m);
    printf("enter the elements of 2nd list:-");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &o);
        temp1 = (struct node *)malloc(sizeof(struct node));
        temp1->data = o;
        temp1->next = NULL;
        if (head2 == NULL)
        {
            head2 = temp1;
        }
        else
        {
            q = head2;
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = temp1;
        }
    }
    display(head2);
    q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = head2;
    printf("merged array is:-");
    display(head);
}
void search(struct node *head)
{
    int d, i, count, flag;
    printf("enter the element you want to search:-");
    scanf("%d", &d);
    count = 0;
    flag = 0;
    q = head;

    while (q->next != NULL)
    {
        q = q->next;
        count++;
        if (q->data == d)
        {
            printf("%d found on %d node", d, count);
            flag = 1;
            return;
        }
    }
    if (flag == 0)
    {
        printf("%d is not in the list", d);
    }
}
void sort(struct node *head)
{
    int temp;
    q = head;
    if (head == NULL)
    {
        printf("there is no list to sort");
    }
    else
    {
        while (q != NULL)
        {
            x = q->next;
            while (x != NULL)
            {
                if (q->data > x->data)
                {
                    temp = q->data;
                    q->data = x->data;
                    x->data = temp;
                }
                x = x->next;
            }
            q = q->next;
        }
    }
    printf("sorted array is:-");
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
        printf("6.del_beg\n");
        printf("7.del_end\n");
        printf("8.del_pos\n");
        printf("9.search\n");
        printf("10.sort\n");
        printf("11.merge\n");
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
            insertion_beg(head);
            break;
        case 4:
            insertion_end(head);
            break;
        case 5:
            insert_at_position(head);
            break;
        case 6:
            del_beg(head);
            break;
        case 7:
            del_end(head);
            break;
        case 8:
            del_pos(head);
            break;
        case 9:
            search(head);
            break;
        case 10:
            sort(head);
            break;
        case 11:
            merge(head);
            break;
        }
    }
    return 0;
}
