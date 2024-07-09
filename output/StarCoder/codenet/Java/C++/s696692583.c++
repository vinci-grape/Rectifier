#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int my1, my2, enemy1;
		cin >> my1 >> my2 >> enemy1;
		bool used[11] = {0};
		used[my1] = used[my2] = used[enemy1] = true;
		int all = 0, safe = 0;
		for (int i = 1; i <= 10; i++) if (!used[i]) {
			all++;
			if (my1 + my2 + i <= 20) safe++;
		}
		if (safe * 2 >= all) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}