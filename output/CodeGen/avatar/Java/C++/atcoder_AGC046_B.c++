#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <sstream>
#include <iomanip>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdint>
#include <ctype.h>
using namespace std;

typedef long long int64;

const int MAXN = 3001;
const int MAXM = 3001;

int A, B, C, D;
int dp[MAXN][MAXM];

void solve(int A, int B, int C, int D) {
    memset(dp, 0, sizeof(dp));
    dp[A][B] = 1;
    for (int c = A; c <= C; c++) {
        for (int d = B; d <= D; d++) {
            if (c == A && d == B) {
                continue;
            }
            int ans = 0;
            if (c > A) {
                int part = dp[c - 1][d];
                ans = (part * d);
            }
            if (d > B) {
                int part = dp[c][d - 1];
                ans = (ans + (part * c));
            }
            if (c > A && d > B) {
                ans = (ans - (dp[c - 1][d - 1] * (c - 1) * (d - 1)));
            }
            dp[c][d] = (ans % 998244353);
        }
    }
    cout << dp[C][D] << endl;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d%d%d", &A, &B, &C, &D);
        solve(A, B, C, D);
    }
    return 0;
}