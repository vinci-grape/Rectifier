#include <iostream>
#define rep(S, L) for (int i = S; i < L; ++i)
using namespace std;

int main() {
  int n, m;
  int k, a;
  int x[31] = {};
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    cin >> k;
    for (int j = 0; j < k; ++j) {
      cin >> a;
      x[a]++;
    }
  }
  int ans = 0;
  for (int i = 1; i <= m; ++i) {
    if (x[i] == n) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}