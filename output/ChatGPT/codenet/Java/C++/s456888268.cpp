#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <cassert>
#include <complex>
#include <random>
#include <iomanip>
#include <fstream>
#include <functional>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define RFOR(i, a, b) for(int i = (int)(b) - 1; i >= (int)(a); i--)
#define REP1(i, n) for(int i = 1; i <= (int)(n); i++)
#define FORR(i, a, b) for(int i = (int)(b) - 1; i >= (int)(a); i--)
#define ALL(a) (a).begin(), (a).end()

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

template<typename T> void chmax(T& a, T b) { if(a < b) a = b; }
template<typename T> void chmin(T& a, T b) { if(a > b) a = b; }
template<typename T> void chadd(T& a, T b) { a += b; if(a >= mod) a -= mod; }
template<typename T> void chmul(T& a, T b) { a *= b; if(a >= mod) a %= mod; }
template<typename T> void chmul(T& a, T b, T m) { a *= b; if(a >= m) a %= m; }

template<class T1, class T2> ostream& operator<<(ostream &os, const pair<T1, T2> &p) {return os << p.first << ":" << p.second;}
template<class T> ostream& operator<<(ostream &os, const vector<T> &v) {os << "["; REP(i, v.size()) os << v[i] << (i == v.size() - 1 ? "" : ","); return os << "]";}

template<typename T> void printv(const vector<T>& s, int l = -1, int r = -1) { if(l < 0) l = 0; if(r < 0) r = s.size(); FOR(i, l, r) cout << s[i] << (i == r - 1 ? "\n" : " "); }

template<typename T> void print2d(const vector<vector<T>>& s, int x = -1, int y = -1, int ex = -1, int ey = -1) {
    if(x < 0) x = 0;
    if(y < 0) y = 0;
    if(ex < 0) ex = s.size();
    if(ey < 0) ey = s[0].size();
    FOR(i, x, ex) printv(s[i], y, ey);
}

template<typename T> void printvv(const vector<vector<T>>& s, int x = -1, int y = -1, int ex = -1, int ey = -1, int w = 3) {
    if(x < 0) x = 0;
    if(y < 0) y = 0;
    if(ex < 0) ex = s.size();
    if(ey < 0) ey = s[0].size();
    FOR(i, x, ex) {
        FOR(j, y, ey) cout << setw(w) << s[i][j] << (j == ey - 1 ? "\n" : " ");
    }
}

template<typename T1, typename T2> void printm(const map<T1, T2>& mp) { for(auto it = mp.begin(); it != mp.end(); ++it) cout << it->first << ":" << it->second << " "; cout << endl; }
template<typename T1, typename T2> void printum(const unordered_map<T1, T2>& mp) { for(auto it = mp.begin(); it != mp.end(); ++it) cout << it->first << ":" << it->second << " "; cout << endl; }
template<typename T> void printms(const multiset<T>& st) { for(auto it = st.begin(); it != st.end(); ++it) cout << *it << " "; cout << endl; }
template<typename T> void printus(const unordered_set<T>& st) { for(auto it = st.begin(); it != st.end(); ++it) cout << *it << " "; cout << endl; }

template<class T1,class T2,class T3,class T4>
struct quad{ T1 first;T2 second;T3 third;T4 fourth;quad(){} quad(T1 a,T2 b,T3 c,T4 d):first(a),second(b),third(c),fourth(d){}
};
template<class T1,class T2,class T3>
struct tri{ T1 first;T2 second;T3 third; tri(){} tri(T1 a,T2 b,T3 c):first(a),second(b),third(c){} };
template<class T1,class T2>
struct pairr{ T1 first;T2 second;pairr(){} pairr(T1 a,T2 b):first(a),second(b){} };

template<typename T> T gcd(T a, T b){ return b != 0 ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b){ return a != 0 ? a / gcd(a, b) * b : 0; }

template<typename T> void SO(T& ve){ sort(ve.begin(), ve.end()); }
template<typename T> void REV(T& ve){ reverse(ve.begin(), ve.end()); }

template<typename T> T fact(T n) { T ret=1; for (T i = 1; i <= n; i++) ret *= i; return ret; }
template<typename T> T nCr(T n,T r) { T ret=1; for (T i = 0; i < r; i++) ret = ret * (n - i) / (i + 1); return ret; }
template<typename T> T mod_pow(T x, T n, T mod) { T ret=1; while(n > 0) { if(n & 1) ret = ret * x % mod; x = x * x % mod; n >>= 1; } return ret; }
template<typename T> T mod_inv(T x, T mod) { return mod_pow(x, mod - 2, mod); }

const int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, -1, 0, 1 };
const int dx8[] = { -1, -1, -1, 0, 0, 1, 1, 1 }, dy8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const int inf = 1e9 + 7;
const ll linf = 1LL << 60;
const double dinf = 1e18;
const double eps = 1e-10;
const double pi = acos(-1.0);
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

void solve() {
    string tmp;
    cin >> tmp;
    int n = tmp.size();
    char s[n];
    strcpy(s, tmp.c_str());
    int ans = 0;
    int cnt = 0;
    for(int i=0;i<n;i++) {
        if(s[i]=='S') {
            cnt++;
        }
        else {
            if(cnt == 0)continue;
            ans++;
            cnt--;
        }
    }
    cout << n - 2*ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}