#include <stdio.h>
int main()
{
    int s, series, n, sign;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    series = 1;
    s = -1;
    sign = 1;
    for (int i = 1; i < n; i++)
    {
        series = (series * 4) - 1;
        s += (series * sign);
        sign *= -1;
    }
    printf("\nResult: %d\n", s);

    return 0;
}