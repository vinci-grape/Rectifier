#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string Si;
    cin >> Si;
    reverse(Si.begin(), Si.end());
    string S = Si;

    vector<long long> dp(13, 1);

    for (int i = 0, d = 1; i < S.length(); i++, d = d * 10 % 13) {
        vector<long long> nd(13, 0);

        char c = S[i];

        if (isdigit(c)) {
            int x = (c - '0') * d;

            for (int j = 0; j < 13; j++) {
                nd[(j + x) % 13] = dp[j];
            }
        } else {
            for (int xi = 0; xi < 10; xi++) {
                int x = xi * d;

                for (int j = 0; j < 13; j++) {
                    int ni = (j + x) % 13;
                    nd[ni] = (nd[ni] + dp[j]) % 1000000007;
                }
            }
        }

        dp = nd;
    }

    cout << dp[5] << endl;

    return 0;
}