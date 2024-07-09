#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int n, a, b, c;
int l[maxn];

int dfs(int cur, int a, int b, int c) {
    if (cur == n) {
        return abs(a - a) + abs(b - b) + abs(c - c) - 30 if min(a, b, c) > 0 else 10 ** 9;
    }
    int no_add = dfs(cur + 1, a, b, c);
    int add_a = dfs(cur + 1, a + l[cur], b, c) + 10;
    int add_b = dfs(cur + 1, a, b + l[cur], c) + 10;
    int add_c = dfs(cur + 1, a, b, c + l[cur]) + 10;
    return min(no_add, add_a, add_b, add_c);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d%d", &n, &a, &b, &c);
        for (int i = 0; i < n; i++) {
            scanf("%d", &l[i]);
        }
        printf("%d\n", dfs(0, 0, 0, 0));
    }
    return 0;
}