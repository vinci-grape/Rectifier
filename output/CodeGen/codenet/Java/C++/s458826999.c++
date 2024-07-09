#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	string S;
	cin >> S;
	long MOD = 1000000007;
	long dp[S.length() + 1][13];
	dp[0][0] = 1;
	for(int i = 0; i < S.length(); i++) {
		if(S.substring(i, i + 1).equals("?")) {
			for(int j = 0; j < 10; j++) {
				for(int k = 0; k < 13; k++) {
					dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
					dp[i + 1][(k * 10 + j) % 13] %= MOD;
				}
			}
		} else {
			for(int k = 0; k < 13; k++) {
				int x = stoi(S.substring(i, i + 1));
				dp[i + 1][(k * 10 + x) % 13] += dp[i][k];
				dp[i + 1][(k * 10 + x) % 13] %= MOD;
			}
		}
	}
	cout << dp[S.length()][5] << endl;
	return 0;
}