#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the two no you want to swap:\n");
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping, a = %d, b = %d", a, b);

    return 0;
}