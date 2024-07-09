#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

long dp[100001];

int main() {
	int s;
	cin >> s;
	fill(dp, dp + 100001, -1);
	dp[0] = 1;
	cout << dfs(s);
}

long dfs(int s) {
	if (dp[s]!= -1) {
		return dp[s];
	}

	long ret = 0;
	for (int i = s - 3; i >= 0; i--) {
		ret += dfs(i);
		ret %= mod;
	}
	return dp[s] = ret;
}