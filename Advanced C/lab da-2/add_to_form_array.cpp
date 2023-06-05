#include <bits/stdc++.h>

using namespace std;
vector<int> addToArray(vector<int> &num, int k)
{
    vector<int> ans;
    int n = num.size();
    int sum;
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = num[i] * pow(10, n - i);
        sum += temp;
    }

    return ans;
}

int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    addToArray(arr, k);
}