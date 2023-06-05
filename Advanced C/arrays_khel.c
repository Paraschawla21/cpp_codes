#include<stdio.h>
int main()
{
    int r1, c1;
    printf("Enter rows and columns for first matrix : ");
    scanf("%d%d", &r1, &c1);
    int array1[r1][c1];
    printf("Enter matrix 1:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    int r2, c2;
    printf("Enter rows and columns for second matrix : ");
    scanf("%d%d", &r2, &c2);
    int array2[r2][c2];
    printf("Enter matrix 2:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0 ; j < c2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
    int array[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            array[i][j] = 0;
            for (int k = 0; k < c2; k++)
            {
                array[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}