#include<stdio.h>
int main()
{
    int n, n2;
    printf("Enter n\n");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter n2\n");
    scanf("%d", &n2);
    int arr2[n2];
    int *ptr2 = arr2;
    printf("Enter 1st array\n");
    for (int i = 0 ; i < n; i++)
    {
        scanf("%d", ptr+i);
    }
    printf("Enter 2nd array\n");
    for (int i = 0 ; i < n2; i++)
    {
        scanf("%d", ptr2+i);
    }
    printf("Before swapping:\n");
    printf("Array 1:\n");
    for (int i = 0 ; i < n; i++)
    {
        printf("%d  ", *(ptr+i));
    }
    printf("\nArray 2:\n");
    for (int i = 0 ; i < n2; i++)
    {
        printf("%d  ", *(ptr2+i));
    }
    for (int i = 0; i < n; i++)
    {
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr2+i);
        *(ptr2+i) = temp;
    }
    printf("\nAfter swapping:\n");
    printf("Array 1:\n");
    for (int i = 0 ; i < n2; i++)
    {
        printf("%d  ", *(ptr+i));
    }
    printf("\nArray 2:\n");
    for (int i = 0 ; i < n; i++)
    {
        printf("%d  ", *(ptr2+i));
    }
}