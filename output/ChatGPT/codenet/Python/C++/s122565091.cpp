#include <iostream>
#include <cmath>

int main() {
    int a, v, b, w, t;
    std::cin >> a >> v >> b >> w >> t;

    if (a == b) {
        std::cout << "YES";
    } else if (v <= w) {
        std::cout << "NO";
    } else {
        if (t < std::abs(a - b) / (v - w)) {
            std::cout << "NO";
        } else {
            std::cout << "YES";
        }
    }

    return 0;
}