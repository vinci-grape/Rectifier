#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	string mark[] = {"S", "H", "C", "D"};
	for (string ma : mark) {
		for (int i = 1; i <= 13; i++) {
			string s = to_string(i);
			string st = ma + " " + s;
			if (find(str, str + n, st) != str + n) {
				continue;
			}
			else {
				cout << st << endl;
			}
		}
	}
	return 0;
}