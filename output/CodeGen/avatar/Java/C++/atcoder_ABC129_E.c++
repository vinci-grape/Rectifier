#include <iostream>
#include <string>
#include <cstdint>
#include <cstdlib>
using namespace std;

class atcoder_ABC129_E {
public:
    static const int M = 1000000007;
    int dp[100][2];
    int n;
    char s[100];
    atcoder_ABC129_E() {
        dp[0][0] = 1;
        dp[0][1] = 0;
        n = 0;
    }
    void input() {
        cin >> s;
        n = s.length();
    }
    void solve() {
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                dp[i + 1][0] = dp[i][0];
                dp[i + 1][1] = dp[i][1];
            } else {
                dp[i + 1][1] = (dp[i][0] + dp[i][1]) % M;
                dp[i + 1][0] = (dp[i][0] * 2) % M;
                dp[i + 1][1] += (dp[i][1] * 2) % M;
                dp[i + 1][0] %= M;
                dp[i + 1][1] %= M;
            }
            if (s[i] == '0') {
                dp[i + 1][1] += (dp[i][1] * 2) % M;
                dp[i + 1][1] %= M;
            } else {
                dp[i + 1][0] += (dp[i][0] * 2) % M;
                dp[i + 1][0] %= M;
            }
        }
        cout << ((dp[n][0] + dp[n][1]) % M);
    }
};

int main() {
    atcoder_ABC129_E ac;
    ac.input();
    ac.solve();
    return 0;
}