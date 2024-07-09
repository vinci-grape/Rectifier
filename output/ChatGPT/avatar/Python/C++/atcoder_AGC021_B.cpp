#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<std::pair<int, int>> XY(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        std::cin >> x >> y;
        XY[i] = std::make_pair(x, y);
    }
    
    std::vector<double> D(N);
    for (int i = 0; i < N; i++) {
        int x = XY[i].first;
        int y = XY[i].second;
        
        std::vector<double> angles;
        for (int j = 0; j < N; j++) {
            if (j != i) {
                int X = XY[j].first;
                int Y = XY[j].second;
                double angle = std::atan2(X - x, Y - y);
                angles.push_back(angle);
            }
        }
        
        std::sort(angles.begin(), angles.end());
        angles.push_back(angles[0] + 2 * M_PI);
        
        double ans = 0;
        for (int i = 0; i < angles.size() - 1; i++) {
            double a = angles[i];
            double b = angles[i + 1];
            if (b - a >= M_PI) {
                ans = (b - a) - M_PI;
            }
        }
        
        std::cout << ans / (2 * M_PI) << std::endl;
    }
    
    return 0;
}