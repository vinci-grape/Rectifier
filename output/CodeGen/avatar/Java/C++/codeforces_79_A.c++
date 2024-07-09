#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cstdint>
#include <cctype>
#include <cassert>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug

typedef long long int64;

#define MAXN 100000
#define MAXM 100000

int n, m;
int x[MAXN], y[MAXM];

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; ++i)
            scanf("%d", x + i);
        for (int i = 0; i < m; ++i)
            scanf("%d", y + i);
        sort(x, x + n);
        sort(y, y + m);
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int j = lower_bound(y, y + m, x[i]) - y;
            if (j < m && y[j] == x[i])
                ++ans;
        }
        printf("%d\n", ans);
    }
    return 0;
}