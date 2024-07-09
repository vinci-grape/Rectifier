#include <iostream>
using namespace std;

int main() {
  int H;
  cin >> H;

  int count = 0;

  function<int(int)> dfs = [&](int h) {
    if (h == 1) {
      return 1;
    }

    return dfs(h / 2) * 2 + 1;
  };

  cout << dfs(H) << endl;

  return 0;
}