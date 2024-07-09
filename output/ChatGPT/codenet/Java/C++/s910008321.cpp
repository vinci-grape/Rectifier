#include <iostream>

int main() {
    int h, a;
    std::cin >> h >> a;

    if (h % a == 0) {
        std::cout << h / a << std::endl;
    } else {
        std::cout << h / a + 1 << std::endl;
    }

    return 0;
}