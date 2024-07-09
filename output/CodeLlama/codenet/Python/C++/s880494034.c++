#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> XS(N);
	for (int i = 0; i < N; i++) {
		cin >> XS[i];
	}

	int m = 9999999999;
	for (int i = 1; i <= 100; i++) {
		int c = 0;
		for (int j = 0; j < N; j++) {
			c += pow(XS[j] - i, 2);
		}
		if (m > c) {
			m = c;
		}
	}

	cout << m << endl;

	return 0;
}