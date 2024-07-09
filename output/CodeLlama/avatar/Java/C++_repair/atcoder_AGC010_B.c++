#include <bits/stdc++.h>
using namespace std;
bool possible(int N, vector<int> &A) {
  long sum = 0;
  for (int i = 0; i < N; i++) sum += A[i];
  long NS = (long)N * (N + 1) / 2;
  if (sum % NS != 0) return false;
  long K = sum / NS;
  for (int i = 0; i < N; i++) {
    int j = i == 0 ? N - 1 : i - 1;
    long d = K - (A[i] - A[j]);
    if (d < 0 || d % N != 0) return false;
  }
  return true;
}
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  if (possible(N, A)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}