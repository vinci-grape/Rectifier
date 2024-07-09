#include <iostream>
#include <cstdlib>

using namespace std;

int dfs(int h);

int main() {
  int H;
  cin >> H;
  cout << dfs(H) << endl;
  return 0;
}

int dfs(int h) {
  if (h == 1) {
    return 1;
  }
  return dfs(h // 2) * 2 + 1;
}