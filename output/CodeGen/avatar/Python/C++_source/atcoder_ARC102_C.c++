#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cctype>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int P = 1000000007;
const int MAXN = 100000 + 10;
const int MAXK = 100000 + 10;

int n, k;
int a[MAXN];

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int l = i - k;
        int r = i + k;
        if (l < 1) l = 1;
        if (r > n) r = n;
        int sum = 0;
        for (int j = l; j <= r; ++j) sum += a[j];
        ans = (ans + sum) % P;
    }
    printf("%d\n", ans);
    return 0;
}