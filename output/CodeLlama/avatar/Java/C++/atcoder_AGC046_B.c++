#include <bits/stdc++.h>
using namespace std;
const long MOD = 998244353L;
long dp[3001][3001];
void solve(istream &is, ostream &os) {
    int A, B, C, D;
    is >> A >> B >> C >> D;
    dp[A][B] = 1;
    for (int c = A; c <= C; c++) {
        for (int d = B; d <= D; d++) {
            if (c == A && d == B) {
                continue;
            }
            long ans = 0;
            if (c > A) {
                long part = dp[c - 1][d];
                ans = (part * d) % MOD;
            }
            if (d > B) {
                long part = dp[c][d - 1];
                ans = (ans + (part * c) % MOD) % MOD;
            }
            if (c > A && d > B) {
                ans = (ans - (dp[c - 1][d - 1] * (c - 1) * (d - 1) % MOD)) % MOD;
            }
            dp[c][d] = (ans + MOD) % MOD;
        }
    }
    os << dp[C][D] << endl;
}
int main() {
    solve(cin, cout);
}