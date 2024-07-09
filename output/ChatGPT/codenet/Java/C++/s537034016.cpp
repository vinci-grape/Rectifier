#include <iostream>
#include <vector>
using namespace std;

const int mod = 1000000007;

vector<long long> dp;

long long dfs(int s) {
    if (dp[s] != -1) {
        return dp[s];
    }

    long long ret = 0;
    for (int i = s - 3; i >= 0; i--) {
        ret += dfs(i);
        ret %= mod;
    }
    return dp[s] = ret;
}

int main() {
    int s;
    cin >> s;

    dp.resize(s + 1, -1);
    dp[0] = 1;

    cout << dfs(s) << endl;

    return 0;
}