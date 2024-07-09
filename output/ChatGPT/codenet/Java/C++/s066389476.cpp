#include <iostream>
#include <string>

void solve() {
    std::string a;
    std::cin >> a;
    
    if (a[0] == a[1] || a[1] == a[2] || a[2] == a[0]) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
}

int main() {
    solve();
    return 0;
}