#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    double res = 0;
    for (int i = 0; i < n; i++) {
        std::string x, u;
        std::cin >> x >> u;
        if (u == "BTC") {
            res += std::stod(x) * 380000;
        } else {
            res += std::stoi(x);
        }
    }
    std::cout << res << std::endl;

    return 0;
}