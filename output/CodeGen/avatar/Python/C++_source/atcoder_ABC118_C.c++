#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <set>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cassert>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define LL long long
#define ULL unsigned long long
#define PI acos(-1)
#define mk make_pair
#define pii pair<int,int>
#define pll pair<LL,LL>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<LL, pair<LL, LL> >
#define pddd pair<double, pair<double, double> >
#define ff first
#define ss second
#define FOR(i,n) for(int i=0; i<(n); ++i)
#define REP(i,a,b) for(int i=a; i<(b); ++i)
#define ALL(c) (c).begin(),(c).end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define UNIQUE(c) sort(ALL(c)), c.erase(unique(ALL(c)), c.end())

typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef long double LD;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
typedef pair<LL, LL>PLL;
typedef pair<LL,PLL>PLLLL;
typedef pair<PLL, LL>PLLLL;
typedef pair<LL,PLL>PLLPLL;

const double EPS = 10e-9;
const double INF = ( 1LL << 30 );
const int INF = INT_MAX;
const LL LINF = ( 1LL << 60 );
const int MAX_N = 1000000 + 10;

template<class T> inline void checkmin(T &a, T b) { if (b < a) a = b; }
template<class T> inline void checkmax(T &a, T b) { if (a < b) a = b; }

template<class T> inline T sqr(T x) { return x * x; }

template<class T> inline T gcd(T a, T b) {
    while (b) { T t = a; a = b; b = t % b; }
    return a;
}

template<class T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }

template<class T> inline T qpow(T a, T b) { T r = 1; while (b) { if (b & 1) r *= a; a *= a; b >>= 1; } return r; }

template<class T> inline T qpom(T a, T b, T mod = INF) { T r = 1; while (b) { if (b & 1) r = r * a % mod; a = a * a % mod; b >>= 1; } return r; }

template<class T> inline T qpi(T a, T b) { T r = 1; while (b) { if (b & 1) r = r * a; a = a * a; b >>= 1; } return r; }

template<class T> inline T qpinv(T a, T b) { T s = 0, t = 1, r = qpow(a, b - 2); while (b) { if (b & 1) s = s + t, t = t * a, b >>= 1; } return s; }

template<class T> inline T qpdiv(T a, T b) { T q = qpom(a, b); return q / b; }

template<class T> inline T qpmul(T a, T b) { T r = 1; while (b) { if (b & 1) r = r * a; a = a * a; b >>= 1; } return r; }

template<class T> inline T qpsub(T a, T b) { T r = 0; while (b) { if (b & 1) r = r + a, b >>= 1; } return r; }

template<class T> inline T qpadd(T a, T b) { T r = 0; while (b) { if (b & 1) r = r + a, b >>= 1; } return r; }

template<class T> inline T qpalpha(T a, T b) { T r = 1; while (b) { if (b & 1) r = r * a; a = a * a; b >>= 1; } return r; }

template<class T> inline T qpmin(T a, T b) { return a < b? a : b; }

template<class T> inline T qpmax(T a, T b) { return a > b? a : b; }

template<class T> inline T qpabs(T a) { return (a < 0? -a : a); }

template<class T> inline T qplog(T a) { T r = 0; while (a) { r = r + log(a); a = a / 2; } return r; }

template<class T> inline T qpsqrt(T a) { T r = 0; while (a) { r = r + sqrt(a); a = a / 2; } return r; }

template<class T> inline T qpfmod(T a, T b) { T r = 0; while (b) { if (b & 1) r = r + a, b >>= 1; a = a * a; } return r; }

template<class T> inline T qpfmod(T a, T b, T mod) { T r = 0; while (b) { if (b & 1) r = r + a, b >>= 1; a = a * a % mod; } return r; }

template<class T> inline T qpfmod(T a, T b, T mod, T &r) { T s = 0, t = 1, u = 0; while (b) { if (b & 1) { s = s + t, u = u + t * a, t = t * a, b >>= 1; } else { s = s + t, u = u + t * a, t = t * a, b >>= 1; } a = a * a % mod; } r = u; return s; }

template<class T> inline T qpfmod(T a, T b, T mod, T &r, T &s) { T t = 1, u = 0; while (b) { if (b & 1) { t = t * a % mod; s = s + t, u = u + t, b >>= 1; } else { t = t * a % mod; s = s + t, u = u + t, b >>= 1; } a = a * a % mod; } r = u; return s; }

template<class T> inline T qpfmod(T a, T b, T mod, T &r, T &s, T &t) { T u = 0; while (b) { if (b & 1) { u = u + t, t = t * a % mod, b >>= 1; } else { u = u + t, t = t * a % mod, b >>= 1; } a = a * a % mod; } r = u; return s; }

template<class T> inline T qpfmod(T a, T b, T