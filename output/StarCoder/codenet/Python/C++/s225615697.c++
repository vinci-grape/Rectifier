#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int m1 = 0;
  for (int i = 0; i < n; i++) {
    m1 += a[i] * ((-1) ^ i);
  }
  m1 /= 2;

  cout << m1 << endl;

  vector<int> m(n);
  m[0] = m1;
  for (int i = 1; i < n; i++) {
    m[i] = a[i-1] - m[i-1];
  }

  for (int i = 0; i < n; i++) {
    cout << m[i] * 2 << " ";
  }
}