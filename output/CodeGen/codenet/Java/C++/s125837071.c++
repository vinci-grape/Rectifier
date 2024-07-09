#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;
	long ans = 1;
	int mod = (int) pow(10, 9) + 7;
	for (int i = 2; i <= n; i++) {
		for (int j = 2; (i % j!= 0 && j < i) || j == i; j++) {
			if (j == i) {
				int s = 0;
				for (int k = 1; k <= n; k++) {
					s += findS(k, i);

				}

				ans = (ans * (s + 1) ) % mod;

			}
		}
	}
	cout << ans << endl;
	return 0;
}

int findS(int k, int i) {
	int s = 0;
	for (int j = k; j % i == 0; j /= i) {

		s++;

	}
	return s;
}