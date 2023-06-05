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

    // Deleting the first element
    int x = head->data;
    head = head->next;
    t = head;

    // Adding to the end

    while (t != NULL)
    {
        if (t->next != NULL)
            t = t->next;
        else
            break;
    }
    struct node *y = (struct node *)malloc(sizeof(struct node *));
    y->data = x;
    t->next = y;
    y->next = NULL;

    // Printing the final list
    t = head;
    printf("\nLinked list after modification: ");
    while (t != NULL)
    {
        printf("%d ", t->data);
        if (t->next != NULL)
        {
            t = t->next;
        }
        else
        {
            break;
        }
    }
}