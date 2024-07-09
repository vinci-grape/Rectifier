#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int n;
int memo[100005][4];
bool ok(string last4) {
    for (int i = 0; i < 4; i++) {
        string t = last4;
        if (i >= 1) {
            t[i] = t[i - 1];
            t[i - 1] = last4[i];
        }
        if (t.find("AGC") != string::npos) {
            return false;
        }
    }
    return true;
}
int dfs(int cur, string last3) {
    if (memo[cur][last3[0] - 'A'] != -1) {
        return memo[cur][last3[0] - 'A'];
    }
    if (cur == n) {
        return 1;
    }
    int ret = 0;
    for (int i = 0; i < 4; i++) {
        if (ok(last3 + "ACGT"[i])) {
            ret = (ret + dfs(cur + 1, last3.substr(1) + "ACGT"[i])) % mod;
        }
    }
    memo[cur][last3[0] - 'A'] = ret;
    return ret;
}
int main() {
    cin >> n;
    memset(memo, -1, sizeof(memo));
    cout << dfs(0, "TTT") << endl;
    return 0;
}