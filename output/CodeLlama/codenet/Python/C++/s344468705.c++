#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> dp;
    dp.pb(-INF);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        num = -num;
        if (num >= dp.back()) {
            dp.pb(num);
        } else {
            int idx = lower_bound(all(dp), num) - dp.begin();
            dp[idx] = num;
        }
    }
    cout << dp.size() - 1 << '\n';
    return 0;
}