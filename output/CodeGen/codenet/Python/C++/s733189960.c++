#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> sdic;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    sdic[s]++;
  }
  int ans = 0;
  for (auto it = sdic.begin(); it!= sdic.end(); it++) {
    ans += it->second * (it->second - 1) / 2;
  }
  cout << ans << endl;
}