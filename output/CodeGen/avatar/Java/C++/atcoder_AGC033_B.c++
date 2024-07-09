#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <sstream>
#include <stack>
#include <iterator>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <functional>
#include <utility>
#include <bitset>
#include <algorithm>
using namespace std;

#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define fi first
#define se second
#define LL long long
#define ULL unsigned long long
#define PI acos(-1)
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(x) cout << #x << " = "; for (int ii = 0; ii < (int)x.size(); ii++) cout << " " << x[ii]; cout << endl;
#define pb push_back
#define all(x) x.begin(), x.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe
#define forn(i, n) for (int i = 0; i < (int)n; i++)
#define forin(i, n) for (int i = (int)n; i >= 0; i--)
#define forjn(i, n) for (int i = 0; i + 1 < (int)n; i++)
#define forkn(i, n) for (int i = (int)n - 1; i >= 0; i--)
#define forlmn(i, m, n) for (int i = (int)m; i >= (int)m - (int)n; i--)
#define INF 1000000000000
#define INFLL 1000000000000000000LL
#define EPS 1e-9
#define PI acos(-1)
#define MOD 1000000007
#define MAXN 10000005
#define MAXLG 15
#define SQR(a) ((a) * (a))
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FORD(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define VAR(v, a) typename vector<v>::difference_type a
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define MINUPDATE(a, b) a = min((a), (b));
#define MAXUPDATE(a, b) a = max((a), (b));
#define SGN(a) ((a)? ( (a)>0?1:-1 ) : 0)
#define CONTAINS(S,E) ((S).find(E)!= (S).end())
#define REP(i,n) for (int i = 0; i < (int)(n); i++)
#define REPD(i,n) for (int i = (int)(n) - 1; i >= 0; i--)
#define REV(i,a) for (int i = (int)(a).size() - 1; i >= 0; i--)
#define FORIT(i,S) for (__typeof((S).begin()) i = (S).begin(); i!= (S).end(); i++)
#define ALL(A) (A).begin(), (A).end()
#define FOREACH(it, A) for (__typeof((A).begin()) it = (A).begin(); it!= (A).end(); it++)
#define ERASE(A, it) (A).erase(it);
#define UNIQUE(A) sort(ALL(A)), A.erase(unique(ALL(A)), A.end())
#define INIT_RANGE(A) __typeof(A.front()) __typeof(A.back()) _beg = (A).begin(), _end = (A).end()
#define FOR_RANGE(A, _beg, _end, op) for (__typeof(A.front()) _beg = (A).begin(), _end = __typeof(_beg) _end = (A).end(); _beg!= _end; _beg = (op)(_beg, (A).end()))
#define RFOR_RANGE(A, _beg, _end, op) for (__typeof(A.front()) _beg = (A).begin(), _end = __typeof(_beg) _end = (A).end(); _beg!= _end; _beg = (op)(_beg, (A).end()))
#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define MINUPDATE(a, b) a = min((a), (b));
#define MAXUPDATE(a, b) a = max((a), (b));
#define SGN(a) ((a)? ( (a)>0?1:-1 ) : 0)
#define CONTAINS(S,E) ((S).find(E)!= (S).end())
#define REP(i,n) for (int i = 0; i < (int)(n); i++)
#define REPD(i,n) for (int i = (int)(n) - 1; i >= 0; i--)
#define REV(i,a) for (int i = (int)(a).size() - 1; i >= 0; i--)
#define FORIT(i,S) for (__typeof((S).begin()) i = (S).begin(); i!= (S).end(); i++)
#define ALL(A) (A).begin(), (A).end()
#define FOREACH(it, A) for (__typeof((A).begin()) it = (A).begin(); it!= (A).end();