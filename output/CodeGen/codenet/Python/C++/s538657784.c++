#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sqN = int(sqrt(N));
  for (int i = 0; i < sqN; ++i) {
    if (N % (sqN - i) == 0) {
      cout << N / (sqN - i) + sqN - i - 2 << endl;
      break;
    }
  }
  return 0;
}