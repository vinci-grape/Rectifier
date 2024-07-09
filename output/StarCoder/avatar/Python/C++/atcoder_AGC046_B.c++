#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int m = 998244353;
    int d[C + 1][D + 1];
    for (int i = 0; i <= C; i++)
    {
        for (int j = 0; j <= D; j++)
        {
            if (i == 0 || j == 0)
                d[i][j] = 1;
            else
                d[i][j] = (d[i][j - 1] * i + d[i - 1][j] * j - d[i - 1][j - 1] * (i - 1) * (j - 1)) % m;
        }
    }
    cout << d[C][D];
    return 0;
}