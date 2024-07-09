#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;
    vector<int> l(N);
    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }

    int dp[N + 1][310];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= 300; j++) {
            dp[i][j] = 1000000000;
        }
    }

    dp[0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= 300; j++) {
            if (j + l[i] <= 300) {
                dp[i + 1][j + l[i]] = min(dp[i + 1][j + l[i]], dp[i][j] + 10);
            }
            if (j - l[i] >= 0) {
                dp[i + 1][j - l[i]] = min(dp[i + 1][j - l[i]], dp[i][j] + 10);
            }
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        }
    }

    cout << dp[N][A] + dp[N][B] + dp[N][C] - 30 * min(A, min(B, C)) << endl;

    return 0;
}