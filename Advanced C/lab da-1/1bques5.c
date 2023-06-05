#include <stdio.h>
#include <math.h>
int main()
{
    float p, t, r, si, ci;
    printf("Enter principal amount (p): ");
    scanf("%f", &p);
    printf("Enter time in year (t): ");
    scanf("%f", &t);
    printf("Enter rate in percent (r): ");
    scanf("%f", &r);
    si = (p * t * r) / 100.0;
    ci = p * (pow(1 + r / 100, t) - 1);
    printf("Simple Interest = %0.3f\n", si);
    float amount1 = p + si;
    printf("Amount after SI = %.3f\n", amount1);
    printf("Compound Interest = %0.3f\n", ci);
    float amount2 = p + ci;
    printf("Amount after CI = %.3f\n", amount2);

    return (0);
}