#include <stdio.h>

int main()
{
    int a;
    int b;
    int *p1 = &a;
    int *p2 = &b;

    printf("Enter two numbers\n");
    scanf("%d\n%d", p1, p2);

    printf("The numbers before swapping are %d & %d\n", *p1, *p2);

    // Swapping:
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("The numbers after swapping are %d & %d", *p1, *p2);
}