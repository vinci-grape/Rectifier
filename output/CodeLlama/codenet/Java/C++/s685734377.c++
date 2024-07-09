#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[100][100];
    long long P = 37, Q = 47;
    long long powP[100], powQ[100];
    powP[0] = powQ[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        powP[i] = powP[i - 1] * P;
        powQ[i] = powQ[i - 1] * Q;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    long long hashRow[100][100];
    long long hashCol[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                hashRow[i][k] += a[i][j] * powP[(j - k + n) % n];
                hashCol[j][k] += a[i][j] * powP[(i - k + n) % n];
            }
        }
    }

    int ans = 0;
    for (int A = 0; A < n; A++)
    {
        for (int B = 0; B < n; B++)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                ok &= hashRow[(i + A) % n][B] == hashCol[(i + B) % n][A];
            }
            ans += ok ? 1 : 0;
        }
    }
    cout << ans << endl;
    return 0;
}