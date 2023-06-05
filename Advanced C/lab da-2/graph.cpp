#include <bits/stdc++.h>
using namespace std;

class graph
{

    unordered_map<int, list<int>> adj;

public:
    void add(int u, int v, bool directed)
    {
        adj[u].push_back(v);
        if (directed == false)
            adj[v].push_back(u);
    }
    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "enter the number of nodes:" << endl;
    cin >> n;
    int m;
    cout << "enter the number of edges:" << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.add(u, v, false);
    }

    g.print();

    return 0;
}