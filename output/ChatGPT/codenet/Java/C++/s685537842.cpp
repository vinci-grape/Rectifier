#include <iostream>

int main() {
    int a, b, t;
    std::cin >> a >> b >> t;
    double time = 0;
    int count = 0;
    while (time < t + 0.5) {
        count += b;
        time += a;
        if (time > t + 0.5) {
            count -= b;
            break;
        }
    }
    std::cout << count << std::endl;
    
    return 0;
}