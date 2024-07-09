#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string n;
    std::getline(std::cin, n);

    std::vector<std::string> a = {"10", "100", "1000", "10000", "100000"};
    int new_val = std::accumulate(n.begin(), n.end(), 0, [](int sum, char c) {
        return sum + (c - '0');
    });

    if (std::find(a.begin(), a.end(), n) != a.end()) {
        std::cout << 10 << std::endl;
    } else {
        std::cout << new_val << std::endl;
    }

    return 0;
}