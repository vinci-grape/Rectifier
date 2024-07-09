#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
using namespace std;

#define INF 1000000000
#define MOD 1000000007
#define LL long long
#define pb push_back
#define mp make_pair
#define debug(x) cout << #x << " = " << x << endl
#define debugln(x) cout << #x << " = " << x << endl << endl
#define debugv(x) cout << #x << " = "; for (int ii = 0; ii < x.size(); ii++) cout << " " << x[ii]; cout << endl
#define debugvln(x) cout << #x << " = "; for (int ii = 0; ii < x.size(); ii++) cout << " " << x[ii]; cout << endl << endl

#define FOR(i, a, b) for (int i = int(a); i < int(b); i++)
#define FOR0(i, b) for (int i = 0; i < int(b); i++)
#define FORD(i, a, b) for (int i = int(a); i >= int(b); i--)
#define FORD0(i, b) for (int i = int(b) - 1; i >= 0; i--)

#define REP(i, n) for (int i = 0; i < int(n); i++)
#define REP0(i, n) for (int i = 0; i < int(n); i++)
#define REPD(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define REPD0(i, n) for (int i = int(n) - 1; i >= 0; i--)

#define ALL(a) a