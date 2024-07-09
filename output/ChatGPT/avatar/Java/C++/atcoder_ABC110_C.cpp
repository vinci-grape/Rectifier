#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string S, T;
    std::cin >> S >> T;

    std::vector<std::string> A = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    bool res = true;
    for (const std::string& s : A) {
        int sIdx = S.find(s);
        if (sIdx < 0)
            continue;

        std::string t = std::string(1, T[sIdx]);
        int idx = 0;
        while (idx < S.length()) {
            if (S.find(s, idx) >= 0) {
                if (S.find(s, idx) != T.find(t, idx)) {
                    res = false;
                    break;
                } else {
                    idx = S.find(s, idx) + 1;
                }
            } else if (T.find(t, idx) >= 0) {
                res = false;
                break;
            } else {
                break;
            }
        }

        if (!res)
            break;
    }

    if (res)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}