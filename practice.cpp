// sum of n natural numbers

#include <bits/stdc++.h>
using namespace std;

// int sum(int n)
// {
//     int ans = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         ans += i;
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << sum(n) << endl;

//     return 0;

// }

// pythagoras triplet or not

// bool check(int x, int y, int z)
// {
//     int a = max(x, max(y, z));
//     int b, c;
//     if (a == x)
//     {
//         b = y;
//         c = z;
//     }
//     else if (a == y)
//     {
//         b = x;
//         c = z;
//     }
//     else
//     {
//         b = x;
//         c = y;
//     }

//     if ( a * a == b * b + c * c)
//     return true;
//     else
//     return false;

// }

// int main()
// {
//     int x, y, z;
//     cin >> x >> y >> z;

//     if (check(x, y, z))
//     {
//         cout << "Pythagoras Triplet..." << endl;
//     }
//     else
//     cout << "not a pythagoras triplet" << endl;

//     return 0;
// }

// palindrome check

// int main()
// {
//     int x;
//     cin >> x;
//     int temp = x;
//     int sum = 0;
//     while (x > 0)
//     {
//         int rem = x % 10;
//         sum = sum * 10 + rem;
//         x /= 10;
//     }
//     if (sum == temp)
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }

// string palindrome

// bool isPalindrome(string s)
// {
//     string p = s;
//     reverse(p.begin(), p.end());

//     if (p == s)
//     return true;
//     else
//     return false;
// }

// int main()
// {
//     string s;
//     cin >> s;
//     cout << isPalindrome(s);
// }

// bool checkPalindrome(string s)
// {
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     string p = s;
//     reverse(p.begin(), p.end());
//     if (p == s)
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     string s;
//     cin >> s;
//     cout << checkPalindrome(s);
// }