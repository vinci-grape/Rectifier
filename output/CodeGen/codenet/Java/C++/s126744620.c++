#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	vector<int> x(200010);
	for(int i = 0 ; i < n ; i++) x[a[i] - 1]++;
	sort(x.begin(), x.end());
	int ans = 0;
	for(int i = 0 ; i <= 200010 - k - 1 ; i++) {
		ans += x[i];
	}
	cout << ans << endl;
	return 0;
}