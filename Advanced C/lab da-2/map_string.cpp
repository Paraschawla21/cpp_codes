#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "good very good";
    string temp = "";
    unordered_map<string, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            mp[temp]++;
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }
    mp[temp]++;

    for (auto &i : mp)
    {
        cout << i.first << " = " << i.second << endl;
    }
}