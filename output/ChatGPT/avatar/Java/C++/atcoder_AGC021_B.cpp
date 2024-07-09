#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> x(N);
    std::vector<int> y(N);
    
    for (int i = 0; i < N; ++i) {
        std::cin >> x[i] >> y[i];
    }
    
    for (int i = 0; i < N; ++i) {
        std::vector<double> thetas;
        
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;
            thetas.push_back(std::atan2(y[j] - y[i], x[j] - x[i]));
        }
        
        std::sort(thetas.begin(), thetas.end());
        thetas.push_back(thetas[0] + 2 * M_PI);
        double ans = 0;
        
        for (int k = 0; k < N - 1; ++k) {
            ans = std::max(ans, thetas[k + 1] - thetas[k] - M_PI);
        }
        
        std::cout << ans / (M_PI * 2) << std::endl;
    }

    return 0;
}