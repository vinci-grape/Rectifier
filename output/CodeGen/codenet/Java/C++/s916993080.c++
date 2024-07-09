#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <functional>
using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<double,double> PDD;
typedef pair<LL, LL>PLL;
typedef pair<LL,int>PLI;

#define DEBUG 0
#define debug(x) { if(DEBUG) cerr << #x << " = " << x << endl; }
#define debugv(x) { if(DEBUG) cerr << #x << " = "; for(int z = 0; z < (int)x.size(); z++) cerr << x[z] <<''; cerr << endl; }
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)
#define present(container, x) (binary_search(all(container), x))
#define cpresent(container, x) (binary_search(all(container), x) && it->second == x)
#define si(container, x) (lower_bound(all(container), x) - (container).begin())
#define ci(container, x) (lower_bound(all(container), x) - (container).begin())
#define lb(container, x) (lower_bound(all(container), x) - (container).begin())
#define ub(container, x) (upper_bound(all(container), x) - (container).begin())
#define eb(container, x) (upper_bound(all(container), x) - (container).begin())
#define sb(container, x) (upper_bound(all(container), x) - (container).begin())
#define fst(container) (*(container).begin())
#define snd(container) (*(container).begin() + (container).size() / 2)
#define scnd(container) (*(container).begin() + (container).size() / 2)
#define lst(container) (*(container).rbegin())
#define rst(container) (*(container).rbegin() + (container).size() / 2)
#define scnd(container) (*(container).rbegin() + (container).size() / 2)
#define abs(x) ((x) < 0? -(x) : (x))
#define REP(i,n) for(int i = 0; i < (n); i++)
#define REPR(i,n) for(int i = (n)-1; i >= 0; i--)
#define TEST(x) cerr << "test " << #x << " " << x << endl;
#define PRINT(x) cout << x << endl;
#define PRINTLN(x) cout << x << endl;
#define OUTPUT(x) cout << #x << " = " << x << endl;
#define OUTPUTLN(x) cout << #x << " = " << x << endl;
#define OUTPUT2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define OUTPUT2LN(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define INPUT(x) cin >> x;
#define INPUTLN(x) cin >> x;
#define INPUT2(x, y) cin >> x >> y;
#define INPUT2LN(x, y) cin >> x >> y;
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define FORR(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,n,1)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define MINUPDATE(a,b) a = min((a), (b));
#define MAXUPDATE(a,b) a = max((a), (b));
#define SGN(x) ((x)? ( (x)>0?1:-1 ) : 0)
#define CONTAINS(S,E) ((S).find(E)!= (S).end())
#define SZ(x) ((int) (x).size())
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define YN(b) cout << ((b)?"YES":"NO") << endl;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vectorbl;
typedef vector<int> vectori;
typedef vector<long long> vectorll;
typedef vector<ull> vectorull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll