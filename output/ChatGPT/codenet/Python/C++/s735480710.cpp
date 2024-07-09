#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<std::string> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<std::string> b;
    b = std::vector<std::string>(a.begin()+1, a.end()+1);
    std::reverse(b.begin(), b.end());
    b.insert(b.end(), a.begin(), a.end());
    
    if (a.size() % 2 == 0) {
        for (int i = 0; i < b.size(); i++) {
            std::cout << b[i] << " ";
        }
    } else {
        std::reverse(b.begin(), b.end());
        for (int i = 0; i < b.size(); i++) {
            std::cout << b[i] << " ";
        }
    }
    
    
    return 0;
}