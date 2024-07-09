#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  vector<int> as;
  cin >> n >> k;
  as.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> as[i];
    as[i]--;
  }
  cout << Calculator(n, k, as).calculate() << endl;
}

class Calculator {
 private:
  int k;
  int answer = 0;
  bool isCalculate = false;
  vector<vector<int>> lists;

 public:
  Calculator(int n, int k, vector<int> as) {
    this->k = k;
    for (int i = 0; i < n; i++) {
      this->lists.push_back(vector<int>());
    }
    for (int i = 0; i < n; i++) {
      int j = as[i];
      if (0 < i) {
        this->lists[j].push_back(i);
      } else if (0 < j) {
        this->answer++;
      }
    }
  }
  int calculate() {
    if (!this->isCalculate) {
      this->dfs(0, 0);
      this->isCalculate = true;
    }
    return this->answer;
  }

 private:
  int dfs(int a, int pre) {
    int h = 0;
    for (int i : this->lists[a]) {
      h = max(h, this->dfs(i, a));
    }
    if (0 < pre && h == this->k - 1) {
      h = 0;
      this->answer++;
    } else {
      h++;
    }
    return h;
  }
};