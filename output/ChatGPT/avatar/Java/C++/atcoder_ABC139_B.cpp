#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int amari = 0;
    int result = 0;
    result = (B - 1) / (A - 1);
    amari = (B - 1) % (A - 1);
    
    if (amari != 0) {
        result += 1;
    }
    
    std::cout << result << std::endl;
    
    return 0;
}