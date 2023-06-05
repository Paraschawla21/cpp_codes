#include <bits/stdc++.h>
using namespace std;

string dec_to_hexa(int n)
{
    string ans = "";
    int i = 1;
    while (i <= n)
    {
        i *= 16;
    }

    i /= 16;

    while (i > 0)
    {
        int lastdigit = n / i;
        n -= lastdigit * i;
        i /= 16;
        if (lastdigit <= 9)
            ans = ans + to_string(lastdigit);
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << dec_to_hexa(n) << endl;

    return 0;
}