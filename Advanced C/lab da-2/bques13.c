#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the 1st array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");

    int arr[n];
    int copied_arr[n];
    int *ptr1 = arr;
    int *ptr2 = &copied_arr[0];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr1 + i);
    }

    for (int i = 0; i < n; i++)
    {
        *(ptr2 + i) = *(ptr1 + i);
    }

    printf("The copied array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr2 + i));
    }
}
