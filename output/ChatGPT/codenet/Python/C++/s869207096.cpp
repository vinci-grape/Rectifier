#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 1;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      continue;
    } else {
      cnt += 1;
    }
  }
  cout << cnt << endl;
  return 0;
}