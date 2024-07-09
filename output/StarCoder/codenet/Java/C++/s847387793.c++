#include <bits/stdc++.h>

using namespace std;

class Solver {
  int n, m, q;
  int max = 0;
  int *a, *b, *c, *d;

  void run() {
    cin >> n >> m >> q;
    a = new int[q];
    b = new int[q];
    c = new int[q];
    d = new int[q];
    for (int i = 0; i < q; i++) {
      cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(new int[] { 1 });
    cout << max << endl;
  }

  void dfs(int *array) {
    if (array.length > n) {
      int score = 0;
      for (int i = 0; i < q; i++) {
        if (array[b[i]] - array[a[i]] == c[i]) {
          score += d[i];
        }
      }
      max = max > score? max : score;
      return;
    }

    // Append an item to the existing array
    int *newArray = new int[array.length + 1];
    for (int i = 0; i < array.length; i++) {
      newArray[i] = array[i];
    }
    newArray[array.length] = array[array.length - 1];

    while (newArray[array.length] <= m) {
      dfs(newArray);
      newArray[array.length]++;
    }
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Solver solver;
  solver.run();
  return 0;
}