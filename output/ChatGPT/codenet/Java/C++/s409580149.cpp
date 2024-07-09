#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> a;
vector<vector<vector<double>>> dp;

double rec(int i, int j, int k) {
    if (dp[i][j][k] != -1) return dp[i][j][k];
    double ret = 0;
    double p = ((double)i+j+k)/n;
    double pi = (double)i/n;
    double pj = (double)j/n;
    double pk = (double)k/n;
    ret += 1/p;
    if (i>0) ret += pi/p * rec(i-1, j, k);
    if (j>0) ret += pj/p * rec(i+1, j-1, k);
    if (k>0) ret += pk/p * rec(i, j+1, k-1);
    return dp[i][j][k] = ret;
}

void solve() {
    cin >> n;
    a.resize(n);
    dp.resize(n+1, vector<vector<double>>(n+1, vector<double>(n+1, -1)));
    for (int i = 0; i < n+1; i++) {
        for (int j = 0; j < n+1; j++) {
            for (int k = 0; k < n+1; k++) {
                dp[i][j][k] = -1;
            }
        }
    }
    dp[0][0][0] = 0;
    vector<int> cnt(3);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]-1]++;
    }
    double ans = rec(cnt[0], cnt[1], cnt[2]);
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}