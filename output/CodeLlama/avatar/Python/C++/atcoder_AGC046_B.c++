#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int m = 998244353;
    vector<vector<int>> d(C + 1, vector<int>(D + 1, 0));
    d[A][B] = 1;
    for (int i = A; i <= C; i++)
    {
        for (int j = B; j <= D; j++)
        {
            d[i][j] = (d[i][j - 1] * i + d[i - 1][j] * j - d[i - 1][j - 1] * (i - 1) * (j - 1)) % m;
        }
    }
    cout << d[C][D];
    return 0;
}