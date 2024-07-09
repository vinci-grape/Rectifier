#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> map;
  for (int i = 1; i < N + 1; i++) {
    int temp;
    cin >> temp;
    map[i] = temp;
  }
  vector<int> sorted_map = map.begin(), sorted_map_value;
  for (auto it = map.begin(); it!= map.end(); it++) {
    sorted_map_value.push_back(it->second);
  }
  sort(sorted_map_value.begin(), sorted_map_value.end());
  for (auto it = sorted_map.begin(); it!= sorted_map.end(); it++) {
    cout << it->first << " ";
  }
  cout << endl;
  return 0;
}