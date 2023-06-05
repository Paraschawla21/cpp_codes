#include <stdio.h>

int main()
{
    int n;
    printf("Enter the dimension of the square matrix: \n");
    scanf("%d", &n);
    int m[n][n];
    int(*p1)[n] = m;

    int m_transpose[n][n];
    int(*p2)[n] = m_transpose;
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", *(p1 + i) + j);
        }
    }

    // Finding the transpose of the matrix - m

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(p2 + j) + i) = *(*(p1 + i) + j);
        }
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(*(p1 + i) + j) != *(*(p2 + i) + j))
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("\nThe matrix satisfies the mirror image property ");
    }
    else
    {
        printf("\nThe matrix doesn't satisfy the mirror image property ");
    }
}