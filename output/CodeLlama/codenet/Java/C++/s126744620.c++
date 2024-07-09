#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	int x[200010];
	memset(x, 0, sizeof(x));
	for(int i = 0 ; i < n ; i++) {
		x[a[i] - 1]++;
	}
	sort(x, x + 200010);
	int ans = 0;
	for(int i = 0 ; i <= 200010 - k - 1 ; i++) {
		ans += x[i];
	}
	cout << ans << endl;
}