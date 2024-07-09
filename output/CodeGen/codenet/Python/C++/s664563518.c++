#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <iomanip>
#include <memory.h>
#include <ctime>
#include <functional>
#include <bitset>
#include <utility>
#include <sstream>
#include <deque>
#include <cassert>
#include <utility>
#include <list>
#include <stdexcept>
#include <functional>
using namespace std;

#define mp make_pair
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define LL long long
#define ULL unsigned long long
#define PI acos(-1)
#define mk make_pair
#define pii pair<int,int>
#define pll pair<LL, LL>
#define pdd pair<double, double>
#define pff pair<float,float>
#define piii pair<LL, pair<LL, LL>>
#define pddd pair<double, pair<double, double>>
#define ff first
#define ss second
#define LB left
#define RB right
#define all(v) v.begin(),v.end()
#define REP(i,n) for(int i = 0; i < (n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define RFOR(i,b,a) for(int i = (b); i > (a); --i)
#define FORR(i,n) for(int i = (n); i >= 0; --i)
#define forn(i, n) for(int i = 0; i < (n); ++i)
#define INF 10000000000000007
#define EPS 1e-9
#define INF 10000000000000000
#define MAX 10000007
#define MAXN 10000007
#define MAXLG 18
#define read(a) a=getint()
#define print(a) printf("%d", a)
#define dbg(x) cout << (#x) << " = " << (x) << endl
#define error(x) (!(x)?puts("error"):0)
#define printarr2(a, b, c) for1(_, 1, b) { for1(__, 1, c) cout << a[_][__]; cout << endl; }
#define printarr1(a, b) for1(_, 1, b) cout << a[_] <<''; cout << endl
inline int getint() { int r=0, k=1; char c=getchar(); for(; c<'0'||c>'9'; c=getchar()) if(c=='-') k=-1; for(; c>='0'&&c<='9'; c=getchar()) r=r*10+c-'0'; return k*r; }
inline int getint2(int &x) { int r=0, k=1; char c=getchar(); for(; c<'0'||c>'9'; c=getchar()) if(c=='-') k=-1; for(; c>='0'&&c<='9'; c=getchar()) r=r*10+c-'0'; x=r; return k; }
inline int getint3(int &x) { int r=0, k=1; char c; for(c=getchar(); c<'0'||c>'9'; c=getchar()) if(c=='-') k=-1; for(; c>='0'&&c<='9'; c=getchar()) r=r*10+c-'0'; x=r; return k; }
inline void printint(int x) { if(x<0) putchar('-'); if(x>=10) { putchar('0'+x/10); putchar('0'+x%10); } else putchar('0'+x); }
inline void printint2(int x) { if(x<0) putchar('-'); if(x>=100000) { putchar('0'+x/100000); putchar('0'+(x/100000)%10); } if(x>=10000) { putchar('0'+x/10000); putchar('0'+(x/10000)%10); } if(x>=1000) { putchar('0'+x/1000); putchar('0'+(x/1000)%10); } if(x>=100) { putchar('0'+x/100); putchar('0'+(x/100)%10); } if(x>=10) { putchar('0'+x/10); putchar('0'+(x/10)%10); } putchar('0'+x%10); }
inline void printint3(int x) { if(x<0) putchar('-'); if(x>=100000) { putchar('0'+x/100000); putchar('0'+(x/100000)%10); } if(x>=10000) { putchar('0'+x/10000); putchar('0'+(x/10000)%10); } if(x>=1000) { putchar('0'+x/1000); putchar('0'+(x/1000)%10); } if(x>=100) { putchar('0'+x/100); putchar('0'+(x/100)%10); } if(x>=10) { putchar('0'+x/10); putchar('0'+(x/10)%10); } putchar('0'+x%10); }
inline int getint() { int r=0, k=1; char c=getchar(); for(; c<'0'||c>'9'; c=getchar()) if(c=='-') k=-1; for(; c>='0'&&c<='9'; c=getchar()) r=r*10+c-'0'; return k*r; }
inline int getint2(int &x) { int r=0, k=1; char c; for(c=getchar(); c<