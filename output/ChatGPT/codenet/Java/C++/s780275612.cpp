#include <iostream>
#include <cmath>

int main() {
    int intA;
    std::cin >> intA;

    double dbAncer = std::pow(intA, 3);
    int intAncer = static_cast<int>(dbAncer);
    std::cout << intAncer << std::endl;

    return 0;
}