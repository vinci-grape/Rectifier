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

#define IOS std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define REP(i, a, n) for (int i = a; i < n; ++i)
#define RREP(i, a, n) for (int i = n - 1; i >= a; --i)
#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(), (a).end()
#define SZ(a) ((int)(a).size())
#define CAST(a) a
#define SORT(x) sort(ALL(x))
#define UNIQUE(x) SORT(x), (x).erase(unique(ALL(x)), (x).end())
#define IN(a, b) ((b).find(a)!= (b).end())
#define REV(a) reverse(a.begin(), a.end())
#define CL(a, b) memset(a, b, sizeof(a))
#define CL2d(a, b, c) memset(a, b, sizeof(a[0][0]) * c)
#define CL3d(a, b, c, d) memset(a, b, sizeof(a[0][0][0]) * c * d)
#define CL4d(a, b, c, d, e) memset(a, b, sizeof(a[0][0][0][0]) * c * d * e)
#define CL5d(a, b, c, d, e, f) memset(a, b, sizeof(a[0][0][0][0][0]) * c * d * e * f)
#define CL6d(a, b, c, d, e, f, g) memset(a, b, sizeof(a[0][0][0][0][0][0]) * c * d * e * f * g)
#define CL7d(a, b, c, d, e, f, g, h) memset(a, b, sizeof(a[0][0][0][0][0][0][0]) * c * d * e * f * g * h)
#define CL8d(a, b, c, d, e, f, g, h, i) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i)
#define CL9d(a, b, c, d, e, f, g, h, i, j) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j)
#define CL10d(a, b, c, d, e, f, g, h, i, j, k) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j * k)
#define CL11d(a, b, c, d, e, f, g, h, i, j, k, l) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j * k * l)
#define CL12d(a, b, c, d, e, f, g, h, i, j, k, l, m) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j * k * l * m)
#define CL13d(a, b, c, d, e, f, g, h, i, j, k, l, m, n) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j * k * l * m * n)
#define CL14d(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j * k * l * m * n * o)
#define CL15d(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j * k * l * m * n * o * p)
#define CL16d(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q) memset(a, b, sizeof(a[0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0]) * c * d * e * f * g * h * i * j * k * l * m * n * o * p * q)
#define CL17d(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r) memset(a, b, sizeof(a[0][0][0][0