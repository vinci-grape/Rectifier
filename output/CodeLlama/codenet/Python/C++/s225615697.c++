#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int m1 = int(sum([a[i] * ((-1)**i) for i in range(n)]) / 2);

  string result = to_string(m1);

  int m[n];
  m[0] = m1;
  for (int i = 1; i < n; i++) {
    m[i] = a[i-1] - m[i-1];
  }

  for (int i = 0; i < n; i++) {
    cout << m[i] * 2 << " ";
  }

  return 0;
}