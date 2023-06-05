#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);
    struct node *ptr, *temp, *head = NULL;
    head = (struct node *)malloc(sizeof(struct node *));
    head->data = NULL;
    temp = (struct node *)malloc(sizeof(struct node *));
    int first = 0;
    for (int i; i < n; i++)
    {

        if (first == 0)
        {
            printf("Enter the first element: ");
            scanf("%d", &head->data);
            temp = head;
            temp->next = NULL;
            first = 1;
        }
        else
        {
            ptr = (struct node *)malloc(sizeof(struct node *));
            printf("Enter the next element: ");
            scanf("%d", &ptr->data);
            temp->next = ptr;
            temp = ptr;
            ptr->next = NULL;
        }
    }
    struct node *t = (struct node *)malloc(sizeof(struct node *));
    t = head;
    printf("Linked list before modification: ");
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    int z, count = 0;
    printf("Enter an element from the list: ");
    scanf("%d", &z);
    t = head;
    while (t != NULL)
    {
        if (t->data == z)
        {
            count++;
        }
        t = t->next;
    }
    printf("\n%d occurs %d times", z, count);
}