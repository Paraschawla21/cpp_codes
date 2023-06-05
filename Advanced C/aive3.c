#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x, sum = 0;
    for (i = 1; i <= n - 2; i++)
    {
        int sum1 = 0;
        sum += a[i - 1];
        for (j = i + 1; j <= n - 1; j++)
        {
            sum1 += a[j];
        }
        if (sum == sum1)
        {
            printf("Adv index is %d", i);
            break;
        }
    }

    return 0;
}