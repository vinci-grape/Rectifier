#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cassert>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <complex>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <utility>
#include <bitset>
#include <numeric>
#include <functional>
#include <iomanip>
#include <stdexcept>
#include <utility>
#include <cstddef>
#include <cstdlib>
#include <cstdint>
#include <cfloat>
#include <cmath>
#include <climits>
#include <cstring>
#include <ctype.h>

using namespace std;

#define DEBUG 0 // change 0 -> 1 if we need debug.

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const int MAX_N = 1e5 + 10;

template <typename T>
inline T sqr(T a) { return a * a;};

int t, n, m, a[MAX_N], b[MAX_N], c[MAX_N], d[MAX_N], e[MAX_N], f[MAX_N];

int main(int argc, char const *argv[])
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; ++i)
            scanf("%d", a + i);
        for (int i = 0; i < m; ++i)
            scanf("%d%d%d%d", b + i, c + i, d + i, e + i);
        for (int i = 0; i < m; ++i)
            f[i] = b[i] + c[i] + d[i] + e[i];
        sort(a, a + n);
        sort(b, b + m);
        sort(c, c + m);
        sort(d, d + m);
        sort(e, e + m);
        sort(f, f + m);
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int j = lower_bound(b, b + m, a[i]) - b;
            int k = lower_bound(c, c + m, a[i]) - c;
            int l = lower_bound(d, d + m, a[i]) - d;
            int m = lower_bound(e, e + m, a[i]) - e;
            int n = lower_bound(f, f + m, a[i]) - f;
            ans += n * (n - 1) / 2 * (m - l) * (m - k) * (m - j);
        }
        printf("%d\n", ans);
    }    
    return 0;
}