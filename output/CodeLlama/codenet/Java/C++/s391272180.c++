#include <iostream>
#include <string>
using namespace std;

string Rotate(string str) {
	int len = str.length();
	char t = str[0];
	for (int i = 0; i < len - 1; i++) {
		str[i] = str[i + 1];
	}
	str[len - 1] = t;
	return str;
}

int main() {
	string s, t;
	cin >> s >> t;
	bool flag = false;
	for (int i = 0; i < s.length(); i++) {
		s = Rotate(s);
		if (t == s) {
			flag = true;
			break;
		}
	}
	if (flag == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}