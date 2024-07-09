#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_map<int, int> map;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(map.count(a)) {
      map[a] += 1;
    } else {
      map[a] = 1;
    }
  }
  int ans = 0;
  for(auto it = map.begin(); it != map.end(); it++) {
    if((it->second % 2) == 1) ans++;
  }
  cout << ans << endl;

  return 0;
}