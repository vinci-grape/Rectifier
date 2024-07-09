#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(m.find(a)!= m.end()) {
      m[a]++;
    } else {
      m[a] = 1;
    }
  }
  int ans = 0;
  for(auto it : m) {
    if((it.second % 2) == 1) ans++;
  }
  cout << ans << endl;
  return 0;
}