#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(-1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // another way for iterating

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // another way for iterating and much shorter way

    for (auto ele : v)
    {
        cout << ele << " ";
    }

    cout << endl;

    v.pop_back();
    // 1 2

    // one more vector

    vector<int> v2(3, 50); // 3 is the size and 50 are the 3 elements of the vector
    // 50 50 50

    // one function swap

    swap(v, v2);

    for (auto ele : v)
    {
        cout << ele << " ";
    }

    cout << endl;

    for (auto ele : v2)
    {
        cout << ele << " ";
    }
    
    cout << endl;

    // function for sorting the vector

    sort(v2.begin(), v2.end());

    for (auto ele : v2)
    {
        cout << ele << " ";
    }

    return 0;
}