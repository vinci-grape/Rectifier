#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		int res = -1111111111;
		int s = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			s = max(s + a, a);
			res = max(s, res);
		}
		cout << res << endl;
	}
	return 0;
}