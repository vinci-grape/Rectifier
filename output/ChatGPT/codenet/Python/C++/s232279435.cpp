#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

int main() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        std::unordered_set<char> x(s.begin(), s.begin() + i + 1);
        std::unordered_set<char> y(s.begin() + i + 1, s.end());

        int z = 0;
        for (char w : x) {
            if (y.find(w) != y.end()) {
                z++;
            }
        }
        if (z > ans) {
            ans = z;
        }
    }
    std::cout << ans << std::endl;

    return 0;
}