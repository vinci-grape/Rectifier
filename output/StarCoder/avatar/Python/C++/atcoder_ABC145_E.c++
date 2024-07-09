#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    int time_value[N + 1][2];
    time_value[0][0] = -1;
    for (int i = 1; i <= N; i++) {
        cin >> time_value[i][0] >> time_value[i][1];
    }
    sort(time_value + 1, time_value + N + 1, [](const int* a, const int* b) {
        return a[1] > b[1];
    });
    int dp[N + 1][T + 1];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= T; j++) {
            dp[i][j] = -1;
        }
    }
    for (int i = 0; i <= T; i++) {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= T; j++) {
            if (time_value[i][0] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], time_value[i][1] + dp[i - 1][j - time_value[i][0]]);
            }
        }
    }
    int val_acum = time_value[N][1];
    int t = T - 1;
    int max_val = val_acum + dp[N - 1][t];
    for (int i = N - 1; i >= 1; i--) {
        val_acum += time_value[i][1];
        t -= time_value[i + 1][0];
        if (t < 0) {
            break;
        } else {
            max_val = max(max_val, val_acum + dp[i - 1][t]);
        }
    }
    cout << max_val << endl;
    return 0;
}