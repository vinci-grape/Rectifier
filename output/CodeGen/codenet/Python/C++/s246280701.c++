#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <ctime>

using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<ll, pair<ll,ll> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define SZ(a) ((int)(a).size())
#define ALL(a) (a).begin(),(a).end()
#define REVALL(a) (a).rbegin(),(a).rend()
#define COUNT(a) (sizeof(a)/sizeof(a[0]))
#define FAST_IOSTREAMS
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define FORI(i,a,b) for(ll i = (ll)(a); i < (ll)(b); ++i)
#define FORJ(i,a,b) for(int i = (a); i <= (b); ++i)
#define FORK(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); ++i)
#define LENGTH(a) ((int)(a).size())
#define ULL unsigned long long
#define LL long long
#define LD long double
#define ULL unsigned long long
#define LL long long
#define LD long double
#define MAX 100100
#define EPS 1e-9
#define INF 1000000000000000
#define PI acos(-1.0)
#define MAX 100
#define MAXN 100000
#define MIN -100000000
#define NMAX 5000000
#define NMAX2 100000
#define MOD 1000000007
#define MAX_N 100001
#define MAX_LOG NMAX
#define MIN_LOG 10
#define MAX_LOG_NMAX 20
#define MIN_LOG_NMAX 10
#define NMAX_LOG 100
#define NMAX_LOG2 10
#define MAX_LOG2 MAX_LOG
#define MIN_LOG2 MIN_LOG
#define MAX_LOG2_NMAX MAX_LOG
#define MIN_LOG2_NMAX MIN_LOG
#define NMAX_LOG2_NMAX NMAX_LOG
#define MAX_LOG_NMAX MAX_LOG
#define MIN_LOG_NMAX MIN_LOG
#define MAX_LOG_NMAX_NMAX MAX_LOG_NMAX
#define MIN_LOG_NMAX_NMAX MIN_LOG_NMAX
#define NMAX_LOG_NMAX_NMAX NMAX_LOG_NMAX
#define MAX_LOG_NMAX_NMAX MAX_LOG_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX MIN_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX
#define MAX_LOG_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_NMAX_N