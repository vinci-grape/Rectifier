#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int min = B * 10;
  int max = (B+1) * 10 -1;

  int ans = -1;
  for (int i = min; i <= max; i++) {
    if (i * 0.08 == A) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}