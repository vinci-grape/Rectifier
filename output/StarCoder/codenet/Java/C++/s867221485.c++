#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  long long Q;
  int A;
  int B;
  long long C;
  double min = 9999999;
  long long ans = 0;

  cin >> N;

  cin >> Q;

  while (Q-- > 0) {
    cin >> A >> B >> C;

    if (A == 1) {
      ans += C;
    } else if (A == 2) {
      ans += C * B;
    } else {
      ans += C * B * B;
    }
  }

  cout << ans << endl;

  return 0;
}