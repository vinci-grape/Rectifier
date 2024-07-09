#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;

int n, t, val[maxn];
int dp[maxn][maxn];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &val[i]);
    }
    scanf("%d", &t);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= t; j++) {
            dp[i][j] = dp[i - 1][j];
            if(j >= val[i]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - val[i]] + val[i]);
            }
        }
    }
    printf("%d\n", dp[n][t]);
    return 0;
}