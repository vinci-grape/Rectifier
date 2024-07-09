#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	string mark[] = {"S", "H", "C", "D"};
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 13; j++) {
			string s = to_string(j);
			string st = mark[i] + " " + s;
			if (find(str, str + n, st)!= str + n) {
				cout << st << endl;
			}
		}
	}
	return 0;
}