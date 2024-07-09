#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if (B < C) {
    cout << 0;
  } else if (A * C < B) {
    cout << C;
  } else {
    cout << B / A;
  }
  return 0;
}