#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <iomanip>
#include <map>
#include <set>
#include <stack>
#include <bitset>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <iterator>
#include <type_traits>
#include <array>
#include <complex>
#include <optional>
#include <tuple>
#include <variant>
#include <string>
#include <sstream>
using namespace std;

constexpr int MOD = 1000000007;
constexpr double EPS = 1e-8;
constexpr double PI = acos(-1.0);
constexpr int INF = 0x3f3f3f3f;

template<typename T>
using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

template<typename T>
using max_priority_queue = priority_queue<T, vector<T>, less<T>>;

#define REP(i, n) for(int i = 0; i < (n); ++i)
#define REPR(i, n) for(int i = (n)-1; i >= 0; --i)
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define FORR(i, a, b) for(int i = (b)-1; i >= (a); --i)
#define FOREACH(x, a) for(auto& x : a)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define SZ(x) ((int)(x).size())
#define MP make_pair
#define PB push_back
#define MT make_tuple
#define FST first
#define SND second
#define BIT(x, i) (((x) >> (i)) & 1)

using LL = long long;
using LD = long double;
using VI = vector<int>;
using VVI = vector<VI>;
using VS = vector<string>;
using PI = pair<int, int>;
using TI = tuple<int, int, int>;
using VPI = vector<PI>;
using VTI = vector<TI>;
using VL = vector<LL>;
using VVL = vector<VL>;
using VLD = vector<LD>;
using VVLD = vector<VLD>;
using VD = vector<LD>;

template<typename T>
void print(T x) {
    cout << x << endl;
}

template<typename T>
void print(vector<T>& v) {
    REP(i, SZ(v)) {
        cout << v[i] << " \n"[i == SZ(v) - 1];
    }
}

template<typename T>
void print(vector<vector<T>>& vv) {
    REP(i, SZ(vv)) {
        REP(j, SZ(vv[i])) {
            cout << vv[i][j] << " \n"[j == SZ(vv[i]) - 1];
        }
    }
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(a * c, max(b * d, max(a * d, b * c))) << endl;
    return 0;
}