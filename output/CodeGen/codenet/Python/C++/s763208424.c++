#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int n, m;
int a[maxn];
int dis(int x, int y) {
    return x >> y;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
        a[i] = -a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++) {
        a[i] = -dis(a[i], 1);
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}