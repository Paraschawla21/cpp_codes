#include<stdio.h>
int main()
{
    int n, n2;
    printf("Enter n\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter n2\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter 1st array\n");
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter 2nd array\n");
    for (int i = 0 ; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Before swapping:\n");
    printf("Array 1:\n");
    for (int i = 0 ; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nArray 2:\n");
    for (int i = 0 ; i < n2; i++)
    {
        printf("%d  ", arr2[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        arr[i] = arr[i] + arr2[i];
        arr2[i] = arr[i] - arr2[i];
        arr[i] = arr[i] - arr2[i];
    }
    printf("\nAfter swapping:\n");
    printf("Array 1:\n");
    for (int i = 0 ; i < n2; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nArray 2:\n");
    for (int i = 0 ; i < n; i++)
    {
        printf("%d  ", arr2[i]);
    }
}