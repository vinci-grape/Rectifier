#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> li(n);
    for (int i = 0; i < n; i++) {
        std::cin >> li[i];
    }
    std::sort(li.begin(), li.end());
    std::vector<int> tmp(li.begin(), li.begin() + k);
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += tmp[i];
    }
    std::cout << sum << std::endl;
    return 0;
}