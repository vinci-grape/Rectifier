#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if you want to see debug info

typedef long long ll;

const int maxn = 1000005;

int n, k;
int a[maxn];
ll cumsum[maxn];
ll b[maxn];
ll max;

void solve() {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++) {
		cumsum[i] = cumsum[i - 1] + a[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			b[i + j] = cumsum[j + 1] - cumsum[i];
			max = max > cumsum[j + 1] - cumsum[i]? max : cumsum[j + 1] - cumsum[i];
		}
	}
	
	sort(b, b + n * (n + 1) / 2);
	
	ll ans = -1;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (b[i + j] == max) {
				ans &= b[i + j];
			}
		}
	}
	
	if (ans < 0) {
		printf("0\n");
	} else {
		printf("%lld\n", ans);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		solve();
	}
	return 0;
}