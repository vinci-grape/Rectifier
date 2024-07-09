#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> V(N);
    for (int i = 0; i < N; i++) {
        std::cin >> V[i];
    }
    
    std::vector<int> C(N);
    for (int i = 0; i < N; i++) {
        std::cin >> C[i];
    }
    
    std::vector<int> list(1);
    int ans = 0;
    int X = 0;
    int Y = 0;
    for (int i = 0; i < N; i++) {
        if (V[i] - C[i] > 0) {
            X = V[i];
            Y = C[i];
            list.push_back(X - Y);
        }
    }
    
    int sum = 0;
    for (int i = 0; i < list.size(); i++) {
        sum += list[i];
    }
    
    std::cout << sum << std::endl;

    return 0;
}