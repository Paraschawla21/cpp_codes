#include <stdio.h>
int r()
{
    static int num = 7;
    return num--;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 5};
    int *ip = arr+4;
    printf("\n%d", ip[1]);
    printf("\n%d", ip[-4]);

    for (r(); r(); r())
    {
        printf("\n%d", r());
    }

    return 0;
}