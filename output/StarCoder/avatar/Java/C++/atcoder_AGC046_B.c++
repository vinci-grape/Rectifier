#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    long long dp[3001][3001];
    for (int i = 0; i <= 3000; i++) {
        for (int j = 0; j <= 3000; j++) {
            dp[i][j] = 0;
        }
    }

    dp[A][B] = 1;
    for (int c = A; c <= C; c++) {
        for (int d = B; d <= D; d++) {
            if (c == A && d == B) {
                continue;
            }
            long long ans = 0;
            if (c > A) {
                long long part = dp[c - 1][d];
                ans = (part * d);
            }
            if (d > B) {
                long long part = dp[c][d - 1];
                ans = (ans + (part * c));
            }
            if (c > A && d > B) {
                ans = (ans - (dp[c - 1][d - 1] * (c - 1) * (d - 1)));
            }
            dp[c][d] = ((ans % MOD) + MOD) % MOD;
        }
    }

    cout << dp[C][D] << "\n";

    return 0;
}