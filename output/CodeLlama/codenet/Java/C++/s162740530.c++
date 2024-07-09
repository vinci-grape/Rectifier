#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int a[m + 1];
	int cnt[n + 1];
	cnt[0] = 1;
	const int MOD = 1000000007;

	for (int i = 1; i < m + 1; i++) {
		cin >> a[i];
	}

	int num = 1;
	if (m > 0) {
		if (a[1] == 1) {
			cnt[1] = 0;
			if (num < m) {
				num++;
			}
		} else {
			cnt[1] = 1;
		}
	} else {
		cnt[1] = 1;
	}

	for (int i = 2; i < n + 1; i++) {

		cnt[i] = cnt[i - 2] + cnt[i - 1];
		cnt[i] %= MOD;
		if (m > 0) {
			if (i == a[num]) {
				cnt[i] = 0;
				if (num < m) {
					num++;
				}
			}
		}

	}

	cout << cnt[n] << endl;
	return 0;
}