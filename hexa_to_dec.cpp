#include <iostream>
using namespace std;

int hexa_to_dec(string str)
{
    int ans = 0, x = 1;
    int len = str.size();
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            ans += x*(str[i] - '0');
        }
        else if (str[i] >= 'A' && str[i] <= 'F')
        {
            ans += x*(str[i] - 'A' + 10);
        }
        x *= 16;
    }
    
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << hexa_to_dec(str) << endl;

    return 0;
}