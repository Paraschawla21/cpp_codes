#include <bits/stdc++.h>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> mp;

    int maxFreq = 0;
    int maxAns = 0;
    int anything;
    for (int i = 0; i < n; i++)
    {
        anything = mp[arr[i]]++;
        // cout << anything << endl;
        maxFreq = max(maxFreq, mp[arr[i]]);
        // cout << maxFreq << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (maxFreq == mp[arr[i]])
        {
            maxAns = arr[i];
            break;
        }
    }
    cout << maxAns << endl;
    cout << mp[maxAns];
}

int main()
{
    vector<int> arrr{2, 12, 2, 11, -12, 2, -1, 2, 2, 11, 12, 2, -6};

    maximumFrequency(arrr, 13);
}