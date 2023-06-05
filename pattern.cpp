#include <bits/stdc++.h>
using namespace std;

void removeStars(string s)
{
    stack<char> st;
    for (auto i : s)
    {
        if (i != '*')
        {
            st.push(i);
        }
        else if (i == '*')
        {
            st.pop();
        }
    }
    string ans;
    while (!st.empty())
    {
        ans += st.top();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main()
{
    string str = "leet**cod*e";
    cout << removeStars(str) << endl;
}