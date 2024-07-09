#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <stdexcept>
#include <climits>
#include <cctype>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REP1(i, n) for(int i = 1; i < (n); ++i)
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
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

typedef struct {
    int x, y;
} point;

#define EPS 1e-9
#define INF 0x3f3f3f3f

#define N 100010

int n, m;
int a[N], b[N];
int dp[N][2];

int main() {
    scanf("%d%d", &n, &m);
    REP(i, n) scanf("%d", a+i);
    REP(i, m) scanf("%d", b+i);
    REP(i, n) dp[i][0] = dp[i][1] = INF;
    REP(i, m) {
        int x = a[i], y = b[i];
        if(x > y) swap(x, y);
        dp[x][0] = min(dp[x][0], y);
        dp[x][1] = max(dp[x][1], y);
    }
    int ans = INF;
    REP(i, n) {
        ans = min(ans, dp[i][0]);
        ans = min(ans, dp[i][1]);
    }
    printf("%d\n", ans);
    return 0;
}