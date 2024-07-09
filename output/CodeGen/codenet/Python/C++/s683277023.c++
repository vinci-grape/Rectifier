#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> li(n);
  for (int i = 0; i < n; i++) {
    cin >> li[i];
  }
  li.sort();
  vector<int> tmp(k);
  for (int i = 0; i < k; i++) {
    tmp[i] = li[i];
  }
  cout << sum(tmp);
  return 0;
}