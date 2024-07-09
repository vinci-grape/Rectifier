#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> t[i];
    }

    int m;
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        int p, x;
        std::cin >> p >> x;
        int s = 0;
        for (int j = 0; j < t.size(); ++j) {
            if (j == p - 1) {
                s += x;
            } else {
                s += t[j];
            }
        }
        std::cout << s << std::endl;
    }

    return 0;
}