#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        int k;
        cin >> k;
        vector<int> arr2(k);
        for (int i = 0; i < k; i++)
        {
            cin >> arr2[i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (arr1[i] != arr2[j])
                {
                    ans.push_back(arr1[i]);
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
