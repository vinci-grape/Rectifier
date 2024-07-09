#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N,M,X,Y;
  cin >> N >> M >> X >> Y;
  vector<int> x(N), y(M);
  for (int i = 0; i < N; ++i) {
    cin >> x[i];
  }
  for (int i = 0; i < M; ++i) {
    cin >> y[i];
  }
  auto max_x = max_element(x.begin(), x.end());
  auto min_y = min_element(y.begin(), y.end());
  if (*max_x < *min_y) {
    cout << "No War";
  } else {
    cout << "War";
  }
  return 0;
}