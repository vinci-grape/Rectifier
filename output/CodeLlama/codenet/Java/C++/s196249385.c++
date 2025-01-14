#include <bits/stdc++.h>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	vector<long long> cumsum(n + 1);
	for (int i = 0; i < n; i++) {
		cumsum[i + 1] = cumsum[i] + a[i];
	}

	vector<long long> b;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			b.push_back(cumsum[j + 1] - cumsum[i]);
			max = max(max, cumsum[j + 1] - cumsum[i]);
		}
	}
//	sort(b.rbegin(), b.rend());

	long long mask = 1LL << 62;
	while (mask > 0) {
		vector<long long> tmp;
		for (long long e : b) {
			if ((e & mask) != 0) {
				tmp.push_back(e);
			}
		}
		
		if (tmp.size() >= k) {
			b = tmp;
		}
		
		mask >>= 1;
	}
	
	if (b.size() < k) {
		cout << 0 << endl;
	} else {
		long long ans = -1LL;
		for (long long e : b) {
			ans &= e;
		}
		
		cout << ans << endl;
	}

	return 0;
}