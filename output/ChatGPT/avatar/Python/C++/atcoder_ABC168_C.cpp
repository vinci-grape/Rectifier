#include <iostream>
#include <cmath>

int main() {
    int a, b, h, m;
    std::cin >> a >> b >> h >> m;

    double C = std::abs(360.0 / 60.0 * m - 360.0 / 12.0 * h - 360.0 / 12.0 / 60.0 * m);
    if (C > 180) {
        C = 360 - C;
    }
    double cosC = std::cos(M_PI * C / 180.0);
    std::cout << std::sqrt(a * a + b * b - 2 * a * b * cosC) << std::endl;


    return 0;
}