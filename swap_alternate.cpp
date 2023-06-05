#include <bits/stdc++.h>
using namespace std;

int main()
{
    int even[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int odd[7] = {0, 1, 2, 3, 4, 5, 6};

    for (int i = 0; i < sizeof(odd) / sizeof(int); i += 2)
    {
        if (i + 1 < sizeof(odd) / sizeof(int))
        {
            int temp = odd[i];
            odd[i] = odd[i + 1];
            odd[i + 1] = temp;
        }
    }

    for (int i = 0; i < sizeof(odd) / sizeof(int); i++)
    {
        cout << odd[i] << " ";
    }
}