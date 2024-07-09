#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	string a[] = {"a","e","i","o","u"};

	for(string str : a) {
		if(str.compare(s) == 0) {
			cout << "vowel" << endl;
			return 0;
		}
	}

	cout << "consonant" << endl;

	return 0;
}