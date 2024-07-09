#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;

const int maxn = 1005;

int n;
int a[maxn];
int leftl[maxn], rightl[maxn];
queue<int> q;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            q.push(i);
        }
        int ans = 0;
        while (!q.empty()) {
            int ind = q.front();
            q.pop();
            ans += (long)a[ind] * (leftl[ind] + 1) * (rightl[ind] + 1);
            for (int i = 0; i < n; i++) {
                if (a[i] > a[ind]) {
                    leftl[i] = leftl[ind];
                    rightl[i] = rightl[ind];
                    q.push(i);
                }
            }
        }
        printf("%ld\n", ans);
    }
    return 0;
}