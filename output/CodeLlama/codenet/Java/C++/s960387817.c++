#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	unordered_set<int> set;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		set.insert(x);
	}
	cout << set.size() << endl;
	return 0;
}