#include <stdio.h>

int main()
{
    // access two dimensional array using pointers.
    int n1, n2;
    printf("Enter the dimensions of the array: ");
    scanf("%d %d", &n1, &n2);

    int arr[n1][n2];
    int(*ptr)[n2] = arr;

    printf("Enter the elements of the array\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", *(ptr + i) + j);
        }
    }

    printf("Your entered array is : \n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
}
