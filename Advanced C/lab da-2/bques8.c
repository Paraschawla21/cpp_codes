#include <stdio.h>

void compare(int a, int b, int *big, int *small)
{
    if (a > b)
    {

        *big = a;
        *small = b;
    }
    else
    {
        *big = b;
        *small = a;
    }
}

int main()
{
    int big, small, x, y;

    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);

    compare(x, y, &big, &small);
    printf("\nThe greater number is %d and the smaller number is %d", big, small);
}