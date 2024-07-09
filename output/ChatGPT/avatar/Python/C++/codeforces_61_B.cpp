#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <cstring>
#include <iomanip>
#include <cassert>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <chrono>
#include <random>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fs first
#define sc second
#define sz(x) (int)(x).size()
#define endl '\n'
#define rall(x) (x).rbegin(),(x).rend()
#define lb lower_bound
#define ub upper_bound
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define debarr(a,n) rep(i,0,n) cout<<a[i]<<" "; cout<<endl;
#define debmat(a,m,n) rep(i,0,n){rep(j,0,m) cout<<a[i][j]<<" "; cout<<endl;}
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
const int mod = 1000000007;
const int inf = (int)1e9 + 5;
const ll INF = (ll)1e18 + 5;
const int N = 2e5 + 5;
vector<int> getl() {
    vector<int> a;
    string s;
    getline(cin, s);
    stringstream ss(s);
    int x;
    while (ss >> x) {
        a.push_back(x);
    }
    return a;
}
template<typename T>
void print(const T &a) {
    for (const auto &x : a) {
        cout << x << " ";
    }
    cout << endl;
}
template<typename T>
void print(const T &a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}
template<typename T>
void print(const T &a, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
string f(string s) {
    string r = "";
    for (char i : s) {
        if (i != '-' && i != ';' && i != '_') {
            r += tolower(i);
        }
    }
    return r;
}
void solve() {
    vector<string> l;
    rep(i, 0, 3) {
        string s;
        getline(cin, s);
        l.pb(f(s));
    }
    vector<string> t;
    do {
        string s;
        for (string i : l) {
            s += i;
        }
        t.pb(s);
    }
    while (next_permutation(all(l)));
    int n;
    cin >> n;
    cin.ignore();
    rep(i, 0, n) {
        string s;
        getline(cin, s);
        if (find(all(t), f(s)) != t.end()) {
            cout << "ACC" << endl;
        }
        else {
            cout << "WA" << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}