#include<stdio.h>
int main()
{   
    int r, c;
    printf("Enter rows and columns for 1st matrix: ");
    scanf("%d%d", &r, &c);
    int r2, c2;
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    int mat1[r][c], mat2[r2][c2], prod[r][c2];
    if (c == r2)
    {
        printf("Enter matrix 1:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", *(mat1 + i) + j);
            }
        }
        printf("Enter matrix 2:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", *(mat2 + i) + j);
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                *(*(prod + i) + j) = 0;
                for (int k = 0; k < c2; k++)
                {
                    *(*(prod + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
                }
            }
        }
    }

    printf("After multiplication:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d  ", *(*(prod + i) + j));
        }
        printf("\n");
    }
}