#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

const int maxn = 1005;
int N, K;
int lst[maxn];
int lst_p[maxn];
int lst_m[maxn];
int p, m;
int lastx, lasty;
int ans;

int check(int k) {
    int ans = 10e9;
    for (int j = 0; j < k + 1; ++j) {
        if (j > lastx || k - j > lasty) {
            continue;
        }
        if (j == 0) {
            p = 0;
        } else {
            p = lst_p[j - 1];
        }
        if (k - j == 0) {
            m = 0;
        } else {
            m = lst_m[lasty - (k - j)];
        }
        ans = min(ans, 2 * p + abs(m), p + 2 * abs(m));
    }
    return ans;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &N, &K);
        for (int i = 0; i < N; ++i) {
            scanf("%d", &lst[i]);
        }
        for (int i = 0; i < N; ++i) {
            scanf("%d", &lst_p[i]);
        }
        for (int i = 0; i < N; ++i) {
            scanf("%d", &lst_m[i]);
        }
        lastx = N;
        lasty = N;
        ans = check(K);
        printf("%d\n", ans);
    }
    return 0;
}