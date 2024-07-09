#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int K;
  cin >> K;
  if (K % 2 == 0 || K % 5 == 0) {
    cout << -1 << endl;
    return 0;
  }
  if (K % 7 == 0)
    K /= 7;
  K *= 9;
  int ans = 1;
  int remainder = 10 % K;
  while (remainder != 1) {
    ans++;
    remainder = remainder * 10 % K;
  }
  cout << ans << endl;
  return 0;
}