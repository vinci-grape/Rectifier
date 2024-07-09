#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int A, B, H, M;
    std::cin >> A >> B >> H >> M;

    long double mkaku = M * 6;
    long double hkaku = H * 30 + M / 2;
    long double kaku = std::abs(mkaku - hkaku);
    double dkaku = M_PI * kaku / 180.0;

    long double AA = A;
    long double BB = B;
    long double CC = AA * AA + BB * BB;
    long double DD = 2 * AA * BB * std::cos(dkaku);

    long double ans2 = CC - DD;
    double ans = std::sqrt(ans2);

    std::cout << std::fixed << std::setprecision(10) << ans << std::endl;

    return 0;
}