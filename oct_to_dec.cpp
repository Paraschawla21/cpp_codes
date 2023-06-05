#include <iostream>
using namespace std;

int oct_to_dec(int n)
{
    int ans = 0, i = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans += i * rem;
        i *= 8;
        n /= 10;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << oct_to_dec(n) << endl;

    return 0;
}