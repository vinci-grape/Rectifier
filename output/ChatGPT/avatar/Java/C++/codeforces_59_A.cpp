#include <iostream>
#include <string>

int main() {
  std::string word;
  std::cin >> word;

  int uppercase = 0;
  int lowercase = 0;

  for (int i = 0; i < word.length(); i++) {
    char ch = word[i];
    if (std::isupper(ch)) {
      uppercase++;
    } else {
      lowercase++;
    }
  }

  if (uppercase > lowercase) {
    std::cout << word;
    for (int i = 0; i < word.length(); i++) {
      std::cout << (char)std::toupper(word[i]);
    }
  } else if (lowercase > uppercase) {
    std::cout << word;
    for (int i = 0; i < word.length(); i++) {
      std::cout << (char)std::tolower(word[i]);
    }
  } else {
    std::cout << word;
    for (int i = 0; i < word.length(); i++) {
      std::cout << (char)std::tolower(word[i]);
    }
  }

  return 0;
}