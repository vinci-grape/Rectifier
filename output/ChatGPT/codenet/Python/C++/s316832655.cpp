#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << static_cast<int>((a * b) / 2) << std::endl;
    return 0;
}