#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element of the array: ", i + 1);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The %dth element of the array is : %d\n", i + 1, *(ptr + i));
    }
}