#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i < 10e5; i++) {
        if (i * i > n) {
            std::cout << (i - 1) * (i - 1) << std::endl;
            break;
        }
    }

    return 0;
}