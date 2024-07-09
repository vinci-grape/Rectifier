#include <iostream>

int main() {
    int h, a;
    std::cin >> h >> a;
    int sho = h / a;
    int am = h % a;
    if (am != 0) {
        sho += 1;
    }
    else {
        // Do nothing
    }
    std::cout << sho << std::endl;

    return 0;
}