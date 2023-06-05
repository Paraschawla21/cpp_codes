#include <bits/stdc++.h>
using namespace std;

void findLargestSquare(long long int points[][2], int n)
{
    map<pair<long long int, long long int>, int> m;
    for (int i = 0; i < n; i++)
    {
        m[make_pair(points[i][0], points[i][1])]++;
    }
    long long int side = -1, x = -1, y = -1;

    for (int i = 0; i < n; i++)
    {
        m[make_pair(points[i][0], points[i][1])]--;
        for (int j = 0; j < n; j++)
        {
            m[make_pair(points[j][0], points[j][1])]--;
            if (i != j && (points[i][0] - points[j][0]) == (points[i][1] - points[j][1]))
            {
                if (m[make_pair(points[i][0], points[j][1])] > 0 && m[make_pair(points[j][0], points[i][1])] > 0)
                {
                    // Verify if the square is largest then store it
                    if (side < abs(points[i][0] - points[j][0]) || (side == abs(points[i][0] - points[j][0]) && ((points[i][0] * points[i][0] + points[i][1] * points[i][1]) < (x * x + y * y))))
                    {
                        x = points[i][0];
                        y = points[i][1];
                        side = abs(points[i][0] - points[j][0]);
                    }
                }
            }
            m[make_pair(points[j][0], points[j][1])]++;
        }
        m[make_pair(points[i][0], points[i][1])]++;
    }
    if (side != -1)
        cout << "Side of the square is : " << side
             << ", \npoints of the square are " << x << ", " << y
             << " "
             << (x + side) << ", " << y
             << " "
             << (x) << ", " << (y + side)
             << " "
             << (x + side) << ", " << (y + side) << endl;
    else
        cout << "No such square" << endl;
}
int main()
{
    int n = 6;
    long long int points[n][2] = {{1, 1}, {4, 4}, {3, 4}, {4, 3}, {1, 4}, {4, 1}};
    findLargestSquare(points, n);
    return 0;
}