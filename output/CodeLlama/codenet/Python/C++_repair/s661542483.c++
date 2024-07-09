#include <iostream>

using namespace std;

int dfs(int h) {
  if (h == 1) {
    return 1;
  }

  return dfs(h / 2) * 2 + 1;
}

int main() {
  int H;
  cin >> H;

  int count = 0;

  cout << dfs(H) << endl;

  return 0;
}