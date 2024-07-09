#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int a, b;
  std::cin >> a >> b;
  
  std::vector<int> lst = {a+b, a-b, a*b};
  std::cout << *std::max_element(lst.begin(), lst.end()) << std::endl;
  
  return 0;
}