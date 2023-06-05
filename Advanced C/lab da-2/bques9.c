#include <stdio.h>
int main()
{
    int a = 48;
    int b = 20;
    int sum;
    int *p1;
    int *p2;
    int *p3;
    p1 = &a;
    p2 = &b;
    p3 = &sum;
    *p3 = *p1 + *p2;
    printf("The sum of %d and %d is %d", *p1, *p2, *p3);
}