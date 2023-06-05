#include <stdio.h>

int main()
{
    // Reverse an array using pointers
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n];
    int *ptr = arr1;

    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("The array before reversal is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    for (int i = 0; i < n / 2; i++)
    {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + n - i - 1);
        *(ptr + n - i - 1) = temp;
    }

    printf("\n\nArray after reversal: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}
