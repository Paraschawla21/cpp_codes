#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="PaRas";

    // to upper case

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), :: toupper);

    cout << str << endl;
    

    // to lower case

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), :: tolower);

    cout << str << endl;
}