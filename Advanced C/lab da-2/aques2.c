#include <stdio.h>

int sum(int n)
{
    int rem, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("\nEnter a five digit integer:\n");
    scanf("%d", &n);
    printf("\nSum of digits of %d is %d", n, sum(n));

    return 0;
}