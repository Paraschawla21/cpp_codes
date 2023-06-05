#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<string, int> mp;

    // insertion
    // 1
    pair<string, int> p = make_pair("paras", 3);
    mp.insert(p);

    // 2
    pair<string, int> p2 = make_pair("chawla", 2);
    mp.insert(p2);

    // 3
    mp["hello"] = 1;

    // searching
    cout << mp["hello"] << endl;

    cout << mp.at("paras") << endl;

    // cout << mp.at("unknown") << endl;  // will throw error

    cout << mp["unknown"] << endl; // will give 0

    cout << mp.at("unknown") << endl; // now it will give zero

    // size
    cout << mp.size() << endl;

    // to check presence
    cout << mp.count("paras") << endl;
    cout << mp.count("aman") << endl;

    // erase
    mp.erase("chawla");
    cout << mp.size() << endl;

    // mapping
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    // iterator
    unordered_map<string, int>::iterator it = mp.begin();

    while (it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // it is not printing in the same order as we have written

    // if we use map (ordered, which is based on BST) then it will give the same order as well

    return 0;
}