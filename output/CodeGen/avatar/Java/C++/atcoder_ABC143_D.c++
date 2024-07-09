#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define ll long long

const int maxn = 1005;

int n, m;
ll a[maxn], b[maxn];

int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
    for(int i = 0; i < m; i++) scanf("%lld", &b[i]);
    sort(a, a + n);
    sort(b, b + m);
    ll ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            ans += lower_bound(b, b + m, a[i] + b[j]) - b;
    printf("%lld\n", ans);
    return 0;
}