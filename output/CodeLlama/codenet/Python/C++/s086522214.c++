#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

//素因数を並べる
vector<int> prime_decomposition(int n) {
  int i = 2;
  vector<int> table;
  while (i * i <= n) {
    while (n % i == 0) {
      n /= i;
      table.push_back(i);
    }
    i++;
  }
  if (n > 1) {
    table.push_back(n);
  }
  return table;
}

// 桁数を吐く
vector<int> digit(int i) {
  vector<int> d;
  if (i > 0) {
    d = digit(i / 10);
    d.push_back(i % 10);
  }
  return d;
}

int getNearestValueIndex(vector<int> list, int num) {
  // リスト要素と対象値の差分を計算し最小値のインデックスを取得
  int idx = distance(list.begin(), min_element(list.begin(), list.end(), [num](int a, int b) {
    return abs(a - num) < abs(b - num);
  }));
  return idx;
}

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> x(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i];
  }

  vector<int> P(N);
  vector<int> Y(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i] >> Y[i];
  }

  if (all_of(S.begin(), S.end(), [](char c) {
    return c == '7' || c == '5' || c == '3';
  })) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  vector<int> A(N);
  vector<int> B(N);
  vector<int> totAB(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
    totAB[i] = A[i] + B[i];
  }
  sort(totAB.begin(), totAB.end());
  reverse(totAB.begin(), totAB.end());
  A.resize(N);
  B.resize(N);
  for (int i = 0; i < N; i++) {
    A[i] = totAB[i] - B[i];
  }
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());
  B.resize(N);
  for (int i = 0; i < N; i++) {
    B[i] = totAB[i] - A[i];
  }
  sort(B.begin(), B.end());
  reverse(B.begin(), B.end());
  for (int i = 0; i < N; i++) {
    cout << A[i] << " " << B[i] << endl;
  }

  vector<int> dp(N);
  for (int n = 0; n < N; n++) {
    if (n == 0) {
      dp[n] = 0;
    } else {
      for (int k = 1; k <= K; k++) {
        if (n - k >= 0) {
          dp[n] = min(dp[n], dp[n - k] + abs(h[n] - h[n - k]));
        } else {
          break;
        }
      }
    }
  }

  return 0;
}