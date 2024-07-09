#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long cumsum[n + 1];
	cumsum[0] = 0;
	for (int i = 0; i < n; i++) {
		cumsum[i + 1] = cumsum[i] + a[i];
	}

	long b[n * (n + 1) / 2];
	long max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			b[i * (n - i) / 2 + j - i] = cumsum[j + 1] - cumsum[i];
			max = max < b[i * (n - i) / 2 + j - i]? b[i * (n - i) / 2 + j - i] : max;
		}
	}

	long mask = 1;
	while (mask <= max) {
		long tmp[n * (n + 1) / 2];
		int idx = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if ((b[i * (n - i) / 2 + j - i] & mask)!= 0) {
					tmp[idx++] = b[i * (n - i) / 2 + j - i];
				}
			}
		}

		if (idx >= k) {
			b = tmp;
			max = b[0];
		}

		mask <<= 1;
	}

	if (b[0] == 0) {
		cout << 0 << endl;
	} else {
		long ans = b[0];
		for (int i = 1; i < k; i++) {
			ans &= b[i];
		}

		cout << ans << endl;
	}

	return 0;
}