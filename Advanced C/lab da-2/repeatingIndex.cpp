#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[11] = {1, 5, 3, 4, 3, 5, 6, 6, 6, 5, 3};
    map<int, int> mp;
    for (int i = 0; i < 11; i++)
    {
        mp[arr[i]]++;
    }
    for (auto &i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}
