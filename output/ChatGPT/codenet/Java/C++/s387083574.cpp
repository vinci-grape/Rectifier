#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
  int N;
  std::cin >> N;
  std::map<int, int> map;
  for (int i = 1; i < N + 1; i++) {
    int value;
    std::cin >> value;
    map[i] = value;
  }
  
  std::vector<int> sortedKeys;
  for (const auto& entry : map) {
    sortedKeys.push_back(entry.first);
  }
  std::sort(sortedKeys.begin(), sortedKeys.end(), [&map](int a, int b) { return map[a] < map[b]; });
  
  for (const auto& key : sortedKeys) {
    std::cout << key << " ";
  }
  
  return 0;
}