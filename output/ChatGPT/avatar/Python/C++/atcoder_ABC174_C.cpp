#include <iostream>
#include <cmath>

int main() {
    int k;
    std::cin >> k;
    int t = 0;
    for (int i = 1; i <= k; i++) {
        t = (t % k) * 10 + 7;
        if (t % k == 0) {
            std::cout << i << std::endl;
            break;
        }
    }
    if (t % k != 0) {
        std::cout << -1 << std::endl;
    }
    return 0;
}