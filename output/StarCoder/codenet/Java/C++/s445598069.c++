#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int s[100010];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s[x]++;
	}
	int dec = 0;
	for (int i = 0; i < 100010; i++) {
		if (s[i]!= 0) {
			if (s[i] % 2 == 0) {
				s[i] = 2;
			} else {
				s[i] = 1;
			}
		}
	}
	int one = 0;
	int two = 0;
	for (int i = 0; i < 100010; i++) {
		if (s[i] == 2) {
			two++;
		} else if (s[i] == 1) {
			one++;
		}
	}
	if (two % 2!= 0) {
		one--;
	}
	cout << two + one << endl;
	return 0;
}