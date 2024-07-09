#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int f = 0;
    int k = 0, j = 0, i = 0;
    for (k = 0; k < n; k++) {
        int t = a[k];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - 1; j++) {
                if (i != j && t == (a[i] + a[j])) {
                    f = 1;
                    break;
                }
            }
            if (f == 1) break;
        }
        if (f == 1) break;
    }

    if (f == 1) {
        std::cout << k + 1 << " " << j + 1 << " " << i + 1 << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }

}