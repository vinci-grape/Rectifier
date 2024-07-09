#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cassert>
#include <vector>
#include <sstream>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <map>
#include <deque>
#include <functional>
#include <bitset>
#include <utility>
#include <numeric>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

#define DEBUG

#ifdef DEBUG
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#else
#define MAX(a,b) ((a)>(b)?(b):(a))
#define MIN(a,b) ((a)<(b)?(b):(a))
#endif

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORN(i,N) for(int i=0;i<N;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define FORIT(i,s) for(__typeof((s).begin()) i=(s).begin();i!=(s).end();i++)
#define ALL(A) (A).begin(),(A).end()
#define REVALL(A) (A).rbegin(),(A).rend()
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define MINUPDATE(A,B) A = MIN(A,B)
#define MAXUPDATE(A,B) A = MAX(A,B)
#define SGN(X) ((X)? ( (X)>0?1:-1 ) : 0)
#define CONTAINS(S,E) ((S).find(E)!= (S).end())
#define SZ(x) ((int) (x).size())

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef tuple<int,int,int> TII;
typedef tuple<int,int,int,int> TIII;
typedef tuple<int,int,int,int,int> TIIII;

#define SETCONTAINS(S,E) S.insert(E).second
#define SSZ(x) ((int) (x).size())
#define MSZ(x) ((int) (x).size())
#define MSZ2(x) ((int) (x).size())
#define MSZ3(x) ((int) (x).size())
#define MSZ4(x) ((int) (x).size())
#define MSZ5(x) ((int) (x).size())
#define MSZ6(x) ((int) (x).size())

#define PI acos(-1.0)
#define INF 10000000000000007
#define INFLL 1000000000000000000LL
#define EPS 1e-9
#define MAX_N 100001

int main() {
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int max = 0;
    for(int i=0;i<n;i++)
        max = MAX(max,a[i]);
    cout << max << endl;
    return 0;
}