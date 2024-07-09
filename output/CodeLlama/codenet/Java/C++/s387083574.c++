#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;
  map<int, int> mp;
  for (int i = 1; i < N + 1; i++) {
    int x;
    cin >> x;
    mp[i] = x;
  }
  vector<int> v;
  for (auto it : mp)
    v.push_back(it.first);
  sort(v.begin(), v.end(), [&](int a, int b) {
    return mp[a] < mp[b];
  });
  for (auto it : v)
    cout << it << " ";
  return 0;
}