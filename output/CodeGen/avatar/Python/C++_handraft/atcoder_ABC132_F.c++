#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 1005;
const int maxk = 1005;
const int inf = 0x3f3f3f3f;

int n, k;
int a[maxn];
int dp[maxk][maxn];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &k);
        for (int i = 1; i <= n; ++i) scanf("%d", a + i);
        for (int i = 0; i <= k; ++i) dp[i][0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= k; ++j) {
                for (int l = 1; l <= i; ++l) {
                    dp[j][i] += dp[j - 1][i - l] * a[i];
                    dp[j][i] %= 1000000007;
                }
            }
        }
        printf("%d\n", dp[k][n]);
    }
    return 0;
}