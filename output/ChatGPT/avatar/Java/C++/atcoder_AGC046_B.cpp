#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

void solve() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    vector<vector<long long>> dp(C + 1, vector<long long>(D + 1, 0));
    dp[A][B] = 1;

    for (int c = A; c <= C; c++) {
        for (int d = B; d <= D; d++) {
            if (c == A && d == B) {
                continue;
            }
            long long ans = 0;

            if (c > A) {
                long long part = dp[c - 1][d];
                ans = (part * d) % MOD;
            }
            if (d > B) {
                long long part = dp[c][d - 1];
                ans = (ans + (part * c) % MOD) % MOD;
            }
            if (c > A && d > B) {
                ans = (ans - (dp[c - 1][d - 1] * (c - 1) % MOD * (d - 1) % MOD) + MOD) % MOD;
            }

            dp[c][d] = ans;
        }
    }

    cout << dp[C][D] << endl;
}

int main() {
    solve();
    return 0;
}