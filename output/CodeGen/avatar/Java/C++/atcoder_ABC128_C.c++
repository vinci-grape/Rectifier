#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;

int n, m;
int a[maxn];
int b[maxn];
int c[maxn];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < m; i++) {
            c[i] = 0;
            for (int j = 0; j < n; j++) {
                c[i] |= (a[j] & b[i]) >> j;
            }
        }
        int ans = 0;
        for (int i = 0; i < (1 << n); i++) {
            int t = 0;
            for (int j = 0; j < m; j++) {
                t |= (c[j] & i) >> j;
            }
            if (t == 0) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}