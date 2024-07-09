#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cassert>
#include <iomanip>
#include <random>
#include <chrono>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int dir[4][2] = { -1, 0, 1, 0, 0, -1, 0, 1 };
struct InputReader {
    const int BUF_SIZE = 1 << 16;
    char buf[BUF_SIZE];
    char *p = buf + BUF_SIZE;
    char *end = buf + BUF_SIZE;