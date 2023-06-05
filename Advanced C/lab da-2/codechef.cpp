#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string str;
        cin >> str;
        long long int num = stoi(str, 0, 2);
        // cout << "num" << num << endl;

        long long int maxx = -1;
        int ans = 0;
        long long k = 2;
        for (int i = 1; i <= x; i++)
        {
            long long int temp = num / k;
            temp = num ^ temp;
            if (temp > maxx)
            {
                maxx = temp;
                ans = i;
            }
            k *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
