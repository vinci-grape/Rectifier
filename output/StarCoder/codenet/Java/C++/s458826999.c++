#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int MOD = 1000000007;
	int dp[13][13] = {0};
	dp[0][0] = 1;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '?') {
			for(int j = 0; j < 10; j++) {
				for(int k = 0; k < 13; k++) {
					dp[k][(k * 10 + j) % 13] += dp[k][k];
					dp[k][(k * 10 + j) % 13] %= MOD;
				}
			}
		} else {
			for(int k = 0; k < 13; k++) {
				int x = s[i] - '0';
				dp[k][(k * 10 + x) % 13] += dp[k][k];
				dp[k][(k * 10 + x) % 13] %= MOD;
			}
		}
	}
	cout << dp[5][5];
	return 0;
}