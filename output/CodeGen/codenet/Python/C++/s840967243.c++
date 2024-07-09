#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
using namespace std;

#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define forn(i, n) for (int i = 0; i < (n); i++)
#define forin(i, n) for (int i = 0; i < n; i++)
#define forimn(i, m, n) for (int i = (m); i < (n); i++)
#define formn(m, n) for (int m = 0; m < (n); m++)
#define forr(i, n) for (int i = (n)-1; i >= 0; i--)
#define forrr(i, n, r) for (int i = (n)-1; i >= (r); i--)
#define INF 100000000
#define MOD 1000000007
#define PB push_back
#define MAXN 100005
#define MAXM 100005
#define MAXS 100005
#define MAXLEN 100005
#define MAXLG 100005
#define EPS 1e-9
#define PI acos(-1.0)
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef pair<double,double> dd;
typedef vector<dd> vdd;
typedef pair<ll,ll> llll;
typedef vector<llll> vllll;
typedef vector<string> vs;
typedef double ld;
typedef vector<ld> vld;
typedef pair<bool,int> bi;
typedef vector<bi> vbi;
typedef pair<ld,ld> ldld;
typedef vector<ldld> vldld;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vs,vs> vvs;
typedef vector<vvs> vvvvs;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld;
typedef pair<vllll,vllll> vvllll;
typedef vector<vvllll> vvvllll;
typedef pair<vi,vi> vvi;
typedef vector<vvi> vvvvi;
typedef pair<vii,vii> vvii;
typedef vector<vvii> vvvii;
typedef pair<vii,vii> vvii;
typedef vector<vii> vvii;
typedef pair<vld,vld> vvld;
typedef vector<vld> vvvld