#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = -199999;
    for (int i = 0; i < n; i++)
    {
        int x = max(mx, arr[i]);
        cout << mx << " ";
    }
}