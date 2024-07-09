#include <iostream>
#include <sstream>

int main() {
  int abc[3];
  std::string str;
  std::string input;
  std::getline(std::cin, str);
  std::istringstream iss(str);
  for (int i = 0; i < 3; i++) {
    iss >> input;
    abc[i] = std::stoi(input);
  }
  if (abc[0] < abc[1] && abc[1] < abc[2]) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
  return 0;
}