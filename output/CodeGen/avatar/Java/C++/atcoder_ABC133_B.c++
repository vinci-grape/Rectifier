#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int n, d;
int a[maxn][maxn];

int main() {
    scanf("%d%d", &n, &d);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < d; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int dist = 0;
            for(int k = 0; k < d; k++) {
                int x = a[i][k] - a[j][k];
                dist += x * x;
            }
            double sq = sqrt(dist);
            ans += abs(sq - floor(sq)) < 0.001? 1 : 0;
        }
    }
    printf("%d\n", ans);
    return 0;
}