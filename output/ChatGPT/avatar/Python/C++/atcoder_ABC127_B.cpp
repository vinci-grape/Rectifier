#include <iostream>
#include <cmath>

int main() {
    int r, D, x;
    std::cin >> r >> D >> x;
    
    for (int i = 2; i < 12; i++) {
        std::cout << static_cast<int>(std::pow(r, i - 1) * (x + D / (1 - r)) - D / (1 - r)) << std::endl;
    }
    
    
    return 0;
}