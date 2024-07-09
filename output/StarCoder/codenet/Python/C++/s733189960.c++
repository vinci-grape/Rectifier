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
    string key = s;
    sdic[key]++;
  }
  int ans = 0;
  for (auto it = sdic.begin(); it!= sdic.end(); it++) {
    ans += (it->second)*(it->second-1)/2;
  }
  cout << ans << endl;
}