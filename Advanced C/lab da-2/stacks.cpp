#include <bits/stdc++.h>
using namespace std;

class stack {
     
};

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(1);

    s.pop();

    cout << "top element is " << s.top() << endl;

    s.pop();

    if (s.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;

    cout << "size is " << s.size() << endl;

    return 0;
}