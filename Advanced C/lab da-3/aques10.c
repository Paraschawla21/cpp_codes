
#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    {
        int c1, c2;
        printf("Enter the cost of green ballons: ");
        scanf("%d", &c1);
        printf("Enter the cost of purple ballons: ");
        scanf("%d", &c2);

        int n;
        printf("Enter the no of participants: ");
        scanf("%d", &n);

        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            printf("Enter: ");
            scanf("%d", &arr[i][0]);
            printf("Enter: ");
            scanf("%d", &arr[i][1]);
        }

        int s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s1 += arr[i][0];
            s2 += arr[i][1];
        }
        int price;
        if (s1 > s2)
        {
            price = s1 * min(c1, c2) + s2 * max(c1, c2);
        }
        else
        {
            price = s2 * min(c1, c2) + s1 * max(c1, c2);
        }
        printf("Minimum price: %d\n", price);
        T--;
    }
}