#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr[], int x)
{
    cout << "after merging" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "after deleting duplicate elements" << endl;
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = i + 1; j < x; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             for (int k = j; k < x - 1; k++)
    //             {
    //                 arr[k] = arr[k + 1];
    //             }
    //             x--;
    //             j--;
    //         }
    //     }
    // }
    // for (int i = 0; i < x; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    set<int> s;
    for (int i = 0; i < x; i++)
    {
        s.insert(arr[i]);
    }
    for (int i : s)
    {
        cout << i << " ";
    }
}

int main()
{
    int arr1[5] = {1, 2, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr[8];
    merge(arr1, 5, arr2, 3, arr);
    print(arr, 8);

    return 0;
}