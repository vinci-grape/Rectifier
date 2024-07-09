#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int min = a[0], max = a[n - 1];
	long long mins = 0, maxs = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == min) mins++;
		if (a[i] == max) maxs++;
	}
	if (min == max) {
		cout << (max - min) << " " << mins * (mins - 1) / 2 << "\n";
	} else {
		cout << (max - min) << " " << mins * maxs << "\n";
	}
	return 0;
}