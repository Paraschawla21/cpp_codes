#include <bits/stdc++.h>
using namespace std;

// int bin_to_dec(int n)
// {
//     int ans = 0, i = 1;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         ans += i * rem;
//         i *= 2;
//         n /= 10;
//     }

//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << bin_to_dec(n) << endl;

//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }
    cout << ans << endl;
}