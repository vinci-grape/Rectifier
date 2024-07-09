#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	map<char, int> m;
	for (char c : s) {
		if (!m.count(c)) m[c] = 1;
		else m[c]++;
	}
	bool ok = true;
	for (auto c : m) {
		if (c.second!= 2) {
			ok = false;
			break;
		}
	}
	if (ok && m.size() == 2) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}