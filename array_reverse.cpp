#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int st = 0;
    int en = n-1;

    while(st <= en)
    {
        swap(arr[st], arr[en]);
        st++;
        en--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Normal Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Reverse Array Method 1:" << endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Reverse Array Method 2:" << endl;
    
    reverse(arr, n);
}