#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <set>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <functional>
#include <utility>
#include <sstream>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sqr(x) ((x)*(x))
#define FOR(i,n) for(int i=0; i<(n); ++i)
#define FOR2(i,n,m) for(int i=(n); i<=(m); ++i)
#define FOR3(i,n,m) for(int i=(n); i>=(m); --i)
#define get(a) cin >> a
#define pri(a) cout << a
#define prin cout << endl
#define pris cout << " "
#define SORT(x) sort(x.begin(), x.end())
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define forn(i, n) for(int i = 0; i < (n); i++)
#define forin(i, n) for(int i = 0; i <= (n); i++)
#define forimn(i, m, n) for(int i = (m); i <= (n); i++)
#define formn(m, n) for(int m = 0; m < (n); m++)
#define forr(i, n) for(int i = (n); i >= 0; i--)
#define forcr(i, n) for(int i = (n); i >= 0; i--)
#define forri(i, r, n) for(int i = (r); i >= (n); i--)
#define forci(i, c, n) for(int i = (c); i >= (n); i--)
#define forni(i, n) for(int i = (n); i >= 0; i--)
#define rfor(i, n) for(int i = (n); i >= 1; i--)
#define rforr(i, n) for(int i = (n); i >= (n - 1); i--)
#define rfori(i, r, n) for(int i = (r); i >= (n - 1); i--)
#define rforcr(i, n) for(int i = (n); i >= (n - 1); i--)
#define rforci(i, c, n) for(int i = (c); i >= (n - 1); i--)
#define rforn(i, n) for(int i = (n); i >= 1; i--)
#define crfor(i, n) for(int i = (n); i >= 0; i--)
#define crforr(i, n) for(int i = (n); i >= (n - 1); i--)
#define crfori(i, r, n) for(int i = (r); i >= (n - 1); i--)
#define crforcr(i, n) for(int i = (n); i >= (n - 1); i--)
#define crforci(i, c, n) for(int i = (c); i >= (n - 1); i--)
#define crforn(i, n) for(int i = (n); i >= 0; i--)
#define forrr(i, n) for(int i = 0; i < (n); i++)
#define forrrr(i, n, m) for(int i = (n); i <= (m); i++)
#define forrrci(i, r, n, c) for(int i = (r); i <= (n); i++)
#define forrrcr(i, r, n, c) for(int i = (r); i <= (c); i++)
#define forrrni(i, r, n, i1) for(int i = (r); i <= (n); i += (i1))
#define forrrcii(i, r, n, c, i1) for(int i = (r); i <= (c); i += (i1))
#define forrrn(i, r, n) for(int i = (r); i < (n); i++)
#define forrrni(i, r, n, i1) for(int i = (r); i < (n); i += (i1))
#define forrrcii(i, r, n, c, i1) for(int i = (r); i < (c); i += (i1))
#define forrrncr(i, r, n, c, i1) for(int i = (r); i < (c); i += (i1))
#define forrrnci(i, r, n, i1, c) for(int i = (r); i < (n); i += (i1), c++)
#define forrrncrci(i, r, n, c, i1, c1) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrcii(i, r, n, c, i1, c1, i2) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciii(i, r, n, c, i1, c1, i2, i3) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciii1(i, r, n, c, i1, c1, i2, i3, i4) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciiid(i, r, n, c, i1, c1, i2, i3, i4, i5) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciiid1(i, r, n, c, i1, c1, i2, i3, i4, i5, i6) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciiid1d(i, r, n, c, i1, c1, i2, i3, i4, i5, i6, i7) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciiid1dd(i, r, n, c, i1, c1, i2, i3, i4, i5, i6, i7, i8) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciiid1ddd(i, r, n, c, i1, c1, i2, i3, i4, i5, i6, i7, i8, i9) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciiid1dddd(i, r, n, c, i1, c1, i2, i3, i4, i5, i6, i7, i8, i9, i10) for(int i = (r); i < (c1); i += (i1), c++)
#define forrrncrciiid1ddddd(i, r, n, c, i1, c1, i2, i3, i4, i5, i6, i7, i8, i9,