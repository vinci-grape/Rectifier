#include <bits/stdc++.h>
using namespace std;

int main() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

int m, n;
cin >> m >> n;
int manju[m];
int boxlen[n];
int boxcost[n];
for (int i = 0; i < m; i++) cin >> manju[i];
for (int i = 0; i < n; i++) cin >> boxlen[i] >> boxcost[i];
sort(manju, manju + m);
int dp[m + 1][n + 1];
for (int i = m - 1; i >= 0; i--) {
for (int j = n - 1; j >= 0; j--) {
int len = i + boxlen[j] >= m? m : i + boxlen[j];
int cnt = 0;
for (int k = i; k < len; k++) cnt += manju[m - 1 - k];
dp[i][j] = max(dp[i][j], dp[len][j + 1] + cnt - boxcost[j]);
dp[i][j] = max(dp[i][j], dp[i][j + 1]);
}
}
cout << dp[0][0];

return 0;
}