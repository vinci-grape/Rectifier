#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  long x;
  cin >> N >> x;
  vector<long> srimeList(N);
  for (int i = 0; i < N; i++) {
    cin >> srimeList[i];
  }
  vector<vector<long>> costList(N, vector<long>(N));
  for (int i = 0; i < N; i++) {
    costList[i][0] = srimeList[i];
    for (int castNum = 1; castNum < N; castNum++) {
      costList[i][castNum] =
          min(costList[i][castNum - 1], srimeList[(i - castNum + N) % N]);
    }
  }
  vector<long> result(N);
  for (int i = 0; i < N; i++) {
    result[i] = i * x +
               accumulate(costList[i].begin(), costList[i].end(), 0L,
                          [](long a, long b) { return min(a, b); });
  }
  cout << *min_element(result.begin(), result.end()) << endl;
}