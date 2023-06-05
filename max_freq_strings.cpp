#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abcacbade";

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    char ans;
    int max_freq = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > max_freq)
        {
            max_freq = freq[i];
            ans = i + 'a';
        }
    }

    cout << max_freq << " times, '" << ans << "' occuring" << endl;
}