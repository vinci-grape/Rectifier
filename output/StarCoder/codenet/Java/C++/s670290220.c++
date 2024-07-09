#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	string s;
	cin >> s;
	for (int i=0; i<s.length(); i++) {
		s[i] = (char)((s[i]-'A'+N) % 26 + 'A');
	}
	cout << s;
	return 0;
}