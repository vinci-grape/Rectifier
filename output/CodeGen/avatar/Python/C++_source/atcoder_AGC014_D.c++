#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <iostream>
#include <sstream>
#include <iterator>
#include <cassert>
#include <cmath>

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<int,PII> CPI;
typedef pair<PII,int> PPI;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(c) c.begin(),c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define UNIQUE(c) sort(ALL(c)), c.erase(unique(ALL(c)), c.end())

const int INF = 100000000;
const LL INFLL = 1000000000000000005;
const double PI = acos(-1);

int n, m;
int a[1005][1005];
int par[1005][1005];
int child[1005][1005];
int seen[1005][1005];
int child_num[1005];
int seq[1005];

void dfs(int v) {
  seen[v][0] = 1;
  for (int i = 1; i <= n; i++) {
    if (a[v][i] &&!seen[i][0]) {
      child_num[v]++;
      dfs(i);
    }
  }
}

int main() {
  while (cin >> n >> m) {
    REP(i,n) REP(j,n) cin >> a[i][j];
    REP(i,n) REP(j,n) par[i][j] = 0;
    REP(i,n) REP(j,n) child[i][j] = 0;
    REP(i,n) REP(j,n) seen[i][j] = 0;
    REP(i,n) child_num[i] = 0;
    REP(i,n) seq[i] = 0;
    REP(i,n) dfs(i);
    REP(i,n) REP(j,n) if (par[i][j] && child_num[i] == child_num[j]) {
      seq[i] = 1;
      seq[j] = 1;
    }
    REP(i,n) REP(j,n) if (par[i][j] && child_num[i] > child_num[j]) {
      seq[i] = 1;
      seq[j] = 0;
    }
    REP(i,n) REP(j,n) if (par[i][j] && child_num[i] < child_num[j]) {
      seq[i] = 0;
      seq[j] = 1;
    }
    REP(i,n) REP(j,n) if (par[i][j] && child_num[i] == child_num[j]) {
      seq[i] = 0;
      seq[j] = 0;
    }
    REP(i,n) REP(j,n) if (par[i][j] && seq[i] && seq[j]) {
      cout << "First" << endl;
      exit(0);
    }
    REP(i,n) REP(j,n) if (par[i][j] && seq[i] &&!seq[j]) {
      cout << "Second" << endl;
      exit(0);
    }
  }
  return 0;
}