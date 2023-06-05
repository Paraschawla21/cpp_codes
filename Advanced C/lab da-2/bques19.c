#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the number of elements in the 1st array:  ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the 2nd array:  ");
    scanf("%d", &n2);
    int arr1[n1];
    int arr2[n2];
    int *p1 = arr1;
    int *p2 = arr2;

    printf("Enter the elements of the 1st array\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", p1 + i);
    }

    printf("Enter the elements of the 2nd array\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", p2 + i);
    }

    // Merging
    int n = n1 + n2;
    int merged_array[n];
    int *ptr = merged_array;
    for (int i = 0; i < n; i++)
    {
        if (i < n1)
        {
            *(ptr + i) = *(p1 + i);
        }

        else
        {
            *(ptr + i) = *(p2 + i - n1);
        }
    }

    printf("\nThe merged array is: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}
