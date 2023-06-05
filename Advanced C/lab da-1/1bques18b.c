#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int mult = 1;
    int num = 1, den = 3;
    double s = (double)num / den;
    for (int i = 1; i < n; i++)
    {
        mult *= -1;
        num *= 3;
        den *= den;
        s += mult*((double)num/den);
    }
    printf("Result of the series: %lf", s);

    return 0;
}