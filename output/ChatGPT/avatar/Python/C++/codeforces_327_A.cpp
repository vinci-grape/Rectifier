#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> find(std::string s, char ch) {
    std::vector<int> indices;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ch) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::replace(s.begin(), s.end(), '0', ' ');
    if (s.find(' ') == std::string::npos) {
        std::cout << n - 1 << std::endl;
    } else {
        std::vector<int> indices = find(s, ' ');
        if (indices.size() == 1) {
            std::cout << n << std::endl;
        } else {
            int maximum = 0;
            for (int i = 0; i < indices.size() - 1; i++) {
                for (int j = i + 1; j < indices.size(); j++) {
                    maximum = std::max(maximum, 2 + 2 * (std::abs(i - j) - 1) - (std::abs(indices[i] - indices[j]) - 1));
                }
            }
            std::cout << std::count(s.begin(), s.end(), '1') + maximum << std::endl;
        }
    }
    return 0;
}