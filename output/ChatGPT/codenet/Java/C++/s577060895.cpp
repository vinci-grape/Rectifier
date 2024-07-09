#include <iostream>
#include <cmath>

int main() {
    long n;
    std::cin >> n;

    double sqrt = std::sqrt(n);
    double nearNum = std::floor(sqrt);

    long ans = std::pow(nearNum, 2);

    std::cout << ans << std::endl;

    return 0;
}