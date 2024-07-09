#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

typedef long long ll;

const int maxn = 1005;

int n, k;
ll a[maxn];

int main() {
  scanf("%d%lld", &n, &k);
  for (int i = 0; i < n; i++) scanf("%lld", a + i);
  sort(a, a + n);
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll now = a[i];
    ll tot = 0;
    for (int j = 0; j < n; j++) {
      ll now2 = a[j];
      if (now2 >= 0) {
        tot += j;
      } else {
        tot += n - j;
      }
      if (now * now2 < k) tot--;
    }
    ans = max(ans, tot);
  }
  printf("%lld\n", ans);
  return 0;
}