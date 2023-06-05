#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
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

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (*(ptr + j) > *(ptr + j + 1))
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    printf("The sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}
