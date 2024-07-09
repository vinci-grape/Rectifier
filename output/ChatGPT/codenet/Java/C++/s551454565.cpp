#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    if (s == "Sunny") {
        std::cout << "Cloudy" << std::endl;
    } else if (s == "Cloudy") {
        std::cout << "Rainy" << std::endl;
    } else {
        std::cout << "Sunny" << std::endl;
    }
    return 0;
}