#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip> 
#include <algorithm>
#include <queue>
#include <list>
#include <numeric>
#include <stack>
#include <unordered_map>
#include <map>
#include <set>

using namespace std;

#define sz(a) int((a).size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define endl '\n'
#define watch(x) cout << #x << " : " << x << endl;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;

const int N = int(2e5)+10;
const int K = int(2e6)+10;
const int MOD = int(1e9)+7;
const int INF = int(1e9)+5;
const ll INF64 = 2e18;

void solve () {
    ll ans = 0;
    int n;cin>>n;
    # Contribution of The Nodes.
    for (int i=1;i<=n;i++) {
        ans += i * 1ll * (n-i+1);
    }
    for (int i=1;i<n;i++) {
        int u,v;cin>>u>>v;
        int a = max(u,v);
        int b = min(u,v);
        ans -= b * 1ll * (n-a+1);
    }
    print(ans)
}

int main () {
    FastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    # cin>>t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}