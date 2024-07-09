#include <iostream>
#include <string>
using namespace std;
int main() {
	int N;
	cin >> N;
	string s[N];
	int a_num = 0;
	int b_num = 0;
	bool flag = true;
	int ans = 0;
	for(int i = 0; i < N; i++) {
		cin >> s[i];
		if(s[i].substr(0, 1) == "B") {
			b_num++;
		}
		if(s[i].substr(s[i].length() - 1, s[i].length()) == "A"){
			a_num++;
		}
		if(s[i].substr(0, 1) == "B" || s[i].substr(s[i].length() - 1, s[i].length()) == "A") {
			if(!(s[i].substr(0, 1) == "B" && s[i].substr(s[i].length() - 1, s[i].length()) == "A")) {
				flag = false;
			}
		}
		for(int j = 0; j < s[i].length() - 1; j++) {
			if(s[i].substr(j, j + 2) == "AB") ans++;
		}
	}
	ans += min(a_num, b_num);
	if(min(a_num, b_num) != 0 && flag) {
		ans--;
	}
	cout << ans << endl;
}