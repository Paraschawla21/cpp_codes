#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int prod = 1;
    while (n > 0)
    {
        int rem = n % 10;
        prod *= rem;
        sum += rem;
        n /= 10;
    }
    cout << prod - sum << endl;
}