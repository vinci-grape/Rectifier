#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::unordered_set<int> set;
    std::vector<int> input(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }
    
    for (int i = 0; i < n; i++) {
        set.insert(input[i]);
    }
    
    std::cout << set.size() << std::endl;
    
    return 0;
}