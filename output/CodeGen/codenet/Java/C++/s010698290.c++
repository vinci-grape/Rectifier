#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <memory>
#include <functional>
#include <bitset>
#include <deque>
#include <complex>
#include <functional>
#include <valarray>
#include <utility>
#include <cassert>
#include <ctime>
#include <cstdlib>
#include <stdint.h>

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
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,a) for(int i=0;i<a;i++)
#define REPD(i,a) for(int i=a-1;i>=0;i--)
#define FORIT(i,a) for(__typeof(a.begin()) i=a.begin();i!=a.end();i++)
#define ALL(a) (a).begin(),(a).end()
#define MSG(a) cerr << #a << " == " << a << endl;
#define MSG2(a,b) cerr << #a << " == " << a << ", " << #b << " == " << b << endl;
#define MSG3(a,b,c) cerr << #a << " == " << a << ", " << #b << " == " << b << ", " << #c << " == " << c << endl;
#define MSG4(a,b,c,d) cerr << #a << " == " << a << ", " << #b << " == " << b << ", " << #c << " == " << c << ", " << #d << " == " << d << endl;
#define MSG5(a,b,c,d,e) cerr << #a << " == " << a << ", " << #b << " == " << b << ", " << #c << " == " << c << ", " << #d << " == " << d << ", " << #e << " == " << e << endl;
#define MSG6(a,b,c,d,e,f) cerr << #a << " == " << a << ", " << #b << " == " << b << ", " << #c << " == " << c << ", " << #d << " == " << d << ", " << #e << " == " << e << ", " << #f << " == " << f << endl;
#define MSG7(a,b,c,d,e,f,g) cerr << #a << " == " << a << ", " << #b << " == " << b << ", " << #c << " == " << c << ", " << #d << " == " << d << ", " << #e << " == " << e << ", " << #f << " == " << f << ", " << #g << " == " << g << endl;
#define MSG8(a,b,c,d,e,f,g,h) cerr << #a << " == " << a << ", " << #b << " == " << b << ", " << #c << " == " << c << ", " << #d << " == " << d << ", " << #e << " == " << e << ", " << #f << " == " << f << ", " << #g << " == " << g << ", " << #h << " == " << h << endl;

typedef long long ll;
typedef double db;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define MAXN 100010

int n, m;
int a[MAXN], b[MAXN];

int main() {
  scanf("%d %d", &n, &m);
  REP(i, n) scanf("%d", a+i);
  REP(i, m) scanf("%d", b+i);
  sort(