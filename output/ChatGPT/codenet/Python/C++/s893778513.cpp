#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> l(n);
    for (int i = 0; i < n; i++) {
        std::cin >> l[i];
    }
    
    int b = *std::max_element(l.begin(), l.end());
    int s = 0;
    for (int num : l) {
        s += num;
    }
    
    if (b < s - b) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}