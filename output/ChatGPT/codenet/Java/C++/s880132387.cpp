#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <sstream>
#include <cstring>
#include <bitset>
#include <functional>
#include <numeric>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <fstream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vd> vvd;
typedef vector<vb> vvb;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define all(c) c.begin(), c.end()
#define ms(v, x) memset(v, x, sizeof(v))
#define sz(v) (int)(v).size()
#define trav(x, v) for(auto& x : v)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3fLL
#define MOD 1000000007LL
#define EPS 1e-9
#define debug(x) cerr << #x << " = " << x << endl;

template<class T, class U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
    os << "(" << p.fi << "," << p.se << ")";
    return os;
}

template<class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "{";
    for (int i = 0; i < sz(v); ++i) {
        if (i != 0) os << ",";
        os << v[i];
    }
    os << "}";
    return os;
}

template<class T>
ostream& operator<<(ostream& os, const set<T>& v) {
    os << "[";
    for (const auto& i : v) os << i << ",";
    os << "]";
    return os;
}

template<class T, class U>
ostream& operator<<(ostream& os, const map<T, U>& v) {
    os << "[";
    for (const auto& i : v) os << i << ",";
    os << "]";
    return os;
}

template<class T, class U>
ostream& operator<<(ostream& os, const unordered_map<T, U>& v) {
    os << "[";
    for (const auto& i : v) os << i << ",";
    os << "]";
    return os;
}

template<class T>
void pr(T x) {
    cout << x;
}

template<class T>
void prln(T x) {
    cout << x << endl;
}

template<class T, class... U>
void pr(T t, U... u) {
    cout << t << " ";
    pr(u...);
}

template<class T, class... U>
void prln(T t, U... u) {
    cout << t << " ";
    prln(u...);
}

#define TRACE

#ifdef TRACE
template<typename Arg1>
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " : " << arg1 << endl;
}

template<typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...)
#endif

class Main {
public:
    void run() {
        while (true) {
            int W, H;
            cin >> W >> H;
            if (W == 0 && H == 0) return;
            vector<vector<char>> map(H, vector<char>(W));

            for (int h = 0; h < H; h++) {
                for (int w = 0; w < W; w++) {
                    cin >> map[h][w];
                }
            }

            vector<vector<ll>> dp(H, vector<ll>(W));

            for (int h = 0; h < H; h++) {
                for (int w = 0; w < W; w++) {
                    ll hprev = 0;
                    if (h >= 1) {
                        hprev = dp[h - 1][w];
                    }
                    ll wprev = 0;
                    if (w >= 1) {
                        wprev = dp[h][w - 1];
                    }
                    if (isdigit(map[h][w])) {
                        ll mx;
                        if (hprev > wprev) {
                            mx = hprev;
                        } else {
                            mx = wprev;
                        }
                        dp[h][w] = mx * 10 + (map[h][w] - '0');
                    } else {
                        dp[h][w] = 0;
                    }
                }
            }
            ll mx = 0;
            for (int h = 0; h < H; h++) {
                for (int w = 0; w < W; w++) {
                    mx = max(mx, dp[h][w]);
                }
            }
            cout << mx << endl;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Main obj;
    obj.run();
    return 0;
}

// End of code.