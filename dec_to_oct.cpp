#include <bits/stdc++.h>
using namespace std;

int dec_to_oct(int n)
{
    int ans = 0, i = 1;
    while (i <= n)
    {
        i *= 8;
    }

    i /= 8;

    while (i > 0)
    {
        int lastdigit = n / i;
        n -= lastdigit * i;
        i /= 8;
        ans = ans * 10 + lastdigit;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << dec_to_oct(n) << endl;

    return 0;
}