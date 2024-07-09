#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solver() {
    int N;
    cin >> N;
    vector<vector<int>> action(N, vector<int>(3, 0));
    for (int i = 0; i < N; i++) {
        cin >> action[i][0] >> action[i][1] >> action[i][2];
    }

    vector<vector<int>> dp(N, vector<int>(3, 0));

    for (int i = 0; i < 3; i++) {
        dp[0][i] = action[0][i];
    }

    for (int i = 1; i < N; i++) {
        dp[i][0] = max(dp[i-1][1] + action[i][0], dp[i-1][2] + action[i][0]);
        dp[i][1] = max(dp[i-1][0] + action[i][1], dp[i-1][2] + action[i][1]);
        dp[i][2] = max(dp[i-1][0] + action[i][2], dp[i-1][1] + action[i][2]);
    }

    cout << max(dp[N-1][0], max(dp[N-1][1], dp[N-1][2])) << endl;
}

int main() {
    solver();
    return 0;
}