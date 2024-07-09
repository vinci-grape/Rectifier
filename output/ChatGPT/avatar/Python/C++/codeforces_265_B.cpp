#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> l;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        l.push_back(num);
    }
    int ans = n - 1;
    int last = 0;
    for (int i : l) {
        ans += std::abs(last - i) + 1;
        last = i;
    }
    std::cout << ans << std::endl;

    return 0;
}