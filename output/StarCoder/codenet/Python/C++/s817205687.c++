#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  // 最初、Aの要素は全て偶数。2で割ったものに置き換え
  for (int i = 0; i < N; i++) {
    A[i] /= 2;
  }

  // 全ての要素について、２で割れる回数が同じでないと題意は満たせない
  int count_div_2 = -1;
  for (int a : A) {
    int cnt = 0;
    while (a % 2 == 0) {
      a /= 2;
      cnt++;
    }
    // 1個目は無条件で保存
    if (count_div_2 == -1) {
      count_div_2 = cnt;
    }
    // 2個目からチェック
    else if (cnt!= count_div_2) {
      cout << 0 << endl;
      return 0;
    }
  }

  // my_lcm = Aの全要素の最小公倍数。　この奇数倍が題意を満たす。
  // my_lcmがMを超えていたら1つも作れない
  int my_lcm = 1;
  for (int a : A) {
    my_lcm = lcm(my_lcm, a);
  }
  if (my_lcm > M) {
    cout << 0 << endl;
    return 0;
  }

  int tmp = M / my_lcm;
  // my_lcmの1,2,...M倍まで使えるが、偶数は使えない
  // tmp=1or2なら1個, 3or4なら2個, 5or6なら3個,...
  cout << (tmp + 1) / 2 << endl;
}