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
#include <cassert>
#include <ctype.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define MAXN 100005
#define LL long long
#define ULL unsigned long long
#define PI acos(-1.0)
#define EPS 1e-9
#define inf 0x7f7f7f7f
#define INF 0x7f7f7f7f7f7f7f7f
#define eps 1e-9
#define MAX 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005
#define MAXL 100005
#define MAXP 100005
#define MAXN 100005
#define MAXM 100005
#define MAXN 100005
#define MAXS 100005