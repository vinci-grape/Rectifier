#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	int n;
	cin >> n;
	string str[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	int s[100010];
	for (int i = 0; i < n; i++) {
		s[atoi(str[i].c_str())]++;
	}
	int dec = 0;
	for (int i = 0; i < n; i++) {
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
	for (int i = 0; i < n; i++) {
		if (s[i] == 2) {
			two++;
		} else if (s[i] == 1) {
			one++;
		}
	}
	if (two % 2!= 0) {
		one--;
	}
	cout << two << one;
	return 0;
}