#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    char cs[100005];
    cin >> cs;

    int n = strlen(cs);
    vector<vector<long long>> dp(n, vector<long long>(13));

    int base = 1;
    for (int i = 0; i < n; i++) {
        if (cs[n - 1 - i] == '?') {
            for (int pre = 0; pre < 13; pre++) {
                for (int next = 0; next < 10; next++) {
                    dp[i][(base * next + pre) % 13] += (i > 0 ? dp[i - 1][pre] : (pre == 0 ? 1 : 0));
                    dp[i][(base * next + pre) % 13] %= MOD;
                }
            }
        } else {
            int next = cs[n - 1 - i] - '0';
            for (int pre = 0; pre < 13; pre++) {
                dp[i][(base * next + pre) % 13] += (i > 0 ? dp[i - 1][pre] : (pre == 0 ? 1 : 0));
                dp[i][(base * next + pre) % 13] %= MOD;
            }
        }
        base = base * 10 % 13;
    }

    cout << dp[n - 1][5] << endl;

    return 0;
}