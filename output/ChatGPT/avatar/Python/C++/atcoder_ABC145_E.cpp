#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<pair<int, int>> time_value(N + 1, make_pair(-1, -1));
    for (int i = 1; i <= N; i++) {
        cin >> time_value[i].first >> time_value[i].second;
    }
    sort(time_value.begin(), time_value.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    vector<vector<int>> dp(N + 1, vector<int>(T, -1));
    for (int t = 0; t < T; t++) {
        dp[0][t] = 0;
    }
    for (int n = 1; n <= N; n++) {
        dp[n][0] = 0;
        for (int t = 1; t < T; t++) {
            if (time_value[n].first > t) {
                dp[n][t] = dp[n - 1][t];
            } else {
                dp[n][t] = max(dp[n - 1][t], time_value[n].second + dp[n - 1][t - time_value[n].first]);
            }
        }
    }
    int val_acum = time_value[N].second;
    int t = T - 1;
    int max_val = val_acum + dp[N - 1][t];
    for (int n = N - 1; n > 0; n--) {
        val_acum += time_value[n].second;
        t -= time_value[n + 1].first;
        if (t < 0) {
            break;
        } else {
            max_val = max(max_val, val_acum + dp[n - 1][t]);
        }
    }
    cout << max_val << endl;

    return 0;
}