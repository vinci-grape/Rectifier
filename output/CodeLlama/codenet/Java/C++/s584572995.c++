#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
vector<vector<int>> to;
int dp[100005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    to.resize(N);
    for (int i = 0; i < N; i++) {
        to[i].resize(0);
    }
    int edges[N - 1][2];
    for (int i = 0; i < N - 1; i++) {
        int A, B;
        cin >> A >> B;
        to[A - 1].push_back(B - 1);
        to[B - 1].push_back(A - 1);
        edges[i][0] = B - 1;
        edges[i][1] = A - 1;
    }
    dp[0] = 1;
    for (int i = 1; i < N; i++) {
        dp[i] = 0;
        for (int next : to[i]) {
            dp[i] += dp[next];
        }
    }
    long long mulsum = 0;
    for (int e[] : edges) {
        int candidate1 = e[0];
        int candidate2 = e[1];
        int child = candidate1;
        if (dp[candidate1] > dp[candidate2])
            child = candidate2;
        long long a = dp[child];
        long long b = N - a;
        long long mul = (modpow(2, a) - 1) * (modpow(2, b) - 1) % mod;
        mulsum += mul;
        mulsum %= mod;
    }
    long long cases = modpow(2, N);
    long long PN = (mulsum + (cases - 1 + mod) % mod) % mod;
    long long BN = N * modpow(2, N - 1) % mod;
    long long WN = (PN - BN + mod) % mod;
    long long ans = WN * modpow(cases, mod - 2);
    ans %= mod;
    cout << ans << endl;
}

long long modpow(long long x, long long y) {
    if (y == 0)
        return 1;
    if (y % 2 != 0)
        return x * modpow(x, y - 1) % mod;
    long long tmp = modpow(x, y / 2);
    return tmp * tmp % mod;
}