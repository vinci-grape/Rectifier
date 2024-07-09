#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int s;
	cin >> s;
	cout << dfs(s) << endl;
	return 0;
}

long dfs(int s) {
	if (dp[s]!= -1) {
		return dp[s];
	}

	long ret = 0;
	for (int i = s - 3; i >= 0; i--) {
		ret += dfs(i);
		ret %= 1000000007;
	}
	return dp[s] = ret;
}