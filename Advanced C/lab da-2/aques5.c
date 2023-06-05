#include <stdio.h>

int main()
{
    int size1, size2;
    printf("\nEnter the size of 1st array: ");
    scanf("%d", &size1);
    printf("\nEnter the size of 2nd array: ");
    scanf("%d", &size2);
    int arr1[size1], arr2[size2];
    for (int i = 0; i < size1; i++)
    {
        printf("\nEnter the %d Element of 1st array: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        printf("\nEnter the %d Element of 2nd array: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    printf("\nArray Elements of 1st array are: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\nArray Elements of 2nd array are: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d  ", arr2[i]);
    }
    int new_arr[size1 + size2];
    int new_size = size1 + size2;
    for (int i = 0; i < size1; i++)
    {
        new_arr[i] = arr1[i];
    }
    for (int i = size1; i < new_size; i++)
    {
        new_arr[i] = arr2[i - size1];
    }
    printf("\nArray Elements after merging array1 and array2 are: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d  ", new_arr[i]);
    }
    for (int i = 0; i < new_size; i++)
    {
        for (int j = i + 1; j < new_size; j++)
        {
            if (new_arr[i] == new_arr[j])
            {
                for (int k = j; k < new_size - 1; k++)
                {
                    new_arr[k] = new_arr[k+1];
                }
                new_size--;
                j--;
            }
        }
    }
    printf("\nArray Elements after deleting duplicate elements are: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d  ", new_arr[i]);
    }

    return 0;
}