#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	long long ans = 0;
	for(int mask = 0 ; mask < (1<<(n - 1)) ; mask++) {
		long long sum = 0;
		string x = "" + s[0];
		for(int i = 0 ; i < n - 1 ; i++) {
			if((mask&(1<<i)) >= 1) {
				x += "+" + s[i + 1];
			} else {
				x += s[i + 1];
			}
		}
		stringstream ss(x);
		string temp;
		while(ss >> temp) {
			sum += stoll(temp);
		}
		ans += sum;
	}
	cout << ans << endl;
}