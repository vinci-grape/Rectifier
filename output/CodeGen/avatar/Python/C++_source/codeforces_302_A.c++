#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int n, m;
int sa[maxn];
int ss[maxn][maxn];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &sa[i]);
        }
        for (int i = 0; i < m; i++) {
            int a, b;
            scanf("%d%d", &a, &b);
            b -= a;
            ss[i][b >> 1] = 1;
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            if (ss[i][0] == 1) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}