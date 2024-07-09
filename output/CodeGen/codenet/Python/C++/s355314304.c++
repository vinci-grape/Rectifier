#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n % 1000 == 0) {
    cout << 0;
  } else {
    cout << 1000 - n % 1000;
  }
  return 0;
}