#include<stdio.h>
int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int i, sum = 0, *b = a + 4;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + (*b-i) - *(b-i);
        printf("%d\n", sum);
    }
        return 0;
}