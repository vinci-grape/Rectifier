#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x(n);
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    
    int ans = std::numeric_limits<int>::max();
    for (int i = 0; i <= 100; i++) {
        std::vector<int> tmp(n);
        for (int j = 0; j < n; j++) {
            tmp[j] = std::pow(i - x[j], 2);
        }
        
        int sum_tmp = 0;
        for (int j = 0; j < n; j++) {
            sum_tmp += tmp[j];
        }
        
        if (sum_tmp < ans) {
            ans = sum_tmp;
        }
    }
    
    std::cout << ans << std::endl;

    return 0;
}