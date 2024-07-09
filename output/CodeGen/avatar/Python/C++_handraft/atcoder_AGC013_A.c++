#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cassert>
#include <functional>
#include <numeric>
#include <utility>
using namespace std;

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<PII> VII;
typedef vector<int> VI;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define UNIQUE(c) sort(ALL(c)), c.erase(unique(ALL(c)), c.end())

const int dr[4] = {-1, 0, 1, 0};
const int dc[4] = {0, 1, 0, -1};

int main() {
  int T; cin >> T;
  VI a(T);
  REP(i, T) cin >> a[i];
  int ans = 0;
  REP(i, T) {
    int j = i + 1;
    while (j < T && a[j] - a[i] == 1) j++;
    ans += j - i - 1;
    i = j - 1;
  }
  cout << ans << endl;
}