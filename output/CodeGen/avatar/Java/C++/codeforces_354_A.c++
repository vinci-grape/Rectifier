#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
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
#include <cassert>
using namespace std;

typedef long long ll;
typedef double lf;
typedef pair<ll,ll> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return x.size(); }

#define REP(i,n) for(i=0;i<(n);i++)
#define REP1(i,n) for(i=1;i<=(n);i++)
#define FILL(i,n) memset(i,n,sizeof i)
#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(),(x).end()
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define MOD 1000000007
#define INF 1000000007
#define EPS 1e-9
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007  //10e5
#define MAXN 10000007  //10e5
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAXS 10000007
#define MAXLG 16
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 10000007