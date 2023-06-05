#include <stdio.h>
// #include <string.h>

// int max(int x, int y)
// {
//     int ans = x > y ? x : y;
//     return ans;
// }

// int main()
// {
//     int n1, n2;
//     scanf("%d", &n1);
//     scanf("%d", &n2);
//     int n = max(n1, n2);
//     int a1[n], a2[n];
//     int *p1 = a1, *p2 = a2;
//     for (int i = 0; i < n1; i++)
//     {
//         printf("enter elements of first array : ");
//         scanf("%d", p1 + i);
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         printf("enter elements of second array : ");
//         scanf("%d", *(p2 + i));
//     }
//     printf("\nAfter swapping:\n");
//     printf("Array 1: ");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("%d ", *(p2 + i));
//     }
//     printf("\nAfter reversal of second array: ");
//     for (int i = 0; i < n2 / 2; i++)
//     {
//         int temp = *(p2 + i);
//         *(p2 + i) = *(p2 + n2 - 1 - i);
//         *(p2 + n2 - 1 - i) = temp;
//     }
//     printf("Array 2: ");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("%d ", *(p2 + i));
//     }
// }

int main()
{
    char name[50];
    char name2[50];
    printf("\nEnter your full name: ");
    // scanf("%[^\n]s", &name);
    // printf("\n%s", name);
    // printf("\nEnter again: ");
    gets(name2);
    puts(name2);
}