#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <ctype.h>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <tuple>
#include <iterator>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cctype>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define LL long long
#define ULL unsigned long long
#define PI acos(-1.0)
#define EPS 1e-9
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,a) for(int i=0;i<a;++i)
#define REPD(i,a) for(int i=a;i>0;--i)
#define FORIT(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define ALL(a) (a).begin(),(a).end()
#define MSG(a) cerr << #a << " == " << (a) << endl;
#define X first
#define Y second
#define PB push_back
#define UNIQUE(a) sort(ALL(a)),(a).erase(unique(ALL(a)),(a).end())
#define SZ size()
#define MAXN 100100
#define EPS 1e-9
#define INF 10000000000000007
typedef pair<int,int> PII;
typedef vector<PII> VII;
typedef vector<int> VI;
//typedef vector<bool> VB;
typedef long long LL;
typedef vector<LL> VLL;
typedef pair<LL,LL> PLL;
typedef vector<PLL> VPLL;
typedef pair<double,double> PDD;
typedef vector<PDD> VPDD;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef pair<LL, LL> PLLLL;
typedef vector<PLLLL> VPLLLL;
typedef