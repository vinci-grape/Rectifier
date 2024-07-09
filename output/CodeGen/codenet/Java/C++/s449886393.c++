#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	string youbi[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0; i < 7; i++) {
		if (youbi[i].compare(s) == 0) {
			ans = 7 - i;
		}
	}
	cout << ans << endl;
	return 0;
}