#include <stdio.h>

int main()
{
    int rows, columns;
    printf("\nEnter the no of rows:\n");
    scanf("%d", &rows);
    printf("\nEnter the no of columns:\n");
    scanf("%d", &columns);
    int array2d[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\nEnter the [%d] X [%d] Element:\n", i + 1, j + 1);
            scanf("%d", &array2d[i][j]);
        }
    }
    printf("\nThe elements in the matrix are:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", array2d[i][j]);
        }
        printf("\n");
    }
    int max = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (array2d[i][j] > max)
            {
                max = array2d[i][j];
            }
        }
    }
    printf("Maximum Element in the array is = %d", max);

    return 0;
}