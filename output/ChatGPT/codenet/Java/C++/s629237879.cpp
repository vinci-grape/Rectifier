#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> str(n);
    for (int i = 0; i < n; i++) {
        std::cin >> str[i];
    }
    std::vector<std::string> mark = {"S", "H", "C", "D"};
    for (const std::string& ma : mark) {
        for (int i = 1; i <= 13; i++) {
            std::string s = std::to_string(i);
            std::string st = ma + " " + s;
            if (std::find(str.begin(), str.end(), st) != str.end()) {
                continue;
            }
            else {
                std::cout << st << std::endl;
            }
        }
    }
}