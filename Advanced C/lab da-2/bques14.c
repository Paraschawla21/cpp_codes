#include <stdio.h>

int max(int a, int b)
{
    int m = a > b ? a : b;
    return m;
}

int main()
{
    // Swap two arrays using pointers
    int n1, n2;
    printf("Enter the number of elements in the 1st array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the 2nd array: ");
    scanf("%d", &n2);
    int n = max(n1, n2);
    int arr1[n];
    int arr2[n];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    // Initializing
    for (int i = 0; i < n; i++)
    {
        *(ptr1 + i) = 0;
        *(ptr2 + i) = 0;
    }

    printf("Enter the elements of the first array\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", ptr1 + i);
    }

    printf("Enter the elements of the second array\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", ptr2 + i);
    }

    printf("The arrays before swapping are: \n");
    printf("Array 1: ");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", *(ptr1 + i));
    }
    printf("Array 2: ");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", *(ptr2 + i));
    }

    for (int i = 0; i < n; i++)
    {
        int temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }

    printf("\n\nAfter swapping: \n");
    printf("Array 1: ");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", *(ptr1 + i));
    }
    printf("Array 2: ");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", *(ptr2 + i));
    }
}
