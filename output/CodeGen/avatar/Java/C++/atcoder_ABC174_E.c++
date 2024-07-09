#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 1005;

int n, k;
int logs[maxn];

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &logs[i]);
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < logs[i]; j++) {
            ans = max(ans, (i + 1) / 2);
        }
    }
    printf("%d\n", ans);
    return 0;
}