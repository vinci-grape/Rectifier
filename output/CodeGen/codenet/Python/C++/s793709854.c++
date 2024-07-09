#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cctype>
#include <queue>
#include <deque>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 5;
const int T = 1e5 + 5;
const int INF = 1e9 + 9;

int dp[N][T];

int main() {
    int n, t;
    scanf("%d%d", &n, &t);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t; j++) {
            if (j < a[i]) {
                dp[i][j] = dp[i][j];
            } else {
                dp[i][j] = max(dp[i][j], dp[i][j-a[i]]+a[i]);
            }
        }
    }
    int ans = dp[n-1][t-1];
    for (int i = n-2; i >= 0; i--) {
        if (i < n-1) {
            for (int j = 0; j < t; j++) {
                if (j < a[i]) {
                    dp[i][j] = dp[i][j];
                } else {
                    dp[i][j] = max(dp[i][j], dp[i][j-a[i]]+a[i]);
                }
            }
        }
        ans = max(ans, dp[i][t-1]);
    }
    printf("%d\n", ans);
    return 0;
}