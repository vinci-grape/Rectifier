#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    int black[n + 2][n + 2];
    for (int i = 0; i < n + 2; i++)
        for (int j = 0; j < n + 2; j++)
            black[i][j] = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        for (int i = x - 1; i <= x + 1; i++)
            for (int j = y - 1; j <= y + 1; j++)
                black[i][j]++;
        if (black[x][y] == 9)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
}