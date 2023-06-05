#include <stdio.h>

int main()
{
    int size, pos;
    printf("\nEnter the size of array:\n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nArray Elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n\nEnter the element position to delete: ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("\nArray afer deleting %d Element is: ", pos);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}