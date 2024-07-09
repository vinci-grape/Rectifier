#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(mp.find(a) != mp.end()) {
      mp[a]++;
    } else {
      mp[a] = 1;
    }
  }
  int ans = 0;
  for(auto it : mp) {
    if((it.second % 2) == 1) ans++;
  }
  cout << ans << endl;
  return 0;
}