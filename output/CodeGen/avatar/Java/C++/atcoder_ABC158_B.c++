#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

const int maxn = 100100;

int n, a, b;
ll ans;

int main() {
    scanf("%d%d%d", &n, &a, &b);
    ll t = n / (a + b);
    if (n - t * (a + b) > a) {
        ans = a * t + (n - t * (a + b)) - (n - (t * (a + b) + a));
    } else {
        ans = a * t + (n - t * (a + b));
    }
    printf("%lld\n", ans);
    return 0;
}