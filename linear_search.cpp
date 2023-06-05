#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
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
    int ele;
    cin >> ele;
    cout << linear_search(arr, n, ele) << endl;

    return 0;
}

// time complexity of linear serach

// O(n)