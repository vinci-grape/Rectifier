#include <iostream>
#include <string>

int main() {
    std::string a;
    std::cin >> a;
    std::replace(a.begin(), a.end(), ',', ' ');
    std::cout << a << std::endl;

}