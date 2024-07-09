#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    std::string result = (s.find('A') != std::string::npos && s.find('B') != std::string::npos) ? "Yes" : "No";
    std::cout << result << std::endl;

    return 0;
}