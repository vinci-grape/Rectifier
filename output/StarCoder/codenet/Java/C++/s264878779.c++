#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin >> s;
	int n = s.length();
	long long ans = 0;
	for(int mask = 0 ; mask < 1<<(n - 1) ; mask++) {
		long long sum = 0;
		string x = "" + s[0];
		for(int i = 0 ; i < n - 1 ; i++) {
			if((mask&(1<<i)) >= 1) {
				x += "+" + s[i + 1];
			} else {
				x += s[i + 1];
			}
		}
		string split[100];
		int cnt = 0;
		for(int i = 0 ; i < x.length() ; i++) {
			if(x[i] == '+') {
				split[cnt] = x.substr(0, i);
				cnt++;
				x = x.substr(i + 1);
				i = -1;
			}
		}
		split[cnt] = x;
		for(int i = 0 ; i < cnt ; i++) {
			sum += stoll(split[i]);
		}
		ans += sum;
	}
	cout << ans << '\n';
	return 0;
}