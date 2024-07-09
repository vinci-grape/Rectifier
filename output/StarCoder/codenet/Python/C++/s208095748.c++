#include <iostream>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if (B < C) {
    cout << 0 << endl;
  } else if (A * C < B) {
    cout << C << endl;
  } else {
    cout << B / A << endl;
  }
  return 0;
}