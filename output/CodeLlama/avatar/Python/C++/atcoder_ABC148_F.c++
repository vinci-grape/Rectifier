#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define umap unordered_map
#define uset unordered_set
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define endl '\n'

const int N = 1e5 + 9;
const ll mod = 1e9 + 7;

int n, ta, ao;
vector<int> g[N];
int ta_dist[N], ao_dist[N];

void ta_dfs(int node) {
    for (int v : g[node]) {
        if (ta_dist[v] != -1) continue;
        ta_dist[v] = ta_dist[node] + 1;
        ta_dfs(v);
    }
}

void ao_dfs(int node) {
    for (int v : g[node]) {
        if (ao_dist[v] != -1) continue;
        ao_dist[v] = ao_dist[node] + 1;
        ao_dfs(v);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> ta >> ao;
    ta--; ao--;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].pb(b - 1);
        g[b - 1].pb(a - 1);
    }
    ta_dist[ta] = 0;
    ao_dist[ao] = 0;
    ao_dfs(ao);
    ta_dfs(ta);
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (ta_dist[i] > ao_dist[i]) continue;
        res = max(res, ao_dist[i]);
    }
    cout << res - 1 << endl;
    return 0;
}