#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  long A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(A, A + N);
  for (int j = 1; j < N; j++) {
    if (A[j] == A[j-1]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

}