#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter the two numbers you want to swap:\n");
    scanf("%d%d", &a, &b);
    a += b;
    b = a - b;
    a -= b;
    printf("\nAfter Swapping:\na = %d \tb = %d", a, b);

    return 0;
}