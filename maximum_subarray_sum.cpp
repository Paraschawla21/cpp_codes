#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSoFar = arr[0];

    int maxEndingHere = arr[0];

    for (int i = 0; i < 9; i++)
    {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    cout << maxSoFar << endl;

    return 0;
}