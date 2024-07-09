#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	long ans = 0;
	for(int mask = 0 ; mask < 1<<(n - 1) ; mask++) {
		long sum = 0;
		string x = "";
		for(int i = 0 ; i < n - 1 ; i++) {
			if((mask&(1<<i)) >= 1) {
				x += "+" + s.substr(i, 1);
			} else {
				x += s.substr(i, 1);
			}
		}
		string[] split = x.split("\\+");
		for(int i = 0 ; i < split.length ; i++) {
			sum += atol(split[i].c_str());
		}
		ans += sum;
	}
	cout << ans << endl;
	return 0;
}