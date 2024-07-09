"""
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int r = 0;
  for (int ii = 0; ii < n; ii++) {
    if (ii % 3!= 0 && ii % 5!= 0) {
      r += ii + 1;
    } else if (ii % 3!= 0) {
      r += 3;
    } else if (ii % 5!= 0) {
      r += 5;
    }
  }
  cout << r << endl;
  return 0;
}
"""