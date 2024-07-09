#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> C(10, vector<int>(10, 0));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> C[i][j];
    }
  }
  vector<vector<int>> A(h, vector<int>(w, 0));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> A[i][j];
    }
  }
  vector<vector<int>> G(10, vector<int>(10, 0));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      G[i][j] = C[i][j];
    }
  }
  for (int i = 0; i < 10; i++) {
    if (i == 1) {
      continue;
    }
    for (int j = 0; j < 10; j++) {
      if (G[i][j] == 0) {
        G[i][j] = 1000000000;
      }
    }
  }
  int s = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (A[i][j] == -1 || A[i][j] == 1) {
        continue;
      }
      s += G[A[i][j]][1];
    }
  }
  cout << s << endl;
}