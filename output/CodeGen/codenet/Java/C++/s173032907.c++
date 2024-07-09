#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <cctype>
#include <string>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <functional>
#include <bitset>
#include <deque>
#include <complex>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cctype>
#include <ctime>

using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug.

#if DEBUG
#define D(x) cout << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define REP(i, a, b) for (int i = int(a); i < int(b); i++)
#define REPD(i, a, b) for (int i = int(a); i > int(b); i--)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define MINUPDATE(A,B) A = min((A), (B));
#define MAXUPDATE(A,B) A = max((A), (B));
#define SGN(X) ((X)? ( (X)>0?1:-1 ) : 0)
#define CONTAINS(S,E) ((S).find(E)!= (S).end())
#define SZ(x) ((int) (x).size())

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef vector<PII> VII;
typedef vector<int> VI;
// typedef vector<vector<int> > VVI;
typedef vector<bool> VB;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef vector<PII> VPII;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<ll,ll> PLL;
typedef vector<PLL> VPLL;
typedef pair<double,double> PDD;
typedef vector<PDD> VPDD;
typedef pair<double,int> PID;
typedef vector<PID> VPID;
typedef vector<string> VSTR;
typedef set<int> SI;
typedef map<int,int> MII;
typedef map<string,int> MSI;
typedef map<int,SI> MISI;
typedef pair<int,SI> PISI;
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define fill(x, y) memset(x, y, sizeof(y))
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define len(x) ((x).size())
#define max(a,b) (a < b? b : a)
#define min(a,b) (a > b? b : a)
#define max(a,b) (a > b? b : a)
#define min(a,b) (a < b? b : a)
#define sq(a) a * a
#define sqrt(a) sqrt(a)
#define pow(a,b) pow(a,b)
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a
#define pll(a) a * a