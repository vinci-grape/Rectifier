#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    int min = B * 10;
    int max = (B + 1) * 10 - 1;

    int ans = -1;
    for (int i = min; i <= max; i++) {
        if (static_cast<int>(i * 0.08) == A) {
            ans = i;
            break;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}