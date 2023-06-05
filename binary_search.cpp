#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int ele)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s+e)/2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (arr[mid] >  ele)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    cout << binary_search(arr, n, ele) << endl;

    return 0;
}

// time complexity of binary search

// after 1st iteration = n
// after 2nd = n/2
// after 3rd = n/2^2
// after k = n/2^k
// let array length = 1
// >> n/2^k = 1
// >> n = 2^k
// >> log n = log 2^k
// >> log n = k log 2
// >> k = log n ANS

// >> O(log n)   better than linear search as O(log n) < O(n)