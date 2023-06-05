#include <stdio.h>

int main()
{
    // Searching for an element in an array using pointers
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;

    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    int element;
    printf("Enter the element you want to search for: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) == element)
        {
            printf("Element %d found at position %d", element, i + 1);
            break;
        }
    }
}
