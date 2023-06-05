#include <stdio.h>

int max(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
        return a;
    if (b > a && b > c && b > d)
        return b;
    if (c > a && c > b && c > d)
        return c;
    if (d > a && d > b && d > c)
        return d;
}

int main()
{
    int a, b, c, d;
    printf("\nEnter four integers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int maximum = max(a, b, c, d);
    printf("The maximum among %d, %d, %d, %d is %d", a, b, c, d, maximum);

    return 0;
}
