#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int total = 0;
	for (int i = 0; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s.at(i) == s.at(j)) {
				total++;
			}
		}
	}
	cout << (total == 2? "Yes" : "No") << endl;
	return 0;
}