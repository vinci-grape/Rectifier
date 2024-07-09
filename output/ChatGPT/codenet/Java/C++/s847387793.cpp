#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <climits>
#include <iomanip>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <bitset>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <cassert>

using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
#define repr(i, n) for (int i = (n)-1; i >= 0; --i)
#define repr1(i, n) for (int i = (n); i >= 1; --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fst first
#define snd second
using ll = long long;
using P = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
template <typename T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template <typename T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
  int n = v.size();
  rep(i, n) {
    os << v[i];
    if (i != n - 1)
      os << " ";
  }
  return os;
}
template <typename T> istream &operator>>(istream &is, vector<T> &v) {
  for (T &in : v)
    is >> in;
  return is;
}

int n, m, q;
int max_score = 0;
vi a, b, c, d;

void dfs(vi &array) {
  if (sz(array) > n) {
    int score = 0;
    rep(i, q) {
      if (array[b[i]] - array[a[i]] == c[i]) {
        score += d[i];
      }
    }
    chmax(max_score, score);
    return;
  }

  // Append an item to the existing array
  vi new_array = array;
  new_array.pb(array.back());

  while (new_array.back() <= m) {
    dfs(new_array);
    new_array.back() += 1;
  }
}

void solve() {
  cin >> n >> m >> q;
  a.resize(q);
  b.resize(q);
  c.resize(q);
  d.resize(q);
  rep(i, q) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  dfs(vi{1});
  cout << max_score << endl;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}