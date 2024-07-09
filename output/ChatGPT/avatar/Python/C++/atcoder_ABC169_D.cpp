#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
#include <limits>
#define INF std::numeric_limits<int>::max()

std::vector<int> prime_factorize(int n) {
    std::vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << 0 << '\n';
        return 0;
    }

    std::vector<int> fac_ = prime_factorize(n);
    std::unordered_map<int, int> fac;
    for (int factor : fac_) {
        fac[factor]++;
    }

    int ans = 0;
    for (const auto& p : fac) {
        int x = p.second;
        for (int i = 1; i < std::numeric_limits<int>::max(); i++) {
            if (x >= i) {
                x -= i;
                ans++;
            } else {
                break;
            }
        }
    }
    std::cout << ans << '\n';

}