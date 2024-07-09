#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug this code.

typedef long long ll;

const int maxn = 100000;

int n;
ll A[maxn];
ll ans = 0;

void solve() {
  ll div = (ll)pow(10, 9) + 7;
  for (int i = 0; i < 60; i++) {
    ll a = 0;
    ll count1 = 0;
    for (int j = 0; j < n; j++) {
      if ((A[j] >> i & 1) == 1) count1++;
    }
    a = a + count1 * (n - count1);
    for (int j = 0; j < i; j++) {
      a = (a << 1) % div;
    }
    ans += a;
    ans %= div;
  }
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%lld", &A[i]);
  }
  solve();
  printf("%lld\n", ans);
}