#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int maxn = 1000005;

int n, m;
int a[maxn];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", a + i);
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int k = lower_bound(a + i + 1, a + n, a[j] - a[i]) - a - i - 1;
            if (k < m) {
                ans += (a[j] - a[i]) * (a[j] - a[i]) * (a[j] - a[i]);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}