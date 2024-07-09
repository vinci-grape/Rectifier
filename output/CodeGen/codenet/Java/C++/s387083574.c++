#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> map;
  for (int i = 1; i < N + 1; i++) {
    int value;
    cin >> value;
    map[i] = value;
  }
  cout << "{";
  for (auto it = map.begin(); it!= map.end(); ++it) {
    cout << it->first << " " << it->second << " ";
  }
  cout << "}";
  return 0;
}