#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long solve(int n, int m, vector<int>& a) {
    unordered_map<int, int> dp;
    long long ans = 0;
    int base = 0;
    for (int i = 0; i < n; i++) {
        base = (base - a[i] % m + m) % m;
        dp[(base + a[i]) % m]++;
        ans += dp[base];
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans = solve(n, m, a);
    cout << ans << endl;
    return 0;
}