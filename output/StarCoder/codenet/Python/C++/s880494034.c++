#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> XS;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		XS.push_back(x);
	}

	int m = INT_MAX;
	for (int i = 1; i <= 100; i++) {
		int c = 0;
		for (int x : XS) {
			c += (x - i) * (x - i);
		}
		if (m > c) {
			m = c;
		}
	}

	cout << m << endl;
	return 0;
}