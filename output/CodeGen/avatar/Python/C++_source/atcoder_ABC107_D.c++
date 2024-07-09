#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <cctype>
using namespace std;

#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(c) (c).begin(),(c).end()
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(int i=0,i##e=sz(m);i<i##e;++i)
#define forj(j,n) for(int j=0,j##e=n;j<j##e;++j)
#define fork(k,n) for(int k=0,k##e=n;k<k##e;++k)
#define forl(l,n) for(int l=0,l##e=n;l<l##e;++l)
#define fors(s,n) for(auto s=n.begin(),s##e=n.end();s!=s##e;++s)
#define forr(r,n) for(auto r=n.rbegin(),r##e=n.rend();r!=r##e;++r)
#define INF 1000000000
#define EPS 1e-9
#define INF 100000000
#define EPS 1e-6
#define PI acos(-1.0)
#define MAX 100000000
#define MIN 0
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return x.size(); }
template <class T> T mod(T x,T y) { T r = x % y; return r < 0? y + r : r; }
template <class T> T power(T x,T y) { T r = 1; for (; y; y >>= 1, x = x * x) { if (y & 1) r = r * x; } return r; }
template <class T> T aPow(T x,T y) { T r = 1; for (; y; y >>= 1, x = x * x) { if (y & 1) r = r * x; } return r; }
template <class T> T gcd(T x,T y) { if (!y) return x; return gcd(y,x % y); }
template <class T> T lcm(T x,T y) { return x / gcd(x,y) * y; }
template <class T> T maxt(T x,T y) { return x > y? x : y; }
template <class T> T mint(T x,T y) { return x < y? x : y; }
template <class T> T powermod(T x,T y,T z) { T r = 1; for (; y; y >>= 1, x = (x * x) % z) { if (y & 1) r = (r * x) % z; } return r; }
template <class T> T inverse(T x) { T r = powermod(x,mod(x,power(2,sizeof(T) * 8)) - 1,power(2,sizeof(T) * 8)); return r; }
template <class T> T pinv(T x) { T r = power(x,mod(power(2,sizeof(T) * 8) - 2,power(2,sizeof(T) * 8)) - 1); return r; }
template <class T> T cofact(T x,T y) { T r = 1; for (; x; x >>= 1) { if (x & 1) { r = r * y; r %= power(2,sizeof(T) * 8); } y = y * y % power(2,sizeof(T) * 8); } return r; }
template <class T> T gcdext(T x,T y,T &d,T &x1,T &y1) { T z,q,r,s,t,u,v,w,a,b,c,d1; d = 1; if (!y) { x1 = 1; y1 = 0; return x; } r = x % y; x /= y; a = inverse(r); d1 = power(a,mod(power(2,sizeof(T) * 8) - 1,power(2,sizeof(T) * 8))); z = cofact(a,d1); q = d1 * inverse(z); r = powermod(r,z,power(2,sizeof(T) * 8)); s = powermod(a,z,power(2,sizeof(T) * 8)); t = powermod(x,z,power(2,sizeof(T) * 8)); u = powermod(y,z,power(2,sizeof(T) * 8)); v = powermod(a,d1,power(2,sizeof(T) * 8)); w = powermod(q,d1,power(2,sizeof(T) * 8)); x1 = t * w % power(2,sizeof(T) * 8); y1 = u * w % power(2,sizeof(T) * 8); d = z * w % power(2,sizeof(T) * 8); return r; }
template <class T> T exteuclid(T x,T y,T &x1,T &y1,T &x2,T &y2) { T q,r,s,t,u,v,w,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q1,r1,s1