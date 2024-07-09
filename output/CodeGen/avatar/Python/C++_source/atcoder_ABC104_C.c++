#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 1005;

int n, m;
int pc[maxn][2];
int d[maxn];
int g[maxn];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++) scanf("%d", &d[i]);
        for (int i = 1; i <= n; i++) scanf("%d", &g[i]);
        for (int i = 1; i <= n; i++) scanf("%d%d", &pc[i][0], &pc[i][1]);
        int ans = 10 * 9;
        for (int i = 1; i <= n; i++) {
            int score = 0;
            int problem = 0;
            for (int j = 1; j <= n; j++) {
                if (i == j) continue;
                if ((i >> j) & 1) {
                    score += 100 * (j + 1) * pc[j][0] + pc[j][1];
                    problem += pc[j][0];
                }
            }
            if (score > g[i]) continue;
            int left = g[i] - score;
            for (int j = 1; j <= n; j++) {
                if ((i >> j) & 1) continue;
                if (left > 100 * (j + 1) * pc[j][0] + pc[j][1]) continue;
                int tmp = (left + (100 * (j + 1)) - 1) / (100 * (j + 1));
                ans = min(ans, problem + min(tmp, pc[j][0]));
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}