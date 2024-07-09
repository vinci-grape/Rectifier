#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> sdic;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (sdic.find(s) != sdic.end()) {
      sdic[s]++;
    } else {
      sdic[s] = 1;
    }
  }
  int ans = 0;
  for (auto it : sdic) {
    ans += it.second*(it.second-1)/2;
  }
  cout << ans << endl;
  return 0;
}