#include <iostream>

int main() {
    int candeleIntere, b;
    std::cin >> candeleIntere >> b;
    int s = 0;
    int restoSciolte = 0;
    
    while (candeleIntere > 0 || restoSciolte >= b) {
        candeleIntere += restoSciolte / b;
        restoSciolte %= b;
        s += candeleIntere;
        restoSciolte += candeleIntere % b;
        candeleIntere /= b;
    }
    
    std::cout << s << std::endl;
    
    
    return 0;
}