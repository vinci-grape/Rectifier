#include <iostream>
#include <string>

using namespace std;

int main() {
	string youbi[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0; i < 7; i++) {
		if (youbi[i] == s) {
			ans = 7 - i;
		}
	}
	cout << ans << endl;
	return 0;
}