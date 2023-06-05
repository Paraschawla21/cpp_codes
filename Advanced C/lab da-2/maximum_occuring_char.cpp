#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "g";
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int index;
        if (s[i] >= 'a' && s[i] <= 'z')
            index = s[i] - 'a';
        else
            index = s[i] - 'A';

        count[index]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < count[i])
        {
            maxi = count[i];
            ans = i;
        }
    }
    char res = ans + 'a';
    cout << "Maximum occuring Character = " << res << endl;
    cout << "Frequency = " << maxi << endl;
}