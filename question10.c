#include <stdio.h>
#include <stdlib.h>
struct node
{
    char name[10];
    int rollno;
    int marks;
    int avg;
    char *result;
    struct node *next;
} * head, *q, *temp;

void display(struct node *head)
{
    q = head;
    while (q != NULL)
    {
        printf("name=%s\n roll no.=%d \n average=%d \n result=%s \n ", q->name, q->rollno, q->avg, q->result);
        q = q->next;
    }
}
int main()
{
    int i, m, marks, avg, j;
    char pass[] = "PASS";
    char fail[] = "FAIL";
    printf("enter the no. of students :-");
    scanf("%d", &m);
    printf("enter the values\n");
    for (i = 0; i < m; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("enter name:-");
        scanf("%s", &temp->name);
        printf("enter roll no:-");
        scanf("%d", &temp->rollno);
        printf("enter marks of 3 subjects:-");
        avg = 0;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &marks);
            avg += marks;
        }
        avg /= 3;
        if (avg < 50)
        {
            temp->result = fail;
        }
        else
        {
            temp->result = pass;
        }

        temp->avg = avg;
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

    display(head);
    return 0;
}
