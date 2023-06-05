#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "12524";

    sort(str.begin(), str.end());

    cout << str << endl;

    sort(str.begin(), str.end(), greater<int>());

    cout << str << endl;

}