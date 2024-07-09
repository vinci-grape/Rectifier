#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define umap unordered_map
#define umset unordered_set
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define endl '\n'
const ll mod = 1000000007;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1) {
        if (s[0] == '5' || s[0] == '?') {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }
    vector<vector<ll>> dp(n, vector<ll>(13, 0));
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (s[i] != '?') {
                dp[i][s[i] - '0']++;
            } else {
                for (int j = 0; j < 10; j++) {
                    dp[i][j]++;
                }
            }
        } else {
            if (s[i] != '?') {
                for (int k = 0; k < 13; k++) {
                    dp[i][(k * 10 + s[i] - '0') % 13] += dp[i - 1][k];
                }
            } else {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 13; k++) {
                        dp[i][(k * 10 + j) % 13] += dp[i - 1][k];
                    }
                }
            }
            for (int k = 0; k < 13; k++) {
                dp[i][k] %= mod;
            }
        }
    }
    cout << dp[n - 1][5] << endl;
    return 0;
}