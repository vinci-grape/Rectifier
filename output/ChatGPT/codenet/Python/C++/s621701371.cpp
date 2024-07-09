#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;
    int q;
    std::cin >> q;
    std::vector<std::vector<std::string>> qs(q, std::vector<std::string>(3));
    for (int i = 0; i < q; i++) {
        std::cin >> qs[i][0] >> qs[i][1] >> qs[i][2];
    }
    bool n = false;
    std::string left = "";
    std::string right = "";
    for (const std::vector<std::string>& operation : qs) {
        if (operation[0] == "1") {
            n = !n;
        }
        if (operation[0] == "2") {
            int f = std::stoi(operation[1]);
            std::string c = operation[2];
            if (n) {
                f = (f != 1) ? 1 : 2;
            }
            if (f == 1) {
                left = c + left;
            } else if (f == 2) {
                right += c;
            }
        }
    }
    s = left + s + right;
    std::string result = (n) ? std::string(s.rbegin(), s.rend()) : s;
    std::cout << result << std::endl;
    return 0;
}